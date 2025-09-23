Leaf-Similar Trees

🔗 Problem Link : LeetCode 872 – Leaf-Similar Trees

• Problem Classification :
Category → Binary Trees, DFS Traversal
Pattern → Collect Leaves + Sequence Comparison

1. Problem Statement

Two binary trees are leaf-similar if their leaf sequences (left to right) are identical.
Return true if both trees have the same leaf sequence, otherwise false.

2. Constraints & Edge Cases

Nodes per tree: 1 ≤ n ≤ 200

Node values: 0 ≤ val ≤ 200

Edge Cases:

Single node trees (leaf sequence = root value)

Completely unbalanced trees

Different number of leaves

Identical values but different structure

3. Intuition & Thought Process

First thought: Collect leaves of both trees into arrays.

Key idea: Use DFS to extract leaf sequence. Compare both arrays.

4. Approaches & Complexity Analysis

Approach 1 (DFS Leaf Collection):

Traverse tree in DFS order, add leaves to vector.

Compare two vectors.

Time: O(n1 + n2)

Space: O(n1 + n2)

Approach 2 (Iterative Traversal):

Same idea, but using stack or queue instead of recursion.

5. Example Walkthrough

Input:
root1 = [3,5,1,6,2,9,8,null,null,7,4]
root2 = [3,5,1,6,7,4,2,null,null,null,null,null,null,9,8]

Leaf sequences = [6,7,4,9,8] and [6,7,4,9,8]

Equal → Output = true

6. Patterns / Algorithms

DFS Traversal

Sequence comparison

7. Related Problems

Same Tree (LeetCode 100)

Subtree of Another Tree (LeetCode 572)

8. Key Insights & Interview Considerations

Only leaf nodes matter, structure is irrelevant.

Sequence order must be exact.

9. Interview Follow-up

Optimize to avoid full array storage (compare on the fly).

Extend to k trees comparison.

10. References

LeetCode 872 – Leaf-Similar Trees

MIT 6.006 – DFS Traversal