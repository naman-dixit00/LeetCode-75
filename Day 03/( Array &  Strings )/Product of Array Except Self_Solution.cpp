#include <vector>
using namespace std;

// LeetCode 238 - Product of Array Except Self
// Time: O(n), Space: O(n)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        // Prefix[i] stores product of all elements before i
        vector<int> prefix(n, 1);
        // Suffix[i] stores product of all elements after i
        vector<int> suffix(n, 1);
        
        // Build prefix product
        for (int i = 1; i < n; ++i) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }
        
        // Build suffix product
        for (int i = n - 2; i >= 0; --i) {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }
        
        // Final result = prefix[i] * suffix[i]
        vector<int> answer(n);
        for (int i = 0; i < n; ++i) {
            answer[i] = prefix[i] * suffix[i];
        }
        
        return answer;
    }
};
