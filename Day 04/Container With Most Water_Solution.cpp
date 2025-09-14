#include <vector>
#include <algorithm>
using namespace std;

// LeetCode 11 - Container With Most Water
// Time: O(n), Space: O(1)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;                     // Left pointer
        int right = height.size() - 1;    // Right pointer
        int maxArea = 0;

        // Two-pointer approach
        while (left < right) {
            // Area formed between two pointers
            int currentArea = min(height[left], height[right]) * (right - left);

            // Update maximum area found so far
            maxArea = max(maxArea, currentArea);

            // Move the pointer with smaller height inward
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
};
