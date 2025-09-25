#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        queue<pair<int,int>> q;
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

                    if (nx>=0 && ny>=0 && nx<m && ny<n && grid[nx][ny]==1) {
                        grid[nx][ny] = 2;
                        fresh--;
                        q.push(make_pair(nx, ny));
                        changed = true;
                    }
                }
            }

            if (changed) minutes++;
        }

        return (fresh == 0) ? minutes : -1;
    }
};
