#include <vector>
#include <set>
using namespace std;

// LeetCode 2215 - Find the Difference of Two Arrays
// Time: O(n + m), Space: O(n + m)

class Solution {
public:
    vector< vector<int> > findDifference(vector<int>& nums1, vector<int>& nums2) {
        // Convert nums1 and nums2 into sets to remove duplicates
        set<int> s1, s2;
        for (size_t i = 0; i < nums1.size(); i++) {
            s1.insert(nums1[i]);
        }
        for (size_t i = 0; i < nums2.size(); i++) {
            s2.insert(nums2[i]);
        }

        // Result container with two lists
        vector< vector<int> > ans(2);

        // Find elements in s1 but not in s2
        for (set<int>::iterator it = s1.begin(); it != s1.end(); ++it) {
            if (s2.find(*it) == s2.end()) {
                ans[0].push_back(*it);
            }
        }

        // Find elements in s2 but not in s1
        for (set<int>::iterator it = s2.begin(); it != s2.end(); ++it) {
            if (s1.find(*it) == s1.end()) {
                ans[1].push_back(*it);
            }
        }

        // Return the final answer
        return ans;
    }
};
