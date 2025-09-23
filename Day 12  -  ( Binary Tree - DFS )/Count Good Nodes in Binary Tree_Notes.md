# Count Good Nodes in Binary Tree

🔗 Problem Link : LeetCode 1448 – Count Good Nodes in Binary Tree

• Problem Classification :
Category → Binary Tree Traversal
Pattern → DFS with State Carry (Track Maximum so far)

1. Problem Statement

Given a binary tree root, a node X is called good if in the path from root to X there are no nodes with a value greater than X.
Return the total number of good nodes.

2. Constraints & Edge Cases

Input size: 1 ≤ n ≤ 10⁵

Node values: -10⁴ ≤ Node.val ≤ 10⁴

Edge Cases:

Single-node tree → root is always good

Strictly increasing path → all nodes are good

Strictly decreasing path → only root is good

Large tree (10⁵ nodes)

3. Intuition & Thought Process

First thought: A node is good if it is greater than or equal to all nodes seen so far.

Key observation: Carry forward the maximum value along the path.

Naive approach: For each node, recompute max along path → O(n²).

Optimized idea: Use DFS and pass down the maximum so far.

4. Approaches & Complexity Analysis

Approach (DFS with Max Carry):

Start from root with maxSoFar = -∞.

At each node, check if node->val ≥ maxSoFar → increment count.

Update maxSoFar = max(maxSoFar, node->val).

Recurse left and right.

Time Complexity: O(n) (visit each node once)
Space Complexity: O(h) recursion stack (worst O(n))

5. Example Walkthrough

Input: root = [3,1,4,3,null,1,5]

Path 3 → good

Path 3→1 (max=3, node=1 → not good)

Path 3→4 (max=3, node=4 → good)

Path 3→4→5 (good)

Path 3→1→3 (good)
→ Total = 4

6. Patterns / Algorithms

Binary Tree DFS

State Carry Propagation

7. Related Problems

Path Maximum in Binary Tree

Binary Tree Right Side View

8. Key Insights & Interview Considerations

Carrying state is more efficient than recomputation.

Pitfall: Forgetting to include root as always good.

9. Interview Follow-up

Modify to count "bad nodes".

Return list of good nodes instead of count.

10. References

LeetCode 1448 – Count Good Nodes in Binary Tree

MIT 6.006 – Recursive Tree Traversal