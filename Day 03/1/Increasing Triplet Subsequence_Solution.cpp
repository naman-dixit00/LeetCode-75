#include <vector>
#include <climits>
using namespace std;

// LeetCode 334 - Increasing Triplet Subsequence
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;

        for (size_t i = 0; i < nums.size(); i++) {
            int n = nums[i];
            if (n <= first) {
                // n is the new smallest
                first = n;
            } else if (n <= second) {
                // n is greater than first but smaller than second
                second = n;
            } else {
                // n is greater than both first and second -> triplet exists
                return true;
            }
        }
        return false;
    }
};
