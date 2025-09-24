#include <iostream>
#include <map>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    int dfs(TreeNode* node, long currSum, int target, map<long,int>& prefix) {
        if (node == NULL) return 0;
        currSum += node->val;
        int res = 0;
        if (prefix.find(currSum - target) != prefix.end())
            res += prefix[currSum - target];
        prefix[currSum]++;
        res += dfs(node->left, currSum, target, prefix);
        res += dfs(node->right, currSum, target, prefix);
        prefix[currSum]--; // backtrack
        return res;
    }
    
public:
    int pathSum(TreeNode* root, int targetSum) {
        map<long,int> prefix;
        prefix[0] = 1;
        return dfs(root, 0, targetSum, prefix);
    }
};
