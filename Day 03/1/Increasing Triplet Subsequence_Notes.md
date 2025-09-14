# Increasing Triplet Subsequence

🔗 Problem Link : LeetCode 334 – Increasing Triplet Subsequence
(https://leetcode.com/problems/increasing-triplet-subsequence/)

• Problem Classification :

Category → Array / Subsequence

Pattern → Greedy + Tracking Minimums

• Problem Statement -

We are given an integer array nums.

Return true if there exists a triplet (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k].

Otherwise return false.

• Constraints & Edge Cases -

Input size: 1 <= nums.length <= 5 * 10^5

Values: -2^31 <= nums[i] <= 2^31 - 1

• Edge Cases :

Strictly decreasing array → no triplet.

Strictly increasing array → always true.

Mixed values but no valid subsequence.

Duplicate numbers in sequence.

Large input size (5 * 10^5).

• Intuition & Thought Process -

First thought : Use triple nested loops → O(n^3). Not feasible.

Better idea : Maintain smallest and second smallest values while scanning.

• Key observations:

If we find a number greater than both smallest and second smallest, we found a triplet.

Greedy works because we only care about existence, not actual indices.

Approaches & Complexity Analysis -

• Brute Force Approach :

Try all triplets (i, j, k).

Time: O(n^3), Space: O(1).

Too slow for n = 5*10^5.

• Optimized Approach (Greedy):
Step 1: Initialize two variables: first = ∞, second = ∞.
Step 2: Traverse array:

If num <= first → update first.

Else if num <= second → update second.

Else → found num > second → triplet exists → return true.
Step 3: If loop ends, return false.

Time: O(n).

Space: O(1).

• Example Walkthrough -

Example 1:
Input: nums = [1,2,3,4,5]

first=1, second=2, third=3 → triplet exists.
Output: true

Example 2:
Input: nums = [5,4,3,2,1]

Always decreasing → no triplet.
Output: false

Example 3:
Input: nums = [2,1,5,0,4,6]

Sequence → 0 < 4 < 6 → valid triplet.
Output: true

• Patterns / Algorithms -

Primary Pattern : Greedy Subsequence Tracking

General Category : Array / Increasing Subsequence

• Related Problems :

Longest Increasing Subsequence (LeetCode 300)

Wiggle Subsequence

132 Pattern

• Key Insights & Interview Considerations -

O(n) with O(1) space is optimal.

Pitfall: Handling duplicates properly.

Follow-up: Extend to k-length increasing subsequence.

• Follow-up discussion :

Can we generalize for increasing subsequence of length 4, 5, etc.?

Compare greedy vs DP LIS solution.

• References -

LeetCode 334 – Increasing Triplet Subsequence

MIT 6.046 – Greedy Algorithms

Cracking the Coding Interview – Subsequence Problems