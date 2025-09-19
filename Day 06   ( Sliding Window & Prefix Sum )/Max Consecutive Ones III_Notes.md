📘 Day X – Max Consecutive Ones III

🔗 Problem Link : LeetCode 1004 – Max Consecutive Ones III

• Problem Classification :

Category → Array / Sliding Window

Pattern → Variable-size Window + Zero Count Constraint

• Problem Statement -

We are given a binary array nums consisting only of 0s and 1s, and an integer k.
We can flip at most k zeros into ones.
We must return the maximum number of consecutive 1s we can obtain after performing at most k flips.

• Constraints & Edge Cases -

Input size: 1 <= nums.length <= 10^5

Array elements: nums[i] ∈ {0, 1}

0 <= k <= nums.length

Important Edge Cases:

All 1’s → Already optimal, answer is nums.length.

All 0’s → Answer is min(k, nums.length) (since we can flip at most k).

k = 0 → Reduces to the standard longest consecutive 1’s problem.

Large k (≥ number of zeros) → We can flip all zeros, answer is nums.length.

Alternating pattern (e.g., 101010...) → Window movement is critical.

• Intuition & Thought Process -

Naive thought: For each subarray, count zeros and check if flips ≤ k. → O(n²), not feasible for n = 10⁵.

Key insight: Instead of recomputing zero counts, we can maintain a sliding window where at most k zeros are allowed.

The window expands with right, and only shrinks when zeros exceed k.

This guarantees maximum valid subarray length at each step.

Analogy: Imagine a rubber band stretched from left to right. As long as the number of zeros inside ≤ k, stretch it more. If it breaks (too many zeros), slide left forward until it’s valid again.

• Approaches & Complexity -

1. Brute Force Approach:

For each starting index, expand to the right and count zeros.

If zeros ≤ k, update maximum length.

Time: O(n²)

Space: O(1)

Too slow for n = 10⁵.

2. Optimized Sliding Window Approach (Two Pointers):

Maintain a window [left, right] with at most k zeros.

Iterate right from 0 → n-1:

If nums[right] == 0, decrement k.

If k < 0, shrink window by moving left until it’s valid.

Maximum window size during this process is the answer.

Time Complexity: O(n) – each element visited at most twice (once by right, once by left).

Space Complexity: O(1).

• Example Walkthrough -

Example 1:
Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2

Steps:

Expand right pointer, first flip 0 at index 3.

Flip second 0 at index 4.

At index 5, third 0 → window invalid. Move left until flips ≤ 2.

Maximum valid window length observed = 6.

Output → 6

Example 2:
Input:
nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3

Steps:

Maintain sliding window.

Flips distributed optimally.

Largest valid subarray length = 10.

Output → 10

• Patterns / Algorithms -

Sliding Window (Variable size).

Two Pointers.

Greedy expansion with condition checks.

• Related Problems -

LeetCode 487 – Max Consecutive Ones II (only one flip allowed).

LeetCode 424 – Longest Repeating Character Replacement (similar sliding window with replacement).

LeetCode 643 – Maximum Average Subarray I (fixed window).

• Key Insights & Interview Considerations -

Always think: “What breaks the window validity?” Here → exceeding k zeros.

Shrinking from left ensures minimal removals, preserving max length.

Works in real-time streaming problems (process one element at a time).

Elegant O(n) solution compared to brute force O(n²).


Common Pitfalls:

Forgetting to move left when zero count exceeds k.

Confusing fixed vs variable window.

Handling k=0 incorrectly.