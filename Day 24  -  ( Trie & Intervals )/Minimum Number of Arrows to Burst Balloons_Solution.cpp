#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Comparator function for sorting intervals by end time
bool cmpEnd(const vector<int>& a, const vector<int>& b) {
    return a[1] < b[1];
}

int findMinArrowShots(vector< vector<int> >& points) {
    if(points.empty()) return 0;

    // Sort intervals by end
    sort(points.begin(), points.end(), cmpEnd);

    int arrows = 1;
    int end = points[0][1];
    for(int i = 1; i < points.size(); i++) {
        if(points[i][0] > end) {
            arrows++;
            end = points[i][1];
        }
    }
    return arrows;
}

// Sample main to test
int main() {
    vector< vector<int> > points;
    points.push_back(vector<int>{10,16});
    points.push_back(vector<int>{2,8});
    points.push_back(vector<int>{1,6});
    points.push_back(vector<int>{7,12});

    cout << "Minimum arrows: " << findMinArrowShots(points) << endl; // Output: 2
    return 0;
}
