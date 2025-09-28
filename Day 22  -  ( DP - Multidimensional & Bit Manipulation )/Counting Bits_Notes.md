Counting Bits

🔗 Problem Link : LeetCode 338 – Counting Bits

• Problem Classification : Category → Dynamic Programming / Bit Manipulation
• Pattern → Bit Count using DP

1. Problem Statement

Given an integer n, return an array ans of length n+1, where ans[i] represents the number of 1s in the binary representation of i.

Follow-up: Solve in O(n) time without using built-in popcount.

2. Constraints & Edge Cases

Input Size: 0 <= n <= 10^5

Edge Cases:

n = 0 → output = [0]

n is large → optimize for linear time

Built-in functions not allowed → use DP pattern

3. Intuition & Thought Process

Observation: i in binary can be derived from i/2 and i%2

Transition:

ans[i] = ans[i >> 1] + (i & 1)

This is because right-shifting removes the last bit; last bit is added via (i & 1).

4. Approaches & Complexity Analysis

Brute Force:

Convert each number to binary and count → O(n log n)

Optimized DP:

Build array iteratively using previously computed values

Time Complexity: O(n)

Space Complexity: O(n)

5. Example Walkthrough

Example 1: n = 5
Compute iteratively:
0 → 0
1 → 1
2 → 10 → 1
3 → 11 → 2
4 → 100 → 1
5 → 101 → 2

Output: [0,1,1,2,1,2]

6. Patterns / Algorithms

Primary Pattern: DP based on previous computations

General Category: Bit Manipulation + DP

7. Related Problems

Number of 1 Bits

Hamming Distance

Power of Two / Bit Counting

8. Key Insights & Interview Considerations

Right shift + bitwise AND is faster than converting to binary

Using previous computed results avoids repeated work

Pattern useful for population count in large ranges

9. Interview Follow-up

Handle multiple queries efficiently

Online computation without array storage

Extend to other bases (base-3, base-16)

10. References

LeetCode 338 – Counting Bits

Bit Manipulation Patterns – MIT 6.042J