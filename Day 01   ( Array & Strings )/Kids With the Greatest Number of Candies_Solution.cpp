#include <vector>
#include <algorithm>
using namespace std;

// LeetCode 1431 - Kids With the Greatest Number of Candies
// Time: O(n), Space: O(n)

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // Find the maximum number of candies any kid currently has
        int max_candies = *max_element(candies.begin(), candies.end());

        // Result vector to store boolean values for each kid
        vector<bool> result(candies.size());

        // Check for each kid if they can reach or exceed max_candies
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= max_candies) {
                result[i] = true;   // this kid can have the greatest number
            } else {
                result[i] = false;  // this kid cannot reach the maximum
            }
        }

        return result;
    }
};