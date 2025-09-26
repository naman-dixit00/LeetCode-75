Smallest Number in Infinite Set

🔗 Problem Link : LeetCode 2336 – Smallest Number in Infinite Set

• Problem Classification :
Category → Data Structures (Heap, Set)
Pattern → Priority Queue + HashSet for Tracking

1. Problem Statement -

We are given an infinite set of positive integers starting from 1:
{1, 2, 3, 4, 5, …}.

We need to design a data structure SmallestInfiniteSet supporting two operations:

popSmallest() → removes and returns the smallest integer currently available.

addBack(num) → adds a number back into the set if it was removed earlier.

The challenge is to handle these operations efficiently without trying to actually store “infinite numbers” in memory.

2. Constraints & Edge Cases -

Input range: 1 <= num <= 1000

Operations: At most 1000 calls will be made.

Special Cases:

Adding a number that’s already in the set → no effect.

After popping smallest numbers sequentially, the set should still logically extend infinitely (next number always available).

Re-adding numbers should restore them in the correct smallest order.

3. Intuition & Thought Process -

First thought: We can’t explicitly hold all infinite numbers. Instead, keep track of the smallest "next number".

Naive idea: Use a normal list and keep removing/adding, but this becomes inefficient.

Optimized observation:

Maintain a priority queue (min-heap) for numbers added back.

Maintain a counter nextNum that always represents the smallest number not yet removed.

If addBack() inserts a number smaller than nextNum, it must be stored in heap.

popSmallest() checks heap first, otherwise uses nextNum.

This balances efficiency with correctness.

4. Approaches & Complexity Analysis -
• Brute Force (Inefficient):

Store a large finite range [1...1000] in an array.

Remove/add numbers by scanning.

Time Complexity: O(n) per operation.

Space Complexity: O(n).

• Optimized Approach (Heap + Counter):

Use priority_queue (min-heap) to store added-back numbers.

Use set to avoid duplicates in heap.

Maintain nextNum as the smallest unpopped integer.

Steps:

On popSmallest():

If heap is not empty → pop from heap.

Else return nextNum++.

On addBack(num):

If num < nextNum and not already in heap → insert into heap.

Time Complexity: O(log n) per operation.
Space Complexity: O(n) for heap + set.

5. Example Walkthrough -

Input:
["SmallestInfiniteSet", "addBack", "popSmallest", "popSmallest", "popSmallest", "addBack", "popSmallest", "popSmallest", "popSmallest"]
[[], [2], [], [], [], [1], [], [], []]

Step-by-step:

Start with infinite set {1,2,3,…}

addBack(2) → no effect, since 2 already exists.

popSmallest() → returns 1.

popSmallest() → returns 2.

popSmallest() → returns 3.

addBack(1) → insert 1 into heap.

popSmallest() → returns 1 (from heap).

popSmallest() → returns 4 (from counter).

popSmallest() → returns 5.

Output: [null, null, 1, 2, 3, null, 1, 4, 5]

6. Patterns / Algorithms -

Primary Pattern: Heap + Greedy smallest selection

General Category: Data Structures (Priority Queue, Set)

7. Related Problems -

Design a stack with operations (LeetCode 155 – Min Stack)

Design a queue with extra constraints

Scheduling tasks with priority

8. Key Insights & Interview Considerations -

Infinite set handling requires lazy generation instead of storing everything.

Always think: Can I simulate infinity with just a counter + structure?

Avoid duplicate insertions in heap → must use a set for tracking.

9. Interview follow-up -

How would this scale if numbers go up to 10^9 instead of 1000?

Could we extend operations to remove arbitrary numbers?

Discuss trade-offs between using balanced BST vs heap.

10. References -

LeetCode 2336 – Smallest Number in Infinite Set

MIT 6.006 – Priority Queues and Heap Applications

CLRS – Heaps and Priority Queue section