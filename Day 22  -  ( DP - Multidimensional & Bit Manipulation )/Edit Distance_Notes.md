Edit Distance

🔗 Problem Link : LeetCode 72 – Edit Distance

• Problem Classification : Category → Dynamic Programming / String Manipulation
• Pattern → 2D DP Table + Minimum Operations

1. Problem Statement

Given two strings word1 and word2, determine the minimum number of operations to convert word1 into word2.

Operations allowed:

Insert a character

Delete a character

Replace a character

Return the minimum number of operations needed.

2. Constraints & Edge Cases

Input Size: 0 <= word1.length, word2.length <= 500

Strings contain only lowercase English letters

Edge Cases:

One string is empty → operations = length of the other string

Both strings are identical → operations = 0

Large strings → DP table up to 500x500

3. Intuition & Thought Process

Classic dynamic programming on strings

Define dp[i][j] = min operations to convert first i chars of word1 to first j chars of word2

Transitions:

If characters match → dp[i][j] = dp[i-1][j-1]

Else → dp[i][j] = 1 + min(insert, delete, replace)

4. Approaches & Complexity Analysis

Brute Force: recursive → O(3^(m+n)) → too slow

Optimized DP:

Fill a 2D table iteratively

Time Complexity: O(m*n)

Space Complexity: O(m*n)

5. Example Walkthrough

Example 1:
word1 = "horse", word2 = "ros"
Steps:

Replace 'h' → rorse

Delete 'r' → rose

Delete 'e' → ros

Output: 3

6. Patterns / Algorithms

Primary Pattern: DP on String

General Category: Minimum Edit / Transformation

7. Related Problems

Longest Common Subsequence

Palindrome Transformations

String Conversion / Alignment

8. Key Insights & Interview Considerations

Edge initialization of DP table is critical

Can be optimized to O(min(m,n)) space using two arrays

Correctly handling matching vs non-matching characters

9. Interview Follow-up

Optimize space

Weighted operations

Multiple strings (multi-dimensional DP)

10. References

LeetCode 72 – Edit Distance

Dynamic Programming Patterns – MIT 6.042J