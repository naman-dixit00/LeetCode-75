#include <bits/stdc++.h>
using namespace std;

// LeetCode 649 - Dota2 Senate
// Time: O(n), Space: O(n)

class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> r, d;
        int n = senate.size();

        for (int i = 0; i < n; ++i) {
            if (senate[i] == 'R') r.push(i);
            else d.push(i);
        }

        while (!r.empty() && !d.empty()) {
            int ri = r.front(); r.pop();
            int di = d.front(); d.pop();
            if (ri < di) {
                r.push(ri + n); // Radiant bans Dire
            } else {
                d.push(di + n); // Dire bans Radiant
            }
        }

        return r.empty() ? "Dire" : "Radiant";
    }
};
