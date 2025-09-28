#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Comparator function to sort intervals by end time
bool cmpInterval(const vector<int>& a, const vector<int>& b) {
    return a[1] < b[1];
}

int eraseOverlapIntervals(vector< vector<int> >& intervals) {
    if(intervals.empty()) return 0;

    // Sort intervals by end time
    sort(intervals.begin(), intervals.end(), cmpInterval);

    int end = intervals[0][1];
    int removal = 0;
    for(int i = 1; i < intervals.size(); i++) {
        if(intervals[i][0] < end) removal++;
        else end = intervals[i][1];
    }
    return removal;
}

// Sample main to test
int main() {
    vector< vector<int> > intervals;
    intervals.push_back(vector<int>{1,2});
    intervals.push_back(vector<int>{2,3});
    intervals.push_back(vector<int>{3,4});
    intervals.push_back(vector<int>{1,3});

    cout << "Intervals to remove: " << eraseOverlapIntervals(intervals) << endl; // Output: 1
    return 0;
}
