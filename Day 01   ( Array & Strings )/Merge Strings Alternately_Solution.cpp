#include <string>
using namespace std;

// LeetCode 1768 - Merge Strings Alternately
// Time: O(n + m), Space: O(n + m)

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        result.reserve(word1.size() + word2.size()); // pre-allocate memory

        int i = 0, j = 0;
        int len1 = word1.size(), len2 = word2.size();

        // Merge characters alternately
        while (i < len1 && j < len2) {
            result.push_back(word1[i++]);  // take from word1
            result.push_back(word2[j++]);  // take from word2
        }

        // Append any remaining characters
        if (i < len1) result.append(word1.substr(i));
        if (j < len2) result.append(word2.substr(j));

        return result;
    }
};
