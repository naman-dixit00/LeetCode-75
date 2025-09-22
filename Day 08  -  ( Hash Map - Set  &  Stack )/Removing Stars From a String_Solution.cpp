#include <string>
using namespace std;

// LeetCode 2390 - Removing Stars From a String
// Time: O(n), Space: O(n)
// Note: Uses C++98-compatible APIs (no pop_back, no range-for).

class Solution {
public:
    string removeStars(string s) {
        string result;
        result.reserve(s.size()); // optional: avoid repeated allocations

        // Process characters sequentially
        for (size_t i = 0; i < s.size(); ++i) {
            char c = s[i];
            if (c == '*') {
                // Remove last valid character if exists (C++98-safe)
                if (!result.empty()) {
                    result.resize(result.size() - 1);
                }
            } else {
                // Append normal character
                result.push_back(c);
            }
        }

        return result;
    }
};
