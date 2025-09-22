#include <bits/stdc++.h>
using namespace std;

// LeetCode 735 - Asteroid Collision
// Time: O(n), Space: O(n)
// Idea: Use stack to simulate collisions with greedy elimination.

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        // Process each asteroid
        for (int i = 0; i < (int)asteroids.size(); i++) {
            int a = asteroids[i];
            bool destroyed = false;

            // Collision condition: current asteroid is moving left (a < 0),
            // while stack top asteroid is moving right (st.top() > 0).
            while (!st.empty() && a < 0 && st.top() > 0) {
                if (abs(st.top()) < abs(a)) {
                    // Stack top asteroid smaller → destroyed
                    st.pop();
                    continue;
                } else if (abs(st.top()) == abs(a)) {
                    // Both equal size → both destroyed
                    st.pop();
                }
                destroyed = true;
                break;
            }

            if (!destroyed) {
                st.push(a);
            }
        }

        // Convert stack back into vector (reverse order)
        vector<int> result(st.size());
        for (int i = (int)st.size() - 1; i >= 0; i--) {
            result[i] = st.top();
            st.pop();
        }

        return result;
    }
};
