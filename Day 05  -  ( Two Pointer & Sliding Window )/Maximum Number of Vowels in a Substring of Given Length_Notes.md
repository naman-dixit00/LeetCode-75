Maximum Number of Vowels in a Substring of Given Length

🔗 Problem Link : LeetCode 1456 – Maximum Number of Vowels in a Substring of Given Length

• Problem Classification :

Category → String / Sliding Window

Pattern → Fixed-size Window + Vowel Counting

• Problem Statement -
We are given a string s and an integer k.
We must return the maximum number of vowels in any substring of length k.

• Constraints & Edge Cases -

Input size: 1 <= s.length <= 10^5

Characters: lowercase English letters only.

1 <= k <= s.length.

Edge Cases:

All characters are vowels.

No vowels at all.

Very large k close to s.length.

k = 1 (check single chars).

• Intuition & Thought Process -

First thought : For each substring count vowels → O(n*k).

Better : Sliding window with running vowel count.

Key observation : Only one character enters/leaves window per step.

• Approaches & Complexity -

Brute Force :

Count vowels in each substring separately.

Time: O(n*k), Space: O(1).

Optimized Sliding Window :

Initialize count of vowels in first window.

For each next window:

Subtract contribution of outgoing char.

Add contribution of incoming char.

Track max.

Time: O(n).

Space: O(1).

• Example Walkthrough -
Input: s = "abciiidef", k = 3

"abc" → 1 vowel

"bci" → 1

"cii" → 2

"iii" → 3 (max)

Output = 3

• Patterns / Algorithms -

Sliding Window

String Analysis

• Related Problems -

Maximum Average Subarray I (LeetCode 643)

Longest Substring with At Most K Distinct Characters

• Key Insights -

Vowel check can be done in O(1) using hashset.

Window approach guarantees O(n).