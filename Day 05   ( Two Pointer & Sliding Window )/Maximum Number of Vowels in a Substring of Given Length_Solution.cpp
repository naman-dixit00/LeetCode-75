#include <string>
#include <algorithm>
using namespace std;

// LeetCode 1456 - Maximum Number of Vowels in a Substring of Given Length
// Time: O(n), Space: O(1) (sliding window)

class Solution {
public:
    // Helper function to check if a character is a vowel
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {
        // maxVowel stores the maximum number of vowels found in any window
        int maxVowel = 0;

        // left pointer for the sliding window
        int left = 0;

        // vowel counts the number of vowels in the current window
        int vowel = 0;

        // Iterate with the right pointer to expand the window
        for (int right = 0; right < s.length(); right++) {
            // Include the right character if it's a vowel
            if (isVowel(s[right])) vowel++;

            // Check if the current window size equals k
            if ((right - left + 1) == k) {
                // Update maximum vowels if current window has more
                maxVowel = max(maxVowel, vowel);

                // Slide the window: remove the left character from count if it's a vowel
                if (isVowel(s[left])) vowel--;

                // Move left pointer forward
                left++;
            }
        }

        // Return the maximum number of vowels found in any substring of length k
        return maxVowel;
    }
};
