Day X – Binary Tree Right Side View

🔗 Problem Link : LeetCode 199 – Binary Tree Right Side View

• Problem Classification :
Category → Binary Tree / BFS
Pattern → Level Order Traversal (Rightmost node per level)

1. Problem Statement

Given the root of a binary tree, return the values of the nodes visible from the right side (top to bottom).

2. Constraints & Edge Cases

Nodes count: 0 ≤ n ≤ 100

Values: -100 ≤ Node.val ≤ 100

Edge Cases:

Empty tree → []

Skewed left tree → only one node visible each level

Perfect binary tree → rightmost node visible per level

3. Intuition & Thought Process

Naive idea: Do BFS and pick the last node in each level.

Alternative idea: DFS (right-first order) and track first node at each depth.

Optimized BFS: Standard queue with level size tracking.

4. Approaches & Complexity Analysis

Approach: BFS level-order

Traverse level by level.

For each level, capture the last node’s value.

Time Complexity: O(n)
Space Complexity: O(n) (queue)

5. Example Walkthrough

Input: root = [1,2,3,null,5,null,4]

Level 1: 1

Level 2: 3

Level 3: 4
→ Output = [1,3,4]

6. Patterns / Algorithms

BFS (Level-order traversal)

DFS (right-first) alternative

7. Related Problems

Left Side View

Level Order Traversal

8. Key Insights & Interview Considerations

BFS is easier to implement.

DFS saves memory but needs depth bookkeeping.

9. Interview Follow-up

Extend to k-th visible side view.

Extend to 3D tree visualization.

10. References

LeetCode 199 – Binary Tree Right Side View

MIT 6.006 – BFS Traversal Applications