#include <string>
using namespace std;

// LeetCode 1071 - Greatest Common Divisor of Strings
// Time: O(n + m), Space: O(1)

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // If concatenations are not equal, no common divisor exists
        if (str1 + str2 != str2 + str1) return "";

        // Find gcd of lengths to determine the largest possible divisor substring
        int gcd_len = gcd(str1.size(), str2.size());

        // Return the prefix of length gcd_len as the answer
        return str1.substr(0, gcd_len);
    }

private:
    // Euclidean Algorithm for GCD of two integers
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
};