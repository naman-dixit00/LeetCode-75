Minimum Flips to Make a OR b Equal to c

🔗 Problem Link : LeetCode 1318 – Minimum Flips to Make a OR b Equal to c

• Problem Classification : Category → Bit Manipulation
• Pattern → Bitwise Comparison

1. Problem Statement

We are given three positive integers a, b, and c.

The goal is to calculate the minimum number of bit flips in a and b so that:

(a OR b) == c


Flip operation: change a single bit from 0 → 1 or 1 → 0.

2. Constraints & Edge Cases

Input Size: 1 <= a, b, c <= 10^9

Edge Cases:

a OR b is already equal to c → flips = 0

Large integers → iterate over bits safely

Only some bits need flipping → optimize by checking each bit individually

3. Intuition & Thought Process

Compare each bit position from LSB to MSB:

Case 1: c_bit == 0 → both a_bit and b_bit must be 0 → count 1 flip for each 1 in a_bit or b_bit

Case 2: c_bit == 1 → at least one of a_bit or b_bit must be 1 → flip only if both are 0

Iterate through all 32 bits (or 31 for positive numbers)

4. Approaches & Complexity Analysis

Brute Force: Convert to binary string → compare → O(32) per number

Optimized Bitwise Approach:

Initialize flips = 0
For i = 0 to 31:
    a_bit = (a >> i) & 1
    b_bit = (b >> i) & 1
    c_bit = (c >> i) & 1

    If c_bit == 0:
        flips += a_bit + b_bit
    Else:
        if a_bit == 0 and b_bit == 0:
            flips += 1


Time Complexity: O(32) → effectively O(1)

Space Complexity: O(1)

5. Example Walkthrough

Example 1: a = 2, b = 6, c = 5
Binary: 010, 110, 101
Flip steps:

Bit 0: 0 | 0 → need 1 → flip a_bit → 1

Bit 1: 1 | 1 → matches c → 0 flips

Bit 2: 0 | 1 → matches c → 0 flips
Total flips: 3

Example 2: a = 1, b = 2, c = 3 → already satisfied → flips = 0

6. Patterns / Algorithms

Primary Pattern: Bit Manipulation → Bitwise OR comparison

General Category: Binary Operations + Iterative Bit Checking

7. Related Problems

Number of 1 Bits

XOR-based transformations

Bitwise AND/OR conversions

8. Key Insights & Interview Considerations

Handle each bit individually

Keep operations minimal → O(1) runtime

Edge cases: one or both bits are already correct → avoid unnecessary flips

9. Interview Follow-up

Extend to large integers → 64-bit numbers

Minimize flips if multiple OR conditions required

Streaming integers → maintain rolling flip count

10. References

LeetCode 1318 – Minimum Flips to Make a OR b Equal to c

Bit Manipulation Patterns – MIT 6.042J / Competitive Programming