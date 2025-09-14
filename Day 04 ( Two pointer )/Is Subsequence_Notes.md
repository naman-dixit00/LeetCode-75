# Is Subsequence

🔗 Problem Link : LeetCode 392 – Is Subsequence
(https://leetcode.com/problems/is-subsequence/
)

• Problem Classification :

Category → String Matching

Pattern → Two-Pointer Scan

• Problem Statement -

We are given two strings s and t.

Return true if s is a subsequence of t, else false.

A subsequence can be formed by deleting some (or none) characters from t without changing relative order.

• Constraints & Edge Cases -

0 <= s.length <= 100

0 <= t.length <= 10^4

Characters: lowercase English letters

• Edge Cases :

s empty → always true.

t empty and s non-empty → false.

Both empty → true.

s longer than t → false.

• Intuition & Thought Process -

First thought : Try deleting chars from t and compare → inefficient.

Key idea : Use two pointers – one for s, one for t.

Traverse t, whenever s[i] == t[j], move pointer i.

If we finish scanning s, it’s a subsequence.

Approaches & Complexity Analysis -

• Brute Force Approach :

Generate all subsequences of t and check.

Time: O(2^n) → infeasible.

• Optimized Two-Pointer Approach :
Step 1: Initialize i=0 for s, j=0 for t.
Step 2: While j < len(t):

If s[i] == t[j], increment i.

Always increment j.
Step 3: Return true if i == len(s).

Time: O(|t|)

Space: O(1)

• Example Walkthrough -

Input: s="abc", t="ahbgdc"

Matching process: a→yes, b→yes, c→yes → return true.

• Patterns / Algorithms -

Primary Pattern : Two-Pointer String Scan

General Category : Subsequence Checking

• Related Problems :

Longest Common Subsequence (LeetCode 1143)

Distinct Subsequences (LeetCode 115)

• Key Insights & Interview Considerations -

For multiple queries s1, s2...sk → preprocess t with indexing.

This allows binary search for each character.

• Follow-up Discussion :

How to optimize if k is very large (10^9 queries)?

Can we use DP for generalized subsequence checks?

• References -

LeetCode 392 – Is Subsequence

CLRS – String Algorithms