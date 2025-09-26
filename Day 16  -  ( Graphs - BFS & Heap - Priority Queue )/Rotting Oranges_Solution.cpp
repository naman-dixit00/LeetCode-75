#include <vector>
#include <queue>
#include <utility> // for std::pair and std::make_pair
#include <iostream> // Not strictly needed for the class, but good practice if testing main()
// Note: <bits/stdc++.h> is replaced with specific includes for broader compatibility.

using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int> >& grid) { // Added space for compatibility, though not needed here
        int m = grid.size(), n = grid[0].size();
        
        // **Old C++ Compatibility Fix:** Added space between adjacent '>' 
        // to prevent interpretation as the right shift operator (>>).
        queue<pair<int, int> > q; 
        
        int fresh = 0, minutes = 0;

        // Step 1: Add all rotten oranges to queue
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    q.push(make_pair(i, j));
                }
                if (grid[i][j] == 1) fresh++;
            }
        }

        // If no fresh oranges → 0 minutes
        if (fresh == 0) return 0;

        // Directions → up, down, left, right
        int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

        // BFS Process
        while (!q.empty()) {
            int size = q.size();
            bool changed = false;

            for (int k = 0; k < size; k++) {
                pair<int,int> p = q.front(); q.pop();
                int x = p.first, y = p.second;

                for (int d = 0; d < 4; d++) {
                    int nx = x + dirs[d][0];
                    int ny = y + dirs[d][1];

                    // Check bounds and if the orange is fresh
                    if (nx>=0 && ny>=0 && nx<m && ny<n && grid[nx][ny]==1) {
                        grid[nx][ny] = 2; // Rot it
                        fresh--;         // Decrement fresh count
                        q.push(make_pair(nx, ny)); // Add to queue for next minute
                        changed = true;
                    }
                }
            }

            // If any orange rotted this minute, increment the minute count
            if (changed) minutes++;
        }

        // If fresh is 0, return minutes, otherwise, return -1
        return (fresh == 0) ? minutes : -1;
    }
};