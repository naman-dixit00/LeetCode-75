#include <bits/stdc++.h>
using namespace std;

class SmallestInfiniteSet {
    int nextNum; // tracks next available smallest integer
    priority_queue<int, vector<int>, greater<int> > minHeap; 
    set<int> present; // avoid duplicates in heap

public:
    SmallestInfiniteSet() {
        nextNum = 1;
    }

    int popSmallest() {
        if (!minHeap.empty()) {
            int val = minHeap.top();
            minHeap.pop();
            present.erase(val);
            return val;
        }
        return nextNum++;
    }

    void addBack(int num) {
        if (num < nextNum && present.find(num) == present.end()) {
            minHeap.push(num);
            present.insert(num);
        }
    }
};
