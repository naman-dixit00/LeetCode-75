#include <bits/stdc++.h>
using namespace std;

// LeetCode 2352 - Equal Row and Column Pairs
// Time: O(n^2 log n), Space: O(n^2)
// Idea: Serialize rows and columns, then compare using hash map.

class Solution {
public:
    int equalPairs(vector<vector<int> >& grid) {
        int n = grid.size();

        // Step 1: Store frequency of each row pattern
        map<vector<int>, int> rowMap;
        for (int i = 0; i < n; i++) {
            rowMap[grid[i]]++;
        }

        // Step 2: For each column, serialize and check against rows
        int count = 0;
        for (int j = 0; j < n; j++) {
            vector<int> col;
            for (int i = 0; i < n; i++) {
                col.push_back(grid[i][j]);
            }
            if (rowMap.find(col) != rowMap.end()) {
                count += rowMap[col];
            }
        }

        return count;
    }
};
