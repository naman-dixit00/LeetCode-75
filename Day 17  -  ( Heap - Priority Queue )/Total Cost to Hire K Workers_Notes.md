Total Cost to Hire K Workers

🔗 Problem Link : LeetCode 2462 – Total Cost to Hire K Workers

• Problem Classification :
Category → Greedy + Heap
Pattern → Two-Pointer + Priority Queue

1. Problem Statement -

We are given costs[] where costs[i] = hiring cost of worker i.
We must hire exactly k workers with the rule:

Each round, choose cheapest among first candidates or last candidates.

Break ties by smaller index.

Return total hiring cost.

2. Constraints & Edge Cases -

1 <= costs.length <= 100000

1 <= costs[i] <= 100000

Must run in O(n log n).

Edge cases:

If candidates >= n, all workers are eligible.

Repeated costs → smallest index matters.

3. Intuition & Thought Process -

Naive idea: Each round scan the array. Too slow.

Optimized idea: Maintain two heaps → one for left side, one for right side.

Always pick smaller top.

Move inward as workers are hired.

This ensures correct order + efficiency.

4. Approaches & Complexity Analysis -
Brute Force:

Re-scan entire list each hiring round.

O(k·n). Too large.

Optimized (Two Heaps):

Initialize left heap with first candidates workers, right heap with last candidates.

Each round pick smaller top.

After hiring, push next worker from that side.

Time Complexity: O(k log n)
Space Complexity: O(n)

5. Example Walkthrough -

Example 1:
costs = [17,12,10,2,7,2,11,20,8], k=3, candidates=4

Left heap = [17,12,10,2], Right heap = [7,2,11,20,8]

Round 1 → pick 2 (index 3) → cost=2

Round 2 → pick 2 (index 5) → cost=4

Round 3 → pick 7 (index 4) → cost=11
Answer = 11.

Example 2:
costs = [1,2,4,1], k=3, candidates=3

Round 1 → pick 1 (index 0)

Round 2 → pick 1 (index 3)

Round 3 → pick 2 (index 1)
Answer = 4.

6. Patterns / Algorithms -

Two pointer strategy

Double priority queues

7. Related Problems -

Meeting Rooms II (heap scheduling)

Kth smallest in sorted matrix

8. Key Insights & Interview Considerations -

Using two heaps avoids scanning array repeatedly.

Tie-breaking with index must be handled implicitly by insertion order.

9. Interview follow-up -

Could we extend this to hiring based on multiple criteria (cost + skill)?

What if we need top-k globally but under window constraints?

10. References -

LeetCode 2462

MIT 6.006 – Heaps Applications

CLRS – Priority Queue