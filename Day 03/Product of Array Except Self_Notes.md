# Product of Array Except Self

🔗 Problem Link : LeetCode 238 – Product of Array Except Self
( https://leetcode.com/problems/product-of-array-except-self/ )

• Problem Classification :

Category → Array / Prefix-Suffix Product

Pattern → Prefix Multiplication + Suffix Multiplication

• Problem Statement -

We are given an integer array nums.

We must return an array answer where answer[i] is the product of all elements of nums except nums[i].

Constraint: Must be solved in O(n) time and without using division.

• Constraints & Edge Cases -

Input size: 2 <= nums.length <= 10^5

Values: -30 <= nums[i] <= 30

Products always fit in a 32-bit integer.

• Edge Cases :

Array contains 0s → affects product since zero cancels multiplication.

Multiple zeros → all products = 0.

All positive numbers → normal case.

Negative numbers mix → must handle correctly.

Large array length (10^5).

• Intuition & Thought Process -

First thought : Multiply all elements and divide by nums[i].

But division is not allowed.

Better approach: Precompute prefix and suffix products.

• Key observations:

Product of all elements except i = product of prefix (before i) * suffix (after i).

We can compute prefix and suffix arrays in O(n).

Approaches & Complexity Analysis -

• Brute Force Approach :

For each index, compute product of all other elements.

Time: O(n^2) → too slow for n = 10^5.

Space: O(1).

• Optimized Approach (Prefix + Suffix Multiplication):
Step 1: Compute prefix products → prefix[i] = product of nums[0..i-1].
Step 2: Compute suffix products → suffix[i] = product of nums[i+1..end].
Step 3: answer[i] = prefix[i] * suffix[i].

Time: O(n).

Space: O(1) (reusing output array).

• Example Walkthrough -

Example 1:
Input: nums = [1,2,3,4]

Prefix: [1, 1, 2, 6]

Suffix: [24, 12, 4, 1]

Output = [24, 12, 8, 6]

Example 2:
Input: nums = [-1,1,0,-3,3]

Multiple zeros → result = [0,0,9,0,0]
Output: [0,0,9,0,0]

• Patterns / Algorithms -

Primary Pattern : Prefix-Suffix Product

General Category : Array Traversal

• Related Problems :

Trapping Rain Water (Prefix-Suffix max)

Maximum Product Subarray

Sum of Array Except Self

• Key Insights & Interview Considerations -

Division is a trap → must use prefix/suffix.

Optimize space by reusing answer array.

Handle zeros carefully.

• Follow-up discussion :

Can we solve with O(1) extra space? (Yes, by calculating prefix on the fly).

How would this change if numbers could overflow 32-bit?

• References -

LeetCode 238 – Product of Array Except Self

MIT 6.006 – Prefix-Suffix Arrays

Cracking the Coding Interview – Array Manipulation