# Longest ZigZag Path in a Binary Tree

🔗 Problem Link : LeetCode 1372 – Longest ZigZag Path in a Binary Tree

• Problem Classification :
Category → Binary Trees, DFS Traversal
Pattern → State Carry (Direction & Length)

1. Problem Statement
* A ZigZag path in a binary tree is defined by alternating left and right child moves.
* Start at any node, choose initial direction.
* Alternate directions at each step.
* ZigZag length = nodes visited - 1.
* Return the longest ZigZag path in the tree.

2. Constraints & Edge Cases
* Input size: 1 ≤ n ≤ 5×10⁴
* Node values: 1 ≤ val ≤ 100

Edge Cases:
* Single node (result=0)
* Skewed tree (result=1)
* Perfect alternating tree (longest path possible)

3. Intuition & Thought Process
* First thought: Try DFS, carrying direction and length.
* Key idea: At each node, branch in both directions and alternate.
* Reset condition: If same direction is continued, length resets to 1.

4. Approaches & Complexity Analysis
* Approach (DFS with Direction):
* DFS(node, direction, length):
* If direction = left → go left with length+1, go right with reset length=1.
* If direction = right → go right with length+1, go left with reset length=1.
* Track global maximum.
* Time Complexity: O(n)
* Space Complexity: O(h) recursion stack

5. Example Walkthrough
* Input: root = [1,null,1,1,1,null,null,1,1,null,1,null,null,null,1]
* One ZigZag path: Right → Left → Right → length=3
* Output = 3

6. Patterns / Algorithms
* DFS with parameters (direction, length)
* Global max tracking

7. Related Problems
* Binary Tree Diameter
* Longest Path with Alternating Constraint

8. Key Insights & Interview Considerations
* Carry both direction and length in recursion.
* Pitfall: Forgetting to reset length when switching branch.

9. Interview Follow-up
* Modify to return the actual path, not just length.
* Extend to N-ary trees with ZigZag definition.

10. References
* LeetCode 1372 – Longest ZigZag Path in a Binary Tree
* MIT 6.006 – DFS Tree Exploration