# Determine if Two Strings Are Close

🔗 Problem Link : LeetCode 1657 – Determine if Two Strings Are Close

• Problem Classification :

Category → String / Frequency Analysis

Pattern → Compare Character Sets + Compare Frequency Multisets

• Problem Statement -

We are given two strings word1 and word2.
They are considered close if one can transform into the other by:

Swapping any two characters.

Transforming every occurrence of one character into another existing character (and vice versa).

Return true if the two strings are close, else return false.

• Constraints & Edge Cases -

1 <= word1.length, word2.length <= 10^5

Lowercase English letters only.

Critical Cases:

Strings with different unique character sets → always false.

Same set of characters but different frequency distribution → may or may not be close depending on counts.

Very large input sizes require O(n).

• Intuition & Thought Process -

First Thought:
Swaps mean order doesn’t matter.
Transformations mean we can rename characters but must keep frequency counts.

So conditions are:

Same unique character set.

Multisets of frequencies are equal.

Analogy:
Think of letters as colors of beads:

Condition 1: Both strings must have the same set of colors.

Condition 2: The multiset of bead counts must match.

• Approaches & Complexity -

Brute Force:
Try applying operations directly → infeasible.

Optimized:

Count frequencies of letters in both strings.

Compare unique character sets.

Sort frequencies and compare.

Time: O(n + 26 log 26).

Space: O(26).

• Example Walkthrough -

Example 1:
word1 = "abc", word2 = "bca"

Sets = {a,b,c}, {a,b,c} → match.

Frequencies = {1,1,1}, {1,1,1} → match.

Output = true.

Example 2:
word1 = "a", word2 = "aa"

Sets = {a}, {a}.

Frequencies = {1}, {2}.

Output = false.

Example 3:
word1 = "cabbba", word2 = "abbccc"

Sets = {a,b,c}, {a,b,c}.

Frequencies = {3,2,1}, {3,2,1}.

Output = true.

• Patterns / Algorithms -

Frequency arrays

Multiset comparison

Sorting fixed size arrays

• Related Problems -

LeetCode 242 – Valid Anagram

LeetCode 1347 – Minimum Steps to Make Anagram

LeetCode 1247 – Minimum Swaps to Make Strings Equal

• Key Insights & Interview Considerations -

Must check character set equality first.

Sorting frequency arrays is negligible since alphabet = 26.

Pitfall: Students often forget that different sets of characters can’t transform.

Elegant O(n) solution possible.