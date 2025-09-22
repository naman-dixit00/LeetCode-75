#include <bits/stdc++.h>
using namespace std;

// LeetCode 933 - Number of Recent Calls
// Time: O(1) amortized per call, Space: O(n)

class RecentCounter {
private:
    queue<int> q;

public:
    RecentCounter() {}

    int ping(int t) {
        q.push(t);
        while (!q.empty() && q.front() < t - 3000) {
            q.pop();
        }
        return q.size();
    }
};
