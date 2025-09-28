Domino and Tromino Tiling

🔗 Problem Link : LeetCode 790 – Domino and Tromino Tiling

• Problem Classification : Category → Dynamic Programming / Combinatorics.
Pattern → 2×n Board Tiling with Linear Recurrence.

1. Problem Statement –

You are given a 2×n board and two types of tiles:

Domino – 2×1 or 1×2

Tromino – L-shaped 2×2 with one square missing (can rotate)

You need to compute the number of ways to completely tile the 2×n board. Two tilings are considered different if there exists at least one pair of 4-directionally adjacent cells that are covered differently in the two tilings.

Since the answer may be very large, return it modulo 10^9 + 7.

2. Constraints & Edge Cases –

Constraints:

1 ≤ n ≤ 1000

Edge Cases:

n = 1 → Only one way (single domino vertically)

n = 2 → Multiple domino and tromino arrangements

Large n → Efficient DP is required; naive recursion is infeasible

Rotations of tromino create multiple configurations; must account for symmetry

3. Intuition & Thought Process –

First thought: Try recursively placing dominoes and trominoes at each position → leads to exponential time.

Key observation: Use dynamic programming with linear recurrence:

Let dp[i] = number of ways to tile a 2×i board.

Place a vertical domino → contributes dp[i-1] ways

Place two horizontal dominoes → contributes dp[i-2] ways

Place tromino → contributes 2*dp[i-3] ways (because L-shape can be flipped)

Resulting recurrence:
dp[i] = dp[i-1] + dp[i-2] + 2*dp[i-3]

Base cases:

dp[0] = 1 (empty board)

dp[1] = 1

dp[2] = 2

This approach avoids combinatorial explosion and handles rotations systematically.

4. Approaches & Complexity Analysis –

Brute Force – Recursive Backtracking:

Place tiles in all valid positions recursively

Time Complexity: O(3^n) (exponential)

Space Complexity: O(n) recursion stack

Optimized – Dynamic Programming:

Use recurrence dp[i] = dp[i-1] + dp[i-2] + 2*dp[i-3]

Fill dp array iteratively

Time Complexity: O(n)

Space Complexity: O(n) (can be reduced to O(1) using rolling variables)

5. Example Walkthrough –

Example 1: n = 3

dp[0] = 1

dp[1] = 1

dp[2] = 2

dp[3] = dp[2] + dp[1] + 2dp[0] = 2 + 1 + 21 = 5

Output: 5

Example 2: n = 1

Only one way with a vertical domino → dp[1] = 1

Output: 1

6. Patterns / Algorithms –

Primary Pattern: Linear recurrence with combinatorial tiling

General Category: Dynamic Programming + Combinatorics

7. Related Problems –

Domino and Tromino variants on m×n boards

Tiling a 2×n board with only dominoes (LeetCode 70 variant)

Fibonacci and Tribonacci sequence (DP linear recurrence)

8. Key Insights & Interview Considerations –

Recognize the tiling problem forms a linear recurrence; explicit combinatorial counting is inefficient

Properly handle rotations and overlapping L-shapes

Modulo arithmetic is necessary to prevent overflow for large n

9. Interview Follow-up –

Extend problem to 3×n boards or general m×n boards

Count tilings using only certain tiles or restrict rotations

Optimize for memory using rolling variables

10. References –

LeetCode 790 – Domino and Tromino Tiling

Dynamic Programming tutorials on combinatorial sequences

Cracking the Coding Interview – DP Patterns