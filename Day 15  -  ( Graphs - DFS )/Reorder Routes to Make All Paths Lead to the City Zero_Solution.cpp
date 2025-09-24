#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int,int>>> adj(n);

        // Build adjacency list with direction info
        for (int i = 0; i < connections.size(); i++) {
            int u = connections[i][0];
            int v = connections[i][1];
            adj[u].push_back(make_pair(v, 1)); // original direction u -> v
            adj[v].push_back(make_pair(u, 0)); // reverse edge v -> u (already valid)
        }

        vector<int> visited(n, 0);
        return dfs(0, adj, visited);
    }

    int dfs(int node, vector<vector<pair<int,int>>>& adj, vector<int>& visited) {
        visited[node] = 1;
        int changes = 0;

        for (int i = 0; i < adj[node].size(); i++) {
            int next = adj[node][i].first;
            int needsReverse = adj[node][i].second;

            if (!visited[next]) {
                changes += needsReverse;
                changes += dfs(next, adj, visited);
            }
        }
        return changes;
    }
};
