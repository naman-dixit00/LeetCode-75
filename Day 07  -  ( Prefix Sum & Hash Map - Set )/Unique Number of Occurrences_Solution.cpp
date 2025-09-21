#include <vector>
#include <algorithm>
using namespace std;

// LeetCode 1207 - Unique Number of Occurrences
// Time: O(n log n), Space: O(n)

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // Step 1: Sort the array to group equal elements together
        sort(arr.begin(), arr.end());

        // Step 2: Store frequencies of elements
        vector<int> v;

        for (int i = 0; i < arr.size(); i++) {
            int cnt = 1;

            // Count how many times arr[i] repeats consecutively
            while (i + 1 < arr.size() && arr[i] == arr[i + 1]) {
                cnt++;
                i++;
            }

            // Store frequency of current element
            v.push_back(cnt);
        }

        // Step 3: Sort the frequency list
        sort(v.begin(), v.end());

        // Step 4: Check for duplicates in frequency list
        for (int i = 1; i < v.size(); i++) {
            if (v[i] == v[i - 1]) {
                // Duplicate frequency found → not unique
                return false;
            }
        }

        // If all frequencies are unique → return true
        return true;
    }
};
