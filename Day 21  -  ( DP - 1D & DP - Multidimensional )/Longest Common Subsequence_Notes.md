# Longest Common Subsequence

🔗 Problem Link : LeetCode 1143 – Longest Common Subsequence

• Problem Classification : Category → Dynamic Programming / String Matching
Pattern → 2D DP Table for Subsequence Matching

1. Problem Statement –

Given two strings text1 and text2, return the length of their longest common subsequence (LCS).

A subsequence is a new string formed by deleting zero or more characters from the original string without changing the order.

A common subsequence exists in both strings. If none exists, return 0.

2. Constraints & Edge Cases –

1 ≤ text1.length, text2.length ≤ 1000

Characters: only lowercase English letters

Edge Cases:

One string is empty → LCS length = 0

Both strings are identical → LCS length = string length

No common characters → LCS length = 0

3. Intuition & Thought Process –

Naive idea: Generate all subsequences → exponential, infeasible

Observation: Use 2D dynamic programming to build solution iteratively

Let dp[i][j] = length of LCS of text1[0..i-1] and text2[0..j-1]

Transition:

If text1[i-1] == text2[j-1] → dp[i][j] = dp[i-1][j-1] + 1

Else → dp[i][j] = max(dp[i-1][j], dp[i][j-1])

Base case: dp[0][*] = 0, dp[*][0] = 0

4. Approaches & Complexity Analysis –

Brute Force:

Generate all subsequences of both strings

Compare each pair → exponential time

Time Complexity: O(2^(m+n))

Space Complexity: O(m+n) recursion

Optimized – DP:

Build 2D table of size m×n

Time Complexity: O(m*n)

Space Complexity: O(m*n) (can optimize to O(min(m,n)) with rolling array)

5. Example Walkthrough –

Example 1: text1 = "abcde", text2 = "ace"

dp table builds incrementally

LCS = "ace" → length = 3

Example 2: text1 = "abc", text2 = "abc"

LCS = "abc" → length = 3

Example 3: text1 = "abc", text2 = "def"

No common subsequence → length = 0

6. Patterns / Algorithms –

Primary Pattern: 2D DP for subsequence matching

General Category: String DP + Matching

7. Related Problems –

Longest Common Substring (LeetCode 718 variant)

Edit Distance (LeetCode 72)

Minimum Delete Sum (LeetCode 712)

8. Key Insights & Interview Considerations –

Recognize overlapping subproblems

DP table stores subproblem solutions

Rolling array can optimize space

Corner cases: empty strings, fully matched strings

9. Interview Follow-up –

Reconstruct the LCS, not just length

Handle more than 2 strings → generalized LCS

Apply to real-time streaming input for text comparison

10. References –

LeetCode 1143 – Longest Common Subsequence

Dynamic Programming tutorials on string matching

Cracking the Coding Interview – DP for sequences