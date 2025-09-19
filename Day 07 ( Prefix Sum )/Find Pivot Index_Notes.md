Day 6 – Find Pivot Index

🔗 Problem Link : LeetCode 724 – Find Pivot Index
(https://leetcode.com/problems/find-pivot-index/
)

• Problem Classification :

Category → Array / Prefix Sum

Pattern → Prefix Sum Comparison

• Problem Statement -
Given an array nums, find pivot index such that the sum of all numbers to the left equals sum of numbers to the right.
Return leftmost pivot index, or -1 if none exists.

• Constraints & Edge Cases -

Input size: 1 <= nums.length <= 10^4

Values: -1000 <= nums[i] <= 1000

• Edge Cases :

Pivot at index 0 → left sum = 0

Pivot at last index → right sum = 0

No pivot exists → return -1

• Intuition & Thought Process -

First thought : Compare left sum and right sum at each index.

Key observation : Maintain total sum and left sum, then right sum = total - leftSum - nums[i]

• Approaches & Complexity Analysis -

• Brute Force :

For each index, calculate left and right sums

Time Complexity: O(n^2)

Space Complexity: O(1)

• Optimized Approach :

Compute totalSum = sum(nums)

Initialize leftSum = 0

Iterate i = 0 to n-1:

If leftSum == totalSum - leftSum - nums[i] → return i

Else update leftSum += nums[i]

Return -1 if no pivot found

Time Complexity: O(n)

Space Complexity: O(1)

• Example Walkthrough -

Example 1:
Input: nums = [1,7,3,6,5,6]
Left sum at index 3 = 11, Right sum = 11 → pivot = 3

Example 2:
Input: nums = [1,2,3]
No pivot → output = -1

Example 3:
Input: nums = [2,1,-1]
Pivot at index 0 → left sum = 0, right sum = 0 → output = 0

• Patterns / Algorithms -

Primary Pattern : Prefix Sum / Running Total

General Category : Array Traversal

• Related Problems :

Find the Highest Altitude (LeetCode 1732)

Running Sum of 1d Array (LeetCode 1480)

• Key Insights & Interview Considerations -

Use total sum minus left sum trick to avoid recomputation.

Edge pivots at array boundaries need careful handling.

• References -

LeetCode 724 – Find Pivot Index

Cracking the Coding Interview – Prefix Sum / Array Problems