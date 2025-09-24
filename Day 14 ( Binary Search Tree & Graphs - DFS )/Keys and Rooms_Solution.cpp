#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> visited(n, 0);
        stack<int> st;
        st.push(0);
        visited[0] = 1;

        while (!st.empty()) {
            int room = st.top();
            st.pop();
            for (int i = 0; i < (int)rooms[room].size(); i++) {
                int key = rooms[room][i];
                if (!visited[key]) {
                    visited[key] = 1;
                    st.push(key);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (!visited[i]) return false;
        }
        return true;
    }
};
