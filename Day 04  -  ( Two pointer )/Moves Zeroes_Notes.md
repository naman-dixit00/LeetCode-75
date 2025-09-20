# Move Zeroes

🔗 Problem Link : LeetCode 283 – Move Zeroes
(https://leetcode.com/problems/move-zeroes/
)

• Problem Classification :

Category → Array Manipulation

Pattern → Two-Pointer Technique

• Problem Statement -

We are given an integer array nums.

Task is to move all zeros to the end of the array while maintaining the relative order of non-zero elements.

Must be done in-place, without making a copy of the array.

• Constraints & Edge Cases -

Input size: 1 <= nums.length <= 10^4

Values: -2^31 <= nums[i] <= 2^31 - 1

Must minimize total operations.

• Edge Cases :

Array full of zeros → [0,0,0] → remains same.

No zeros → [1,2,3] → unchanged.

Single element → [0] → [0].

Mixed → [0,1,0,3,12] → [1,3,12,0,0].

• Intuition & Thought Process -

First thought : Iterate and shift every non-zero manually. Too many shifts → costly.

Key observation : Use two pointers (write index and scan index).

As we scan, put non-zero values in front, then fill remaining with zeros.

Approaches & Complexity Analysis -

• Brute Force Approach :

Remove all zeros, append at end.

Time: O(n^2) (if shifting repeatedly).

Space: O(1).

• Optimized Approach (Two-Pointer):
Step 1: Maintain index pos where next non-zero should be written.
Step 2: Iterate over nums, whenever nums[i] != 0, place at nums[pos++].
Step 3: After iteration, fill all remaining positions with zero.

Time: O(n)

Space: O(1)

• Example Walkthrough -

Input: [0,1,0,3,12]

Process:

Scan → place 1,3,12 at front → [1,3,12,3,12]

Fill rest with zeros → [1,3,12,0,0]

Output: [1,3,12,0,0]

• Patterns / Algorithms -

Primary Pattern : Two-Pointer Write

General Category : Array Reordering

• Related Problems :

Remove Element (LeetCode 27)

Remove Duplicates from Sorted Array (LeetCode 26)

• Key Insights & Interview Considerations -

Focus on in-place modifications.

Avoid unnecessary swaps when number is already in place.

Optimized solution guarantees minimal writes.

• Follow-up Discussion :

Can we reduce writes further by skipping trailing zeros?

What if we had to move all even numbers instead of zeros?

• References -

LeetCode 283 – Move Zeroes

Neetcode patterns – Two Pointer