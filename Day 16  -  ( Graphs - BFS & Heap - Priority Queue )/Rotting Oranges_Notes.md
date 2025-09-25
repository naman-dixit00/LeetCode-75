Rotting Oranges

🔗 Problem Link : LeetCode 994 – Rotting Oranges

• Problem Classification :
Category → Graph Traversal (BFS)
Pattern → Multi-source BFS with time simulation

1. Problem Statement -

We are given an m × n grid where each cell can be:

0 → empty cell

1 → fresh orange

2 → rotten orange

Every minute, a fresh orange adjacent (up, down, left, right) to a rotten orange becomes rotten.

We need to compute the minimum number of minutes required for all oranges to rot. If impossible, return -1.

2. Constraints & Edge Cases -

Input size: 1 ≤ m, n ≤ 10

Grid values: only {0,1,2}

Key condition: grid[i][i] == 1 always true for oranges.

Edge Cases:

If initially no fresh oranges → return 0.

If fresh oranges exist but no rotten orange to start → return -1.

Smallest grid (1×1) cases.

Large grid with oranges at corners, requiring maximum spread time.

3. Intuition & Thought Process -

First thought: Rotting spreads step by step like waves. This is BFS-like behavior.

Naive idea: For every fresh orange, simulate rotting manually → too slow.

Key observation: Instead of spreading from fresh to rotten, we spread from all rotten oranges at once (multi-source BFS).

BFS ensures we calculate the minimum minutes layer by layer.

At the end, if any fresh orange remains → return -1.

4. Approaches & Complexity Analysis -
• Brute Force Approach

Keep scanning the grid in loops, rotting fresh oranges repeatedly until no change.

Time Complexity: O(m × n × max(m,n))

Space Complexity: O(1)

Very inefficient for bigger grids.

• Optimized BFS Approach

Step 1: Push all rotten oranges into a queue initially.

Step 2: Perform BFS layer by layer → rotting neighbors.

Step 3: Keep track of time elapsed.

Step 4: After BFS, check if any fresh orange remains.

Time Complexity: O(m × n)
Space Complexity: O(m × n) for queue

5. Example Walkthrough -

Example 1:

Input: [[2,1,1],
        [1,1,0],
        [0,1,1]]


Initial rotten = (0,0)

After 1 min: (0,1),(1,0) rot.

After 2 min: (0,2),(1,1) rot.

After 3 min: (2,1) rot.

After 4 min: (2,2) rot.
Output → 4

6. Patterns / Algorithms -

Primary → Multi-source BFS

General → Graph + Matrix traversal

7. Related Problems -

Walls and Gates (LeetCode 286)

Shortest Path in Binary Matrix (LeetCode 1091)

Flood Fill (LeetCode 733)

8. Key Insights & Interview Considerations -

BFS from all rotten at once is the trick.

Ensure correct time tracking → minutes = BFS layers.

Watch for impossible cases.

9. Interview Follow-up -

What if diagonals were also allowed?

How to handle 3D grid of oranges?

Can we optimize BFS further with bitmasks?

10. References -

LeetCode 994 – Rotting Oranges

BFS Graph Traversal – MIT OpenCourseWare

Cracking the Coding Interview – BFS Patterns