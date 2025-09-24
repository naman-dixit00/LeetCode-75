# Search in a Binary Search Tree

🔗 Problem Link : LeetCode 700 – Search in a BST

• Problem Classification :
Category → Binary Search Trees
Pattern → Recursive / Iterative BST Traversal

1. Problem Statement

We are given a BST and a value val. We must return the subtree rooted at the node with val. If no such node exists, return NULL.

2. Constraints & Edge Cases

1 ≤ n ≤ 5000

Node values: 1 ≤ val ≤ 10⁷

Root is a valid BST.

Edge Cases:

Value not in tree → return NULL.

Value is root → return full tree.

Skewed tree (like a linked list).

3. Intuition & Thought Process

First thought: This is a direct BST search.

Observation: Compare val with root.

If val < root → go left.

If val > root → go right.

Else return root.

4. Approaches & Complexity Analysis

Approach (Recursive or Iterative):

Base case: root = NULL → return NULL.

Recurse until found.

Time Complexity: O(h), h = tree height.
Space Complexity: O(h) recursion stack or O(1) iterative.

5. Example Walkthrough

Input: root = [4,2,7,1,3], val = 2

Start root=4 → 2 < 4 → go left.

Node=2 → found.

Return subtree [2,1,3].

6. Patterns / Algorithms

Binary Search Tree traversal.

7. Related Problems

Insert into BST

Delete Node in BST

8. Key Insights & Interview Considerations

Same complexity as binary search on arrays.

Pitfall: forgetting NULL check.

9. Interview Follow-up

Iterative version vs recursive.

Modify to return path instead of node.

10. References

LeetCode 700 – Search in a BST

MIT 6.006 – Trees & Searching