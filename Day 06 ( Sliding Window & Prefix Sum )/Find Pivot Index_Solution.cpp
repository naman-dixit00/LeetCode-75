#include <vector>
using namespace std;

// LeetCode 724 - Find Pivot Index
// Time: O(n), Space: O(1)

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        // Compute the total sum of the array
        int totalSum = 0;
        for (int& num : nums) {
            totalSum += num;
        }

        int leftSum = 0;

        // Traverse the array to find the pivot index
        for (int i = 0; i < n; i++) {
            // Right sum = total sum - left sum - current element
            int rightSum = totalSum - leftSum - nums[i];

            // If left sum equals right sum, we found the pivot
            if (leftSum == rightSum) {
                return i;
            }

            // Update left sum for next iteration
            leftSum += nums[i];
        }

        // No pivot index found
        return -1;
    }
};
