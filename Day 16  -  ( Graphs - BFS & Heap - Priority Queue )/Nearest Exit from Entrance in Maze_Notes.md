# Nearest Exit from Entrance in Maze

🔗 Problem Link : LeetCode 1926 – Nearest Exit from Entrance in Maze

• Problem Classification : Category → Graph / BFS Traversal. Pattern → Multi-source BFS for shortest path in grids.

1. Problem Statement -

We are given a maze represented as a grid (m × n). Each cell can either be:

'.' → Empty path where you can move.

'+' → Wall where you cannot pass.

You are also given the entrance position. From there, you can move up, down, left, or right. The goal is to find the shortest number of steps to reach the nearest exit.

⚠️ Note:

Exit = Any border cell that is empty (.), except the entrance itself.

If no exit exists, return -1.

2. Constraints & Edge Cases -

Input Size : 1 <= m, n <= 100.

Cell values : Only . or +.

Entrance is guaranteed to be empty.

• Edge Cases :

Maze with no exits → output -1.

Maze where entrance is at boundary but not valid exit.

Multiple exits exist → must find nearest using BFS.

Maze fully blocked by walls.

Minimum grid size (1×1) case.

3. Intuition & Thought Process -

First thought : This is a classic shortest path in grid problem.

Naive idea : Try DFS from entrance and track minimum distance to boundary. But DFS explores deeply and may not guarantee shortest path.

Key observation : BFS guarantees shortest path in unweighted grids.

Use BFS starting from entrance, explore level by level, and stop when first exit is found.

4. Approaches & Complexity Analysis -

Approach 1 – DFS (Inefficient):

Start DFS from entrance.

Recursively explore all paths until exit found.

Track minimum depth.
Time Complexity : O(m × n) worst-case.
Space Complexity : O(m × n) recursion stack.

Approach 2 – BFS (Optimized):

Push entrance into queue with distance = 0.

Explore neighbors in 4 directions.

Mark visited cells to avoid revisits.

First boundary cell (exit) found → return steps.
Time Complexity : O(m × n) (each cell visited once).
Space Complexity : O(m × n) (queue + visited).

5. Example Walkthrough -

Example 1 :
Input:
maze = [["+","+",".","+"],[".",".",".","+"],["+","+","+","."]], entrance = [1,2]

Start at (1,2).

Move UP → (0,2) → boundary exit found in 1 step.
Output = 1.

Example 2 :
maze = [["+","+","+"],[".",".","."],["+","+","+"]], entrance = [1,0]

From (1,0), move RIGHT twice → reach (1,2).

Steps = 2.
Output = 2.

Example 3 :
maze = [[".","+"]], entrance = [0,0]

Entrance is at border but not exit.

No other exits.
Output = -1.

6. Patterns / Algorithms -

Primary Pattern : BFS shortest path in unweighted graph.

General Category : Grid Traversal + Queue-based BFS.

7. Related Problems -

Walls and Gates (LeetCode 286)

Rotting Oranges (LeetCode 994)

Shortest Path in Binary Matrix (LeetCode 1091)

8. Key Insights & Interview Considerations -

BFS ensures shortest exit discovery.

Always mark visited cells early to avoid cycles.

Pitfall: Counting entrance as exit → must exclude.

Border cells handling is critical.

9. Interview follow-up -

What if diagonal moves were allowed?

What if maze weights vary → then use Dijkstra instead of BFS.

What if multiple entrances exist? → Multi-source BFS.

10. References -

LeetCode 1926 – Nearest Exit from Entrance in Maze

MIT 6.006 Algorithms – BFS Graph Traversal

Cracking the Coding Interview – BFS Grid Problems