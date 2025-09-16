Maximum Average Subarray I

🔗 Problem Link : LeetCode 643 – Maximum Average Subarray I

• Problem Classification :

Category → Array

Pattern → Sliding Window

• Problem Statement -
We are given an array nums and integer k.
We must find the contiguous subarray of length k with the maximum average and return the value.

• Constraints & Edge Cases -

Input size: 1 <= k <= n <= 10^5

Values: -10^4 <= nums[i] <= 10^4

Answer accepted within 10^-5.

Edge Cases:

n = k → whole array average.

All negative numbers.

All positive numbers.

Single element array.

• Intuition & Thought Process -

First thought : Check every subarray → O(n*k).

Better idea : Use sliding window.

Key observation : Consecutive windows differ only by one element.

• Approaches & Complexity -

Brute Force :

Compute average for each subarray of length k.

Time: O(n*k), Space: O(1).

Optimized Sliding Window :

Compute sum of first k elements.

Slide window by 1 step at a time → update sum in O(1).

Track maximum sum.

Return max_sum / k.

Time: O(n).

Space: O(1).

• Example Walkthrough -
Input: nums = [1,12,-5,-6,50,3], k = 4

Initial sum = 1+12-5-6 = 2

Next = 12-5-6+50 = 51 → max

Next = -5-6+50+3 = 42

Max sum = 51 → avg = 51/4 = 12.75

• Patterns / Algorithms -

Sliding Window

• Related Problems -

Maximum Sum Subarray of Size K

Minimum Size Subarray Sum (LeetCode 209)

• Key Insights -

Sliding window converts O(n*k) → O(n).

Beware of floating point precision.