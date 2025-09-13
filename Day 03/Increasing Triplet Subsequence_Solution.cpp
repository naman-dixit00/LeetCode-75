#include <vector>
#include <climits>
using namespace std;

// LeetCode 334 - Increasing Triplet Subsequence
// Time: O(n), Space: O(1) 

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // Initialize two smallest values as infinity
        int first = INT_MAX, second = INT_MAX;

        // Traverse the array
        for (int n : nums) {
            if (n <= first) {
                // Update first if n is smaller
                first = n;
            } else if (n <= second) {
                // Update second if n is greater than first but smaller than second
                second = n;
            } else {
                // Found a number greater than both first and second
                return true;
            }
        }

        // No increasing triplet found
        return false;
    }
};
