#include <string>
using namespace std;

// LeetCode 345 - Reverse Vowels of a String
// Time: O(n), Space: O(1)

class Solution {
public:
    string reverseVowels(string s) {
        string word = s;
        int start = 0;
        int end = s.length() - 1;
        string vowels = "aeiouAEIOU";

        // Use two pointers to swap vowels from both ends
        while (start < end) {
            // Move left pointer until a vowel is found
            while (start < end && vowels.find(word[start]) == string::npos) {
                start++;
            }

            // Move right pointer until a vowel is found
            while (start < end && vowels.find(word[end]) == string::npos) {
                end--;
            }

            // Swap the vowels
            swap(word[start], word[end]);
            start++;
            end--;
        }

        return word;
    }
};
