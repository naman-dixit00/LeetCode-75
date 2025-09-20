Day 6 – Longest Subarray of 1's After Deleting One Element

🔗 Problem Link : LeetCode 1493 – Longest Subarray of 1's After Deleting One Element
(https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/
)

• Problem Classification :

Category → Array / Sliding Window

Pattern → Sliding Window + Deletion Handling

• Problem Statement -
We are given a binary array nums. We must delete one element from it.
Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.

• Constraints & Edge Cases -

Input size: 1 <= nums.length <= 10^5

Elements: nums[i] ∈ {0, 1}

• Edge Cases :

All elements are 1 → after deleting one, longest subarray = n-1

Only zeros → result = 0

Single element → after deleting it → 0

• Intuition & Thought Process -

First thought : Keep track of subarrays of 1’s while allowing one deletion.

Naive idea : Delete each element and calculate max consecutive 1’s → O(n^2).

Key observation : Sliding window can track at most one zero in the current window efficiently.

• Approaches & Complexity Analysis -

• Brute Force :

Delete one element at a time, then find longest consecutive 1’s

Time Complexity: O(n^2)

Space Complexity: O(1)

• Optimized Sliding Window Approach :

Initialize left pointer = 0, zeroCount = 0.

Traverse array with right pointer.

If nums[right] == 0 → decrease k/deletion quota

While quota exceeded → move left pointer until valid window

Return length of largest window

Time Complexity: O(n)

Space Complexity: O(1)

• Example Walkthrough -

Example 1:
Input: nums = [1,1,0,1]
Process: Delete nums[2] → [1,1,1]
Output: 3

Example 2:
Input: nums = [0,1,1,1,0,1,1,0,1]
Process: Delete nums[4] → longest subarray of 1’s = [1,1,1,1,1]
Output: 5

• Patterns / Algorithms -

Primary Pattern : Sliding Window with Deletion

General Category : Array Traversal

• Related Problems :

Max Consecutive Ones III (LeetCode 1004)

Longest Subarray with Ones after K flips

• Key Insights & Interview Considerations -

Sliding window can handle “delete one” efficiently by tracking zeros.

Pitfall: forgetting to reduce window size when quota exceeded.

• References -

LeetCode 1493 – Longest Subarray of 1's After Deleting One Element

Cracking the Coding Interview – Array / Sliding Window Patterns