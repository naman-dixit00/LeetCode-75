#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> result;
        sort(potions.begin(), potions.end());
        int m = potions.size();

        for (int i = 0; i < (int)spells.size(); i++) {
            long long spell = spells[i];
            long long threshold = (success + spell - 1) / spell; // ceil division

            // Binary search for first potion >= threshold
            int low = 0, high = m - 1, idx = m;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if ((long long)potions[mid] >= threshold) {
                    idx = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            result.push_back(m - idx);
        }
        return result;
    }
};
