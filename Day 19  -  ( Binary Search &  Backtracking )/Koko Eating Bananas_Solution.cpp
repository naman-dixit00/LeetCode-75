#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canEatAll(vector<int>& piles, int h, long long speed) {
        long long hours = 0;
        for (int i = 0; i < (int)piles.size(); i++) {
            hours += (piles[i] + speed - 1) / speed; // ceil division
            if (hours > h) return false;
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canEatAll(piles, h, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
