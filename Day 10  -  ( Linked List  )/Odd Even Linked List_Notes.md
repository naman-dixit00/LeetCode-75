Odd Even Linked List

🔗 Problem Link : LeetCode 328 – Odd Even Linked List

• Problem Classification :
Category → Linked List Reordering
Pattern → Two-pointer restructuring

1. Problem Statement –

We are given a singly linked list. We must group nodes with odd indices first, then nodes with even indices, preserving relative order.

2. Constraints & Edge Cases –

Input Size : 0 ≤ n ≤ 10⁴
Node Values : –10⁶ ≤ Node.val ≤ 10⁶

• Edge Cases :

Empty list → return NULL.

Single node → unchanged.

Already alternating list.

3. Intuition & Thought Process –

Maintain two lists: one for odd nodes, one for even nodes.

Traverse once, connecting odd.next → odd, even.next → even.

Finally, join odd list with even list.

4. Approaches & Complexity –

• Single Pass Method:
Maintain odd, even, evenHead. Traverse list once.
Time : O(n)
Space : O(1)

5. Example Walkthrough –

Input: [1,2,3,4,5]
Odd = [1,3,5], Even = [2,4]
Output = [1,3,5,2,4]

6. Patterns / Algorithms –

Linked List splitting

Index based restructuring

7. Related Problems –

Partition List (LeetCode 86)

Reorder List (LeetCode 143)