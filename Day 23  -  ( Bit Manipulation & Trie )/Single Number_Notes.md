Single Number

🔗 Problem Link : LeetCode 136 – Single Number

• Problem Classification : Category → Bit Manipulation / Array
• Pattern → XOR Trick

1. Problem Statement

We are given a non-empty integer array nums in which every element appears exactly twice, except for one element that appears only once.

The task is to identify that single element.

Constraints:

Must solve using linear runtime

Must use constant extra space

2. Constraints & Edge Cases

Input Size: 1 <= nums.length <= 3 * 10^4

Element Range: -3 * 10^4 <= nums[i] <= 3 * 10^4

Edge Cases:

Array with a single element → output = that element

All positive or all negative numbers → XOR still works

Large arrays → must avoid extra memory

3. Intuition & Thought Process

Observation: XOR has two important properties:

x ^ x = 0 (a number XOR itself = 0)

x ^ 0 = x (a number XOR 0 = itself)

By XORing all numbers in the array, pairs cancel each other → leaving only the unique element.

4. Approaches & Complexity Analysis

Brute Force:

Use hash map to count frequency → O(n) time, O(n) space → violates constant space constraint

Optimized Approach (XOR Trick):

Initialize result = 0
For each number num in nums:
    result = result XOR num
Return result


Time Complexity: O(n)

Space Complexity: O(1)

5. Example Walkthrough

Example 1: nums = [2,2,1]
XOR steps: 0 ^ 2 = 2, 2 ^ 2 = 0, 0 ^ 1 = 1
→ Output: 1

Example 2: nums = [4,1,2,1,2]
XOR steps: 0 ^ 4 = 4, 4 ^ 1 = 5, 5 ^ 2 = 7, 7 ^ 1 = 6, 6 ^ 2 = 4
→ Output: 4

6. Patterns / Algorithms

Primary Pattern: Bit Manipulation → XOR cancellation

General Category: Array + Bit Tricks

7. Related Problems

Single Number II / III

Missing Number

Find the Duplicate Number

8. Key Insights & Interview Considerations

XOR is very efficient → single pass, constant memory

Understanding bitwise operations is crucial

Avoid unnecessary extra data structures

9. Interview Follow-up

Handle cases where numbers appear three times → requires bitwise counters

Streaming input → maintain a running XOR

10. References

LeetCode 136 – Single Number

Bit Manipulation Techniques – MIT 6.042J / Competitive Programming