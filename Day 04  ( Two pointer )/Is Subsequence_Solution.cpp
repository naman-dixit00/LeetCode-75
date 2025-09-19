#include <string>
using namespace std;

// LeetCode 392 - Is Subsequence
// Time: O(n), Space: O(1)

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        // Traverse both strings
        while (i < s.size() && j < t.size()) {
            // If characters match, move pointer in s
            if (s[i] == t[j]) {
                ++i;
            }
            // Always move pointer in t
            ++j;
        }

        // If we matched all characters of s, it's a subsequence
        return i == s.size();
    }
};
