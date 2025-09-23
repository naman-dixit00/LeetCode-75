#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    void getLeaves(TreeNode* root, vector<int>& leaves) {
        if (root == NULL) return;
        if (root->left == NULL && root->right == NULL) {
            leaves.push_back(root->val);
        }
        getLeaves(root->left, leaves);
        getLeaves(root->right, leaves);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> l1, l2;
        getLeaves(root1, l1);
        getLeaves(root2, l2);
        return l1 == l2;
    }
};
