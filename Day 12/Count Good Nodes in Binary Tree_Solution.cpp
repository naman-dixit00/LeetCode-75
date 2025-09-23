#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    int dfs(TreeNode* node, int maxSoFar) {
        if (node == NULL) return 0;
        int good = (node->val >= maxSoFar) ? 1 : 0;
        maxSoFar = max(maxSoFar, node->val);
        return good + dfs(node->left, maxSoFar) + dfs(node->right, maxSoFar);
    }
public:
    int goodNodes(TreeNode* root) {
        return dfs(root, -100000); // smaller than min constraint
    }
};
