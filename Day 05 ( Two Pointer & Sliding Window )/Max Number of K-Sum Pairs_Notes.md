Max Number of K-Sum Pairs

🔗 Problem Link : LeetCode 1679 – Max Number of K-Sum Pairs

• Problem Classification :

Category → Array / Hashing / Two Pointers

Pattern → Pair Counting with Target Sum

• Problem Statement -
We are given an array nums and an integer k.

In one operation, we can pick two numbers whose sum equals k and remove them.

We need to find the maximum number of operations possible.

• Constraints & Edge Cases -

Input size: 1 <= nums.length <= 10^5

Values: 1 <= nums[i] <= 10^9

Sum target: 1 <= k <= 10^9

Edge Cases:

No valid pairs → return 0.

All numbers same and equal to k/2.

Large values but no matching pairs.

Array size = 1 → always return 0.

• Intuition & Thought Process -

First thought : Check all pairs → O(n²) (too slow).

Better : Use HashMap to track counts of numbers.

Key observation : Each number x pairs with k-x.

Handle special case: when x == k/2, pairs = count(x)/2.

• Approaches & Complexity -

Brute Force :

Check every pair.

Time: O(n²), Space: O(1).

Optimized HashMap :

Count frequencies of all numbers.

For each number x, take min(count[x], count[k-x]).

Add to result, adjust counts.

Time: O(n).

Space: O(n).

Two Pointer (after sorting):

Sort nums.

Use left/right pointers to find pairs = k.

Time: O(n log n).

Space: O(1).

• Example Walkthrough -
Input: nums = [1,2,3,4], k = 5

(1,4), (2,3) → 2 operations.

Input: nums = [3,1,3,4,3], k = 6

(3,3) → 1 operation.

• Patterns / Algorithms -

HashMap Counting

Two Pointers

• Related Problems -

Two Sum (LeetCode 1)

Count Pairs with Sum (LeetCode 2006)

3Sum (LeetCode 15)

• Key Insights -

Always handle x == k/2 carefully.

Sorting + two pointers is simpler but slower than hashmap.