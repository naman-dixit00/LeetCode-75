Reverse Linked List

🔗 Problem Link : LeetCode 206 – Reverse Linked List

• Problem Classification :
Category → Linked List Transformation
Pattern → Iterative / Recursive Reversal

1. Problem Statement –

Given the head of a linked list, return the list reversed.

2. Constraints & Edge Cases –

Input Size : 0 ≤ n ≤ 5000
Node Values : –5000 ≤ Node.val ≤ 5000

• Edge Cases :

Empty list → return NULL.

Single node → unchanged.

3. Intuition & Thought Process –

Iterative method : Use three pointers (prev, curr, next).

Recursive method : Reverse rest, then fix head link.

4. Approaches & Complexity –

• Iterative :
Loop through list reversing links.
Time : O(n), Space : O(1)

• Recursive :
Base case = empty or single node.
Reverse rest, connect back.
Time : O(n), Space : O(n) recursion stack

5. Example Walkthrough –

Input: [1,2,3,4,5]
Output: [5,4,3,2,1]

6. Patterns / Algorithms –

Linked List pointer manipulation

Recursion / Iteration

7. Related Problems –

Reverse Linked List II (LeetCode 92)

Palindrome Linked List (LeetCode 234)