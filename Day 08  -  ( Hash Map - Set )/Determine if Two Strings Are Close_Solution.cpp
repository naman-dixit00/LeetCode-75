#include <bits/stdc++.h>
using namespace std;

// LeetCode 1657 - Determine if Two Strings Are Close
// Time: O(n + 26 log 26), Space: O(1)

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        // If lengths differ, they can never be close
        if (word1.size() != word2.size()) return false;

        // Step 1: Frequency arrays for both words
        int charCount1[26] = {0};
        int charCount2[26] = {0};

        for (int i = 0; i < word1.size(); i++) {
            charCount1[word1[i] - 'a']++;
        }
        for (int i = 0; i < word2.size(); i++) {
            charCount2[word2[i] - 'a']++;
        }

        // Step 2: Both words must use exactly the same set of characters
        for (int i = 0; i < 26; i++) {
            if ((charCount1[i] == 0 && charCount2[i] > 0) ||
                (charCount1[i] > 0 && charCount2[i] == 0)) {
                return false;
            }
        }

        // Step 3: Sort the frequency arrays
        vector<int> v1(charCount1, charCount1 + 26);
        vector<int> v2(charCount2, charCount2 + 26);

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        // Step 4: Compare sorted frequencies
        return v1 == v2;
    }
};
