#include <vector>
#include <algorithm>
using namespace std;

// LeetCode 643 - Maximum Average Subarray I
// Time: O(n), Space: O(1) (sliding window)

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // Edge case: if only one element, return it as double
        if (nums.size() == 1) {
            return static_cast<double>(nums[0]);
        }  

        // Initialize sliding window pointers
        int start = 0;       // start index of window
        int end = k;         // end index of window (exclusive)

        // Compute initial average of first window
        double average = 0.0;
        for (int i = 0; i < k; i++) {
            average += static_cast<double>(nums[i]) / k;
        }

        double max_average = average; // store maximum average seen so far

        // Slide the window across the array
        while (end < nums.size()) {
            // Subtract element going out of the window
            average -= static_cast<double>(nums[start]) / k;

            // Add new element coming into the window
            average += static_cast<double>(nums[end]) / k;

            // Update max_average if current window average is larger
            max_average = max(max_average, average);

            // Move window forward
            start++;
            end++;
        }

        // Return the maximum average found
        return max_average;
    }
};
