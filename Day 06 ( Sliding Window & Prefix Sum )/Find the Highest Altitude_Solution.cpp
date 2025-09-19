#include <vector>
#include <algorithm>
using namespace std;

// LeetCode 1732 - Find the Highest Altitude
// Time: O(n), Space: O(1)

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAltitude = 0;        // Track maximum altitude
        int currentAltitude = 0;    // Current altitude during traversal
        
        // Compute prefix sum of gains and track maximum
        for (int i = 0; i < gain.size(); i++) {
            currentAltitude += gain[i];
            maxAltitude = max(maxAltitude, currentAltitude);
        }
        
        return maxAltitude;
    }
};
