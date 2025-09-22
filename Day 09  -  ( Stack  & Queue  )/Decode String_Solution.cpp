#include <bits/stdc++.h>
using namespace std;

// LeetCode 394 - Decode String
// Time: O(n), Space: O(n)

class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> resultStack;
        string current = "";
        int num = 0;

        for (size_t i = 0; i < s.size(); ++i) {
            char c = s[i];

            if (isdigit(c)) {
                num = num * 10 + (c - '0'); // handle multi-digit numbers
            }
            else if (c == '[') {
                counts.push(num);
                resultStack.push(current);
                num = 0;
                current = "";
            }
            else if (c == ']') {
                int repeatTimes = counts.top(); counts.pop();
                string decoded = resultStack.top(); resultStack.pop();
                for (int j = 0; j < repeatTimes; ++j) {
                    decoded += current;
                }
                current = decoded;
            }
            else {
                current += c; // normal letter
            }
        }
        return current;
    }
};
