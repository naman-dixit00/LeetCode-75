#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <utility>
#include <map>
#include <set>
using namespace std;

class Solution {
public:
    bool dfs(string cur, string target, double &ans, double temp,
             unordered_map<string, vector<pair<string, double>>> &graph,
             set<string> &visited) {
        if (cur == target) {
            ans = temp;
            return true;
        }
        visited.insert(cur);
        for (int i = 0; i < graph[cur].size(); i++) {
            string next = graph[cur][i].first;
            double val = graph[cur][i].second;
            if (visited.find(next) == visited.end()) {
                if (dfs(next, target, ans, temp * val, graph, visited)) {
                    return true;
                }
            }
        }
        return false;
    }

    vector<double> calcEquation(vector<vector<string>> &equations,
                                vector<double> &values,
                                vector<vector<string>> &queries) {
        unordered_map<string, vector<pair<string, double>>> graph;
        for (int i = 0; i < equations.size(); i++) {
            string a = equations[i][0], b = equations[i][1];
            double val = values[i];
            graph[a].push_back(make_pair(b, val));
            graph[b].push_back(make_pair(a, 1.0 / val));
        }

        vector<double> result;
        for (int i = 0; i < queries.size(); i++) {
            string src = queries[i][0], dest = queries[i][1];
            if (graph.find(src) == graph.end() || graph.find(dest) == graph.end()) {
                result.push_back(-1.0);
                continue;
            }
            set<string> visited;
            double ans = -1.0;
            dfs(src, dest, ans, 1.0, graph, visited);
            result.push_back(ans);
        }
        return result;
    }
};
