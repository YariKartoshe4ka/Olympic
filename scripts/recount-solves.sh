#!/bin/bash

recount () {
    files=$(find $1 -type f -name '*.cpp' -o -name '*.py' 2>/dev/null | wc -l)
    sed -r -i "s/[0-9]*(<!-- $2 -->)/$files\1/g" README.md
}

recount acmp.ru ACMP
recount codeforces.com CODEFORCES
recount contest.nlogn.info NLOGN
recount olymp.informatics.ru INFORMATICS
recount rmatics.info RMATICS
