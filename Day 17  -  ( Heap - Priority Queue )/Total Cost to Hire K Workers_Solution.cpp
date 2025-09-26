#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int n = costs.size();
        int left = 0, right = n - 1;
        long long ans = 0;
        
        priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > leftHeap, rightHeap;
        
        // Fill initial heaps
        for (int i=0; i<candidates && left<=right; i++) {
            leftHeap.push(make_pair(costs[left], left));
            left++;
        }
        for (int i=0; i<candidates && left<=right; i++) {
            rightHeap.push(make_pair(costs[right], right));
            right--;
        }
        
        // Perform k hires
        for (int i=0; i<k; i++) {
            if (!leftHeap.empty() && !rightHeap.empty()) {
                if (leftHeap.top().first <= rightHeap.top().first) {
                    ans += leftHeap.top().first;
                    leftHeap.pop();
                    if (left <= right) {
                        leftHeap.push(make_pair(costs[left], left));
                        left++;
                    }
                } else {
                    ans += rightHeap.top().first;
                    rightHeap.pop();
                    if (left <= right) {
                        rightHeap.push(make_pair(costs[right], right));
                        right--;
                    }
                }
            }
            else if (!leftHeap.empty()) {
                ans += leftHeap.top().first;
                leftHeap.pop();
                if (left <= right) {
                    leftHeap.push(make_pair(costs[left], left));
                    left++;
                }
            }
            else {
                ans += rightHeap.top().first;
                rightHeap.pop();
                if (left <= right) {
                    rightHeap.push(make_pair(costs[right], right));
                    right--;
                }
            }
        }
        return ans;
    }
};
