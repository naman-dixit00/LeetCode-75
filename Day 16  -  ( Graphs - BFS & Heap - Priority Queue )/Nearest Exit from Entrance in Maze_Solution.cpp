#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int nearestExit(vector<vector<char> >& maze, vector<int>& entrance) {
        int m = maze.size(), n = maze[0].size();
        queue<pair<int, int> > q;
        q.push(make_pair(entrance[0], entrance[1]));
        maze[entrance[0]][entrance[1]] = '+'; // mark visited

        int steps = 0;
        int dirs[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};

        while (!q.empty()) {
            int sz = q.size();
            steps++;
            while (sz--) {
                pair<int,int> cell = q.front(); q.pop();
                int r = cell.first, c = cell.second;

                for (int i = 0; i < 4; i++) {
                    int nr = r + dirs[i][0], nc = c + dirs[i][1];

                    if (nr >= 0 && nr < m && nc >= 0 && nc < n && maze[nr][nc] == '.') {
                        if (nr == 0 || nr == m-1 || nc == 0 || nc == n-1) {
                            return steps; // found exit
                        }
                        maze[nr][nc] = '+';
                        q.push(make_pair(nr, nc));
                    }
                }
            }
        }
        return -1;
    }
};
