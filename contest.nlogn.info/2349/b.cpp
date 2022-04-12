#include <iostream>
#include <cstring>
using namespace std;


struct TreeNode {
    TreeNode *left, *right;

    int nleft, key, priority;

    TreeNode(int _key) {
        key = _key;
        priority = rand();
        left = right = nullptr;
    }
};


TreeNode* merge(TreeNode *left, TreeNode *right) {
    if (left == nullptr || right == nullptr)
        return left == nullptr ? right : left;

    if (left->priority > right->priority) {
        left->right = merge(left->right, right);
        return left;
    }
    else {
        right->left = merge(left, right->left);
        return right;
    }
}


pair<TreeNode*, TreeNode*> split(TreeNode *root, int key) {
    if (root == nullptr)
        return make_pair(nullptr, nullptr);

    if (root->key < key) {
        pair<TreeNode*, TreeNode*> splitted = split(root->right, key);
        root->right = splitted.first;
        return make_pair(root, splitted.second);
    }
    else {
        pair<TreeNode*, TreeNode*> splitted = split(root->left, key);
        root->left = splitted.second;
        return make_pair(splitted.first, root);
    }
}


void insert(TreeNode *&root, int key) {
    pair<TreeNode*, TreeNode*> splitted = split(root, key);
    root = merge(merge(splitted.first, new TreeNode(key)), splitted.second);
}


void erase(TreeNode *&root, int key) {
    pair<TreeNode*, TreeNode*> less_equalgreater = split(root, key),
                               equal_greater = split(less_equalgreater.second, key + 1);

    root = merge(less_equalgreater.first, equal_greater.second);
}


int index(TreeNode *root, int key, int i = 0) {
    if (root-> key == key)
        return i;

}


int main() {
    int q;
    cin >> q;

    string cmd;
    int x;

    TreeNode *root = nullptr;

    while (q--) {
        cin >> cmd >> x;

        if (cmd == "add")
            insert(root, x);
        else if (cmd == "del")
            erase(root, x);
        else if (cmd == "ind")
            cout << index(root, x) << endl;
        else if (cmd == "val")
            cout << value(root, x) << endl;
    }

    return 0;
}