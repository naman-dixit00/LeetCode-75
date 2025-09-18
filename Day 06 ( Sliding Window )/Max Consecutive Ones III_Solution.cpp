#include <vector>
using namespace std;

// LeetCode 1004 - Max Consecutive Ones III
// Time: O(n), Space: O(1)
// Sliding Window + Two Pointers

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;   // Left boundary of sliding window

        // Expand the window by moving right pointer
        for (int right = 0; right < nums.size(); right++) {
            // If we include a 0 in the window, use one flip
            if (nums[right] == 0) {
                k--;
            }

            // If flips used exceed k, shrink window from left
            if (k < 0) {
                if (nums[left] == 0) {
                    k++;  // Restore one flip when removing a 0
                }
                left++;   // Move left boundary forward
            }
        }

        // The largest valid window size = total length - invalid prefix
        return nums.size() - left;        
    }
};
