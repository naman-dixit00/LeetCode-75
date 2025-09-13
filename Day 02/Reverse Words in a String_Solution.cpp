#include <string>
#include <algorithm>
using namespace std;

// LeetCode 151 - Reverse Words in a String
// Time: O(n), Space: O(1) (in-place manipulation)

class Solution { 
public:
    string reverseWords(string s) {
        // Step 1: Reverse the entire string to bring words in reverse order
        reverse(s.begin(), s.end());

        int n = s.size();
        int left = 0, right = 0, i = 0;

        // Step 2: Process each word and fix spaces
        while (i < n) {
            // Skip leading spaces
            while (i < n && s[i] == ' ')
                i++;

            // If reached end, break
            if (i == n)
                break;

            // Copy the word to the correct position
            while (i < n && s[i] != ' ') {
                s[right++] = s[i++];
            }

            // Reverse current word to restore original order
            reverse(s.begin() + left, s.begin() + right);

            // Add a single space after the word
            s[right++] = ' ';

            // Update left pointer for next word
            left = right;

            // Skip the space in the original reversed string
            i++;
        }

        // Step 3: Remove the trailing space
        s.resize(right - 1);

        return s;
    }
};
