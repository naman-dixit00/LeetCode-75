# Day 2 – Greatest Common Divisor of Strings

🔗 **Problem Link :**  [ LeetCode 1071 – Greatest Common Divisor of Strings ](https://leetcode.com/problems/greatest-common-divisor-of-strings/)

•**Problem Classification :**
Category → String Manipulation / Math .
Pattern → GCD Logic + String Division Check

1.**Problem Statement -**
We are given two strings, str1 and str2.
A string t is said to divide a string s if and only if:
s = t + t + t + ... + t (one or more times).

We need to return the largest string x such that x divides both str1 and str2.
If no such string exists, return the empty string "".

2.**Constraints & Edge Cases -**
**Input size :** 1 <= str1.length, str2.length <= 1000
**Characters :** only uppercase English letters

•**Edge Cases :**
Strings have no common divisor (output = "")
One string is a multiple of the other
Both strings are exactly the same
Strings of prime length with no repetition
Very large input lengths (up to 1000)

3.**Intuition & Thought Process -**
* **First thought :** The problem is about finding a repeating base substring that can construct both strings.
* **Naive idea :**  Try all prefixes of str1 and check if they divide both strings.
* **Key observation :** If str1 + str2 != str2 + str1, then there is no common divisor (return "").
*  Otherwise, the answer must be the prefix of length gcd(len(str1), len(str2)).
*  The use of the greatest common divisor (GCD) of lengths comes from the fact that the common substring must repeat evenly to build both strings.

4.**Approaches & Complexity Analysis -**
• **Brute Force :**
*   Enumerate all possible prefixes of str1.
*   Check if each prefix divides both str1 and str2.
*   Track the longest valid divisor.
**Time Complexity :** O(n * (n+m)) (checking divisibility for each prefix)
**Space Complexity :**O(1) or O(n) depending on substring storage.

• **Optimized Approach :**
Step 1: Check if (str1 + str2) == (str2 + str1) → ensures they share a common divisor.
Step 2: Compute g = gcd(len(str1), len(str2)).
Step 3: The answer is str1[0:g].
**Time Complexity :** O(n + m)
**Space Complexity:** O(1)

5.**Example Walkthrough -**
*  **Example 1 :**
*  **Input :** str1 = "ABCABC", str2 = "ABC"
Step 1 → str1+str2 = "ABCABCABC", str2+str1 = "ABCABCABC" (valid)
Step 2 → gcd(6, 3) = 3
Step 3 → result = "ABC"
*  **Output :** "ABC"

*  **Example 2:**
*  **Input :**  str1 = "LEET", str2 = "CODE"
Step 1 → str1+str2 != str2+str1
→ No common divisor → result = ""
*  **Output :** ""

6. **Patterns / Algorithms -**
*  **Primary Pattern : String GCD Logic
*  **General Category : String Manipulation + Math

7. **Related Problems -**
* Merge Strings Alternately (LeetCode 1768)
* Repeated Substring Pattern (LeetCode 459)
* Greatest Common Divisor (Math problem adapted for strings)

8. **Key Insights & Interview Considerations -**
* Critical trick: (str1 + str2) == (str2 + str1) → ensures common divisor exists.
* Use of Euclidean algorithm for length GCD.
* Pitfall: Returning substring of wrong length instead of gcd(len1, len2).

9. **Interview follow-up -**
* Extend logic to more than 2 strings.
* Handle streaming input or huge inputs efficiently.
* Discuss why GCD of lengths ensures correct divisor.

10. **References -**
*  **LeetCode 1071 – Greatest Common Divisor of Strings
*  **Euclidean Algorithm (Number Theory, MIT 6.042J – Mathematics for Computer          Science)
*   **Cracking the Coding Interview – String Manipulation & Math Patterns
