#include <vector>
#include <algorithm>
using namespace std;

// LeetCode 1493 - Longest Subarray of 1's After Deleting One Element
// Time: O(n), Space: O(1)

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = 0;       // Left boundary of sliding window
        int zeros = 0;      // Count of zeros in current window
        int ans = 0;        // Maximum subarray length found

        // Expand the window with right pointer
        for (int right = 0; right < n; right++) {
            if (nums[right] == 0) {
                zeros++;
            }

            // If more than one zero, shrink window from left
            while (zeros > 1) {
                if (nums[left] == 0) {
                    zeros--;
                }
                left++;
            }

            // Update maximum length (subtracting one deleted zero)
            ans = max(ans, right - left + 1 - zeros);
        }

        // Edge case: if entire array is 1's, must delete one element
        return (ans == n) ? ans - 1 : ans;
    }
};
