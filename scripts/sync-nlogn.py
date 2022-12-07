#!/usr/bin/python3

from abc import abstractmethod
from pathlib import Path
import os

from requests import Session


BASE_DIR = Path(__file__).absolute().parent.parent


CONTEST_PROBLEMS = 'https://contest.nlogn.info/api/contest/{contest_id}/problems'
SUPPORTED_EXTENSIONS = {'py', 'cpp'}


class Problem:
    def __new__(self, *args, **kwargs):
        try:
            system = kwargs.pop('system').title()
            for cls in ProblemABC.__subclasses__():
                if cls.__name__ == system + 'Problem':
                    return cls(*args, **kwargs)

        except KeyError:
            pass


class ProblemABC:
    def __init__(self, contest, internal_id, foreign_id, title):
        self.contest = contest
        self.internal_id = internal_id.lower()
        self.foreign_id = foreign_id
        self.title = title

    def path_to_nlogn(self, ext):
        return BASE_DIR / f'contest.nlogn.info/{self.contest}/{self.internal_id}.{ext}'

    @abstractmethod
    def path_to_self(self):
        pass


class TimusProblem(ProblemABC):
    def path_to_self(self, ext):
        vol = (int(self.foreign_id) - 1000) // 100
        return BASE_DIR / 'acm.timus.ru' \
            / f'Том {vol + 1} ({1000 + vol * 100}-{1099 + vol * 100})' \
            / f'[{self.foreign_id}] {self.title}.{ext}'


class AcmpProblem(ProblemABC):
    def path_to_self(self, ext):
        vol = (int(self.foreign_id) - 1) // 100
        return BASE_DIR / 'acmp.ru' / f'[{1 + vol * 100:04}] - [{(vol + 1) * 100:04}]' \
            / f'[{int(self.foreign_id):04}] {self.title}.{ext}'


def main():
    session = Session()
    session.cookies['auth.token'] = os.getenv('NLOGN_AUTH_TOKEN')

    for path in (BASE_DIR / 'contest.nlogn.info').glob('*'):
        contest_id = path.name

        for problem in session.get(CONTEST_PROBLEMS.format(contest_id=contest_id)).json():
            problem = Problem(
                contest_id, problem['internalSymbolIndex'], problem['foreignProblemIdentifier'],
                problem['title'], system=problem['systemType']
            )

            if problem is None:
                continue

            for ext in SUPPORTED_EXTENSIONS:
                path_to_nlogn = problem.path_to_nlogn(ext)
                path_to_self = problem.path_to_self(ext)

                if path_to_nlogn.exists() and not path_to_self.exists():
                    path_to_self.parent.mkdir(parents=True, exist_ok=True)
                    path_to_self.symlink_to(os.path.relpath(path_to_nlogn, path_to_self.parent))


if __name__ == '__main__':
    main()
