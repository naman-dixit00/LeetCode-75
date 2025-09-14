#include <vector>
#include <string>
using namespace std;

// LeetCode 443 - String Compression
// Time: O(n), Space: O(1)

class Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0;

        // Iterate through characters
        for (int i = 0; i < chars.size();) {
            const char letter = chars[i];
            int count = 0; 

            // Count consecutive repeating characters
            while (i < chars.size() && chars[i] == letter) {
                ++count;
                ++i;
            }

            // Write the character
            chars[ans++] = letter;

            // If count > 1, write the count as separate digits
            if (count > 1) {
                for (const char c : to_string(count)) {
                    chars[ans++] = c;
                }
            }
        }

        // Return the new length of compressed array
        return ans;
    }
};
