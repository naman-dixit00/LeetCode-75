# Min Cost Climbing Stairs

🔗 Problem Link : LeetCode 746 – Min Cost Climbing Stairs

• Problem Classification : Category → Dynamic Programming.
Pattern → DP with Step Choices.

1. Problem Statement –

You are given a staircase with cost[i] representing the cost of stepping on ith stair.

From step i, you can move 1 step or 2 steps forward.

You can start from step 0 or step 1.

Return the minimum cost to reach the top of the staircase.

2. Constraints & Edge Cases –

Constraints:

2 <= cost.length <= 1000

0 <= cost[i] <= 999

Edge Cases:

Cost array of length 2 → pick min(cost[0], cost[1]).

Steps with zero cost → algorithm should handle.

Large cost values → cumulative sum must not overflow 32-bit.

3. Intuition & Thought Process –

Naive idea: Try all paths recursively, sum costs → exponential.

Key observation: This is classic DP: minCost[i] = cost[i] + min(minCost[i-1], minCost[i-2]).

Optimized idea: Use rolling variables for O(1) space instead of full array.

4. Approaches & Complexity Analysis –

Brute Force – Recursive:

For each step, recursively calculate min cost from i-1 and i-2.

Time Complexity: O(2^n)

Space Complexity: O(n) recursion stack

Optimized – Iterative DP:

Initialize: dp[0] = cost[0], dp[1] = cost[1]

For i>=2: dp[i] = cost[i] + min(dp[i-1], dp[i-2])

Result = min(dp[n-1], dp[n-2])

Time Complexity: O(n)

Space Complexity: O(1) with rolling variables

5. Example Walkthrough –

Input: cost = [10,15,20]

Start at index 0: path = 10 → 20 → total = 30

Start at index 1: path = 15 → top → total = 15

Output: 15

6. Patterns / Algorithms –

Primary Pattern: Dynamic Programming with choices.

General Category: Path optimization, step-based recurrence.

7. Related Problems –

Climbing Stairs (LeetCode 70)

House Robber (LeetCode 198)

Fibonacci / Tribonacci sequences

8. Key Insights & Interview Considerations –

Recognize pattern similar to Fibonacci: sum/min choices from last 1–2 steps.

Use rolling variables to reduce memory usage.

Must handle starting from step 0 or 1.

9. Interview Follow-up –

Extend to k-step staircase.

Variable step cost with penalties.

10. References –

LeetCode 746 – Min Cost Climbing Stairs

MIT 6.006 – Dynamic Programming Examples