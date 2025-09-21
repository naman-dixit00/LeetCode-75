#include <bits/stdc++.h>
using namespace std;

// LeetCode 1657 - Determine if Two Strings Are Close
// Time: O(n + 26 log 26), Space: O(1)

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        // Step 1: Frequency arrays for both words
        array<int, 26> charCount1 = {}; 
        array<int, 26> charCount2 = {}; 

        // Count characters in word1
        for (char c : word1) {
            ++charCount1[c - 'a'];
        }

        // Count characters in word2
        for (char c : word2) {
            ++charCount2[c - 'a'];
        }

        // Step 2: Check if both words use the exact same set of characters
        for (int i = 0; i < 26; ++i) {
            bool charPresentWord1 = charCount1[i] > 0;
            bool charPresentWord2 = charCount2[i] > 0;

            // If a character exists in one string but not the other → Not close
            if ((charPresentWord1 && !charPresentWord2) || 
                (!charPresentWord1 && charPresentWord2)) {
                return false;
            }
        }

        // Step 3: Sort frequency arrays (order doesn’t matter, only counts matter)
        sort(charCount1.begin(), charCount1.end());
        sort(charCount2.begin(), charCount2.end());

        // Step 4: Compare sorted frequencies
        for (int i = 0; i < 26; ++i) {
            if (charCount1[i] != charCount2[i]) {
                return false;
            }
        }

        // If both character sets and frequency distributions match → Strings are close
        return true;
    }
};
