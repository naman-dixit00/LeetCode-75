Kth Largest Element in an Array

🔗 Problem Link : LeetCode 215 – Kth Largest Element in an Array

• Problem Classification :
Category → Heap / Sorting / Quickselect
Pattern → Top-K selection

1. Problem Statement -

We are given an integer array nums and an integer k. We must return the k-th largest element in sorted order (not necessarily distinct).

2. Constraints & Edge Cases -

Input size: 1 ≤ k ≤ nums.length ≤ 10^5

Values: -10^4 ≤ nums[i] ≤ 10^4

Edge Cases:

Array size = 1 → always return that element.

All elements same → result = repeated value.

Very large array → efficiency is critical.

3. Intuition & Thought Process -

Naive thought: Sort the array, pick the k-th element.

But: Sorting is O(n log n), slower for big input.

Key idea: We don’t need the full sort, only top-k elements.

Options:

Use a min-heap of size k.

Or use Quickselect (Hoare’s algorithm).

4. Approaches & Complexity Analysis -
• Sorting Approach

Sort descending, return nums[k-1].

Time: O(n log n)

Space: O(1)

• Heap Approach

Use a min-heap of size k.

Keep pushing numbers, pop smallest when size > k.

Answer = top of heap.

Time: O(n log k)

Space: O(k)

• Quickselect Approach

Partition array (like QuickSort) until pivot is at kth position.

Avg Time: O(n)

Worst Time: O(n^2)

Space: O(1)

5. Example Walkthrough -

Example 1:

nums = [3,2,1,5,6,4], k = 2
Sorted = [6,5,4,3,2,1]
Answer = 5


Example 2:

nums = [3,2,3,1,2,4,5,5,6], k = 4
Sorted = [6,5,5,4,3,3,2,2,1]
Answer = 4

6. Patterns / Algorithms -

Heap-based Top-K selection

Quickselect partition logic

7. Related Problems -

Top K Frequent Elements (LeetCode 347)

K Closest Points to Origin (LeetCode 973)

Find Median from Data Stream (LeetCode 295)

8. Key Insights & Interview Considerations -

Heap approach is safe and reliable.

Quickselect is faster on average but risky.

Sorting is simplest but less optimal.

9. Interview Follow-up -

Extend to find K-th smallest.

Extend to stream processing.

Discuss stability in Quickselect.

10. References -

LeetCode 215 – Kth Largest Element in an Array

Hoare’s Quickselect Algorithm

MIT 6.006 – Intro to Algorithms (Heap and Quickselect)