# Maximum Depth of Binary Tree

🔗 Problem Link : LeetCode 104 – Maximum Depth of Binary Tree

• Problem Classification :
Category → Binary Tree Traversal
Pattern → DFS Depth Calculation / BFS Level Order

1. Problem Statement

Given the root of a binary tree, return the maximum depth, defined as the number of nodes on the longest path from root to a leaf.

2. Constraints & Edge Cases

Input size: 0 ≤ n ≤ 10⁴

Node values: -100 ≤ Node.val ≤ 100

Edge Cases:

Empty tree (depth=0)

Single-node tree (depth=1)

Skewed tree (depth=n)

Perfectly balanced tree

3. Intuition & Thought Process

First thought: Recursively calculate max depth of left & right subtree.

Alternative idea: Use BFS level order traversal.

4. Approaches & Complexity Analysis

Approach 1 (DFS Recursion):

Depth = 1 + max(depth(left), depth(right))

Time: O(n)

Space: O(h), recursion stack

Approach 2 (BFS Iterative):

Traverse level by level using queue.

Count levels.

Time: O(n)

Space: O(n)

5. Example Walkthrough

Input: root = [3,9,20,null,null,15,7]

Longest path: 3 → 20 → 15 (depth=3)

Output: 3

6. Patterns / Algorithms

Recursion (DFS)

Level order traversal (BFS)

7. Related Problems

Balanced Binary Tree (LeetCode 110)

Minimum Depth of Binary Tree (LeetCode 111)

8. Key Insights & Interview Considerations

DFS is easier and concise.

BFS is iterative and avoids recursion stack overflow.

9. Interview Follow-up

Modify for weighted edges.

Find path itself, not just length.

10. References

LeetCode 104 – Maximum Depth of Binary Tree

CLRS – Binary Trees Chapter