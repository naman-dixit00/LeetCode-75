# Unique Paths

🔗 Problem Link : LeetCode 62 – Unique Paths

• Problem Classification : Category → Dynamic Programming / Combinatorics.
Pattern → Grid Traversal + Path Counting.

1. Problem Statement –

You are given an m×n grid. A robot starts at the top-left corner (0,0) and wants to reach the bottom-right corner (m-1, n-1).

The robot can only move right or down at any step.

Return the number of unique paths the robot can take to reach the destination.

The number of paths is guaranteed to fit within 2×10^9, so integer overflow is not a concern.

2. Constraints & Edge Cases –

Input size: 1 ≤ m, n ≤ 100

Edge Cases:

Grid with 1 row or 1 column → Only one path (straight line)

Grid is small (2×2) → Simple combinatorial count

Large grids → Must use DP or combinatorial formula; naive recursion will time out

3. Intuition & Thought Process –

First thought: Enumerate all paths → exponential time O(2^(m+n)), impractical.

Observation: Moving right/down is equivalent to choosing positions for right moves in a sequence of total moves (m-1 + n-1)

Combinatorial idea: Number of unique paths = C(m+n-2, m-1)

Dynamic Programming approach: Let dp[i][j] = number of paths to cell (i,j)

Transition: dp[i][j] = dp[i-1][j] + dp[i][j-1]

Base cases: dp[0][j] = 1 (first row), dp[i][0] = 1 (first column)

4. Approaches & Complexity Analysis –

Brute Force – Recursive:

Explore all possible paths recursively

Time Complexity: O(2^(m+n))

Space Complexity: O(m+n) for recursion stack

Optimized – Dynamic Programming / Combinatorics:

DP fills a table of size m×n

Combinatorial formula directly computes C(m+n-2, m-1)

Time Complexity: O(m*n) for DP or O(min(m,n)) for combinatorial formula

Space Complexity: O(m*n) or O(n) with optimized rolling array

5. Example Walkthrough –

Example 1: m = 3, n = 7

Total moves = 3-1 + 7-1 = 8

Choose positions for 2 downs → C(8,2) = 28

Output: 28

Example 2: m = 3, n = 2

Total moves = 3-1 + 2-1 = 3

Choose positions for 2 downs → C(3,2) = 3

Output: 3

6. Patterns / Algorithms –

Primary Pattern: Grid traversal with DP / Combinatorial counting

General Category: Dynamic Programming + Combinatorics

7. Related Problems –

Unique Paths II (LeetCode 63) – obstacles in grid

Minimum Path Sum (LeetCode 64)

Counting Paths in Graphs / Maze

8. Key Insights & Interview Considerations –

Recognize symmetry: down/right moves can be counted combinatorially

DP helps avoid recursion and redundant computations

Rolling arrays can optimize space for large grids

9. Interview Follow-up –

Extend to grids with obstacles or restrictions on movement

Count paths with weighted costs

Compute modulo for very large grids to avoid overflow

10. References –

LeetCode 62 – Unique Paths

Dynamic Programming tutorials on grid problems

Combinatorics for sequence arrangements