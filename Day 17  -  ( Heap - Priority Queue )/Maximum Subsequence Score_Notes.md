Maximum Subsequence Score

🔗 Problem Link : LeetCode 2542 – Maximum Subsequence Score

• Problem Classification :
Category → Greedy + Heap
Pattern → Pair Sorting + Priority Queue

1. Problem Statement -

We are given two arrays nums1 and nums2 of equal length n, and an integer k.
We must select a subsequence of k indices such that the score = (sum of nums1 at those indices) × (minimum of nums2 at those indices) is maximized.

2. Constraints & Edge Cases -

1 <= n <= 100000

0 <= nums1[i], nums2[i] <= 100000

Edge Cases:

If k=1, score is just max(nums1[i] * nums2[i]).

If all nums2 are equal → maximize sum of largest k in nums1.

Very large n requires O(n log n) approach.

3. Intuition & Thought Process -

First thought: Brute force all subsequences → exponential. Impossible.

Observation: Score depends on minimum of nums2 in chosen subsequence.

Key idea: Sort pairs (nums2[i], nums1[i]) by nums2 descending.

As we iterate, maintain top k sums of nums1 with a heap.

Each step, possible score = (sum of top k nums1 so far) × current nums2.

4. Approaches & Complexity Analysis -
Brute Force:

Try all combinations of size k.

Time Complexity: O(C(n,k)) → exponential.

Impossible for n up to 1e5.

Optimized:

Sort by nums2 descending.

Use a min-heap to track largest k nums1.

Maintain running sum of nums1.

Compute score at each step.

Time Complexity: O(n log n)
Space Complexity: O(k)

5. Example Walkthrough -

Example 1:
nums1 = [1,3,3,2], nums2 = [2,1,3,4], k=3

Sorted pairs by nums2:
(4,2), (3,3), (2,1), (1,3)

Steps:

Take first three nums1 = [2,3,1], sum=6, min nums2=2 → score=12

Other combos give less.
Answer = 12.

Example 2:
nums1 = [4,2,3,1,1], nums2 = [7,5,10,9,6], k=1

Check directly: max(nums1[i]*nums2[i]) = 30.

6. Patterns / Algorithms -

Greedy selection

Heap maintenance

Sorting with pairs

7. Related Problems -

LeetCode 1383 (Maximum Performance of a Team)

Scheduling problems with weights

8. Key Insights & Interview Considerations -

Sorting by one array and using heap for the other is a standard greedy trick.

Useful pattern for team selection problems.

Must carefully handle integer overflow (use long long).

9. Interview follow-up -

What if we must pick exactly k contiguous elements?

Extend to 3 arrays instead of 2.

10. References -

LeetCode 2542

MIT 6.046 – Greedy Algorithms

CLRS – Greedy Techniques