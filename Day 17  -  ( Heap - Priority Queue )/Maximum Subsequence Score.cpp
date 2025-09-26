#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        vector<pair<int,int> > arr;
        for (int i=0;i<n;i++) arr.push_back(make_pair(nums2[i], nums1[i]));
        
        sort(arr.rbegin(), arr.rend()); // sort by nums2 descending
        
        long long ans = 0, sum = 0;
        priority_queue<int, vector<int>, greater<int> > pq;
        
        for (int i=0;i<n;i++) {
            sum += arr[i].second;
            pq.push(arr[i].second);
            
            if (pq.size() > k) {
                sum -= pq.top();
                pq.pop();
            }
            
            if (pq.size() == k) {
                ans = max(ans, sum * (long long)arr[i].first);
            }
        }
        return ans;
    }
};
