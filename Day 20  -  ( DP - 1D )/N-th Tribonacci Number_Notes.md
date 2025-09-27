N-th Tribonacci Number

🔗 Problem Link : LeetCode 1137 – N-th Tribonacci Number

• Problem Classification : Category → Dynamic Programming / Recursion.
Pattern → Linear Recurrence Relation.

1. Problem Statement –

The Tribonacci sequence is a generalization of the Fibonacci sequence:

𝑇
0
=
0
,
𝑇
1
=
1
,
𝑇
2
=
1
T
0
	​

=0,T
1
	​

=1,T
2
	​

=1

𝑇
𝑛
=
𝑇
𝑛
−
1
+
𝑇
𝑛
−
2
+
𝑇
𝑛
−
3
T
n
	​

=T
n−1
	​

+T
n−2
	​

+T
n−3
	​

 for 
𝑛
≥
3
n≥3

Given an integer 
𝑛
n, return 
𝑇
𝑛
T
n
	​

. The problem asks for an efficient computation of the nth term without exceeding integer limits.

2. Constraints & Edge Cases –

Constraints:

0
≤
𝑛
≤
37
0≤n≤37

Result fits in a 32-bit signed integer.

Edge Cases:

n = 0,1,2 → base cases should be handled separately.

Large n → naive recursion leads to exponential time.

Using iterative DP or memoization is optimal.

3. Intuition & Thought Process –

Naive idea: Use simple recursion. Compute T(n) = T(n-1)+T(n-2)+T(n-3).

Key observation: Recursion recomputes overlapping subproblems, leading to 
𝑂
(
3
𝑛
)
O(3
n
) time.

Optimized idea: Use dynamic programming: store last 3 computed values and iterate → O(n) time and O(1) space.

4. Approaches & Complexity Analysis –

Brute Force – Simple Recursion:

Directly compute T(n) using recursive formula.

Time Complexity: O(3^n) (exponential)

Space Complexity: O(n) recursion stack

Optimized – Iterative DP / Rolling Array:

Store only last 3 values instead of full DP array.

Update in each iteration: T0=T1; T1=T2; T2=next;

Time Complexity: O(n)

Space Complexity: O(1)

5. Example Walkthrough –

Input: n = 4

Base cases: T0=0, T1=1, T2=1

Compute: T3 = 0+1+1 = 2

Compute: T4 = 1+1+2 = 4

Output: 4

Input: n = 25 → iterative DP computes T25 = 1389537

6. Patterns / Algorithms –

Primary Pattern: Linear Recurrence Relation.

General Category: Dynamic Programming, Sequence Computation.

7. Related Problems –

Fibonacci Number (LeetCode 509)

Climbing Stairs (LeetCode 70)

Generalized k-bonacci sequences

8. Key Insights & Interview Considerations –

Using rolling variables avoids extra memory.

Always handle base cases explicitly to avoid index errors.

Recursion is intuitive but inefficient for large n.

9. Interview Follow-up –

Extend to k-bonacci (sum of k previous numbers).

Use matrix exponentiation for O(log n) solution.

10. References –

LeetCode 1137 – N-th Tribonacci Number

Cracking the Coding Interview – Dynamic Programming Patterns