#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    int maxLen = 0;
    void dfs(TreeNode* node, bool goLeft, int length) {
        if (node == NULL) return;
        maxLen = max(maxLen, length);
        if (goLeft) {
            dfs(node->left, false, length + 1);
            dfs(node->right, true, 1);
        } else {
            dfs(node->right, true, length + 1);
            dfs(node->left, false, 1);
        }
    }
    
public:
    int longestZigZag(TreeNode* root) {
        dfs(root, true, 0);
        dfs(root, false, 0);
        return maxLen;
    }
};
