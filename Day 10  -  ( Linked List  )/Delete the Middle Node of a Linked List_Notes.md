Delete the Middle Node of a Linked List

🔗 Problem Link : LeetCode 2095 – Delete the Middle Node of a Linked List

• Problem Classification :
Category → Linked List Manipulation
Pattern → Fast and Slow Pointer + Node Deletion

1. Problem Statement –

We are given the head of a linked list. We need to delete the middle node and return the head of the modified list.

The middle node of a linked list of size n is the ⌊n/2⌋-th node from the start (0-based indexing).
Special case: For n = 1, the only node is removed, and the list becomes empty.

2. Constraints & Edge Cases –

Input Size : 1 ≤ n ≤ 10⁵
Node Values : 1 ≤ Node.val ≤ 10⁵

• Edge Cases :

Single node → return NULL.

Two nodes → delete the 2nd node.

Odd length list → exactly one middle.

Even length list → floor(n/2) decides.

3. Intuition & Thought Process –

Naive idea : Traverse the list, count nodes, then traverse again to delete the middle.

Optimized approach : Use fast and slow pointers – when fast reaches end, slow points to middle.

Then, delete the middle node by skipping it.

4. Approaches & Complexity –

• Two-pass method :
Count length → compute middle → delete by iterating again.
Time : O(n)
Space : O(1)

• One-pass method (fast/slow pointer) :
Move fast = 2 steps, slow = 1 step.
When fast ends → slow = middle.
Delete middle efficiently.
Time : O(n)
Space : O(1)

5. Example Walkthrough –

Input: [1,3,4,7,1,2,6]
n=7 → middle = 3rd (value 7).
After deletion → [1,3,4,1,2,6].

6. Patterns / Algorithms –

Slow/Fast pointer

Linked List manipulation

7. Related Problems –

Remove Nth Node from End (LeetCode 19)

Middle of Linked List (LeetCode 876)

8. Interview Key Insights –

Use fast/slow pointers to avoid two passes.

Edge case: n=1 must return NULL.