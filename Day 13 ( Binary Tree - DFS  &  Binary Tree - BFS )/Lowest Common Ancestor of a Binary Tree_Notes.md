Lowest Common Ancestor of a Binary Tree

🔗 Problem Link : LeetCode 236 – Lowest Common Ancestor of a Binary Tree

• Problem Classification :
Category → Binary Tree / DFS
Pattern → Divide and Conquer, Recursive Search

1. Problem Statement

Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.
Definition: The LCA of nodes p and q is the lowest node in the tree that has both as descendants (a node may be descendant of itself).

2. Constraints & Edge Cases

Nodes count: 2 ≤ n ≤ 10⁵

Values: -10⁹ ≤ Node.val ≤ 10⁹

All values unique

p ≠ q

Both p and q exist in the tree

Edge Cases:

One node is ancestor of the other

Very deep skewed tree

Large tree (10⁵ nodes)

3. Intuition & Thought Process

Naive idea: Find paths from root to p and q, then compare paths. O(n).

Optimized idea: DFS recursion.

If root is p or q, return root.

Recursively check left and right subtrees.

If both return non-null → root is LCA.

Else → return non-null child.

4. Approaches & Complexity Analysis

Approach: Recursive DFS

Traverse tree from root.

At each node, check if left or right contains p/q.

Use divide and conquer to find LCA.

Time Complexity: O(n) (visit each node once)
Space Complexity: O(h) recursion stack

5. Example Walkthrough

Input: root = [3,5,1,6,2,0,8,null,null,7,4], p=5, q=1

Left subtree has 5, right subtree has 1.

LCA = 3.

Input: root = [3,5,1,6,2,0,8,null,null,7,4], p=5, q=4

p=5 is ancestor of q=4.

LCA = 5.

6. Patterns / Algorithms

DFS recursion

Divide and conquer

7. Related Problems

LCA in BST (LeetCode 235)

Distance between nodes

8. Key Insights & Interview Considerations

Pitfall: forgetting case when one node is ancestor of the other.

Recursive solution is cleanest.

9. Interview Follow-up

LCA with parent pointers

LCA in general graphs

10. References

LeetCode 236 – Lowest Common Ancestor of a Binary Tree

MIT 6.006 – Tree Traversal Techniques