#include <vector>
using namespace std;

// LeetCode 283 - Move Zeroes
// Time: O(n), Space: O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx = 0; // Pointer to place the next non-zero element
        int n = nums.size();

        // Step 1: Move all non-zero elements forward
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[idx] = nums[i];
                idx++;
            }
        }

        // Step 2: Fill remaining positions with zeros
        while (idx < n) {
            nums[idx] = 0;
            idx++;
        }
    }
};
