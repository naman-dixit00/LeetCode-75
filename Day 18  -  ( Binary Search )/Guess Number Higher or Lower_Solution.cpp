#include <bits/stdc++.h>
using namespace std;

// Mock API (for testing only, LeetCode provides this)
int pick = 6;
int guess(int num) {
    if (num > pick) return -1;
    if (num < pick) return 1;
    return 0;
}

class Solution {
public:
    int guessNumber(int n) {
        long long low = 1, high = n;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            int res = guess((int)mid);
            if (res == 0) return (int)mid;
            else if (res < 0) high = mid - 1;
            else low = mid + 1;
        }
        return -1; // should not happen
    }
};
