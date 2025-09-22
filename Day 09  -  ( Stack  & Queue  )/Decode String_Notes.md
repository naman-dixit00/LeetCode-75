Decode String

🔗 Problem Link : LeetCode 394 – Decode String

• Problem Classification :
Category → String / Stack / Simulation
Pattern → Stack-based decoding with nested repetition

1. Problem Statement

We are given an encoded string s. The encoding follows the rule:

k[encoded_string] → repeat encoded_string exactly k times.

Nested encodings are valid, e.g., "3[a2[c]]" → "accaccacc".

We must return the decoded string.

2. Constraints & Edge Cases

Input length: 1 ≤ s.length ≤ 30

Input only has lowercase letters, digits, and brackets [ ].

Every bracket is well-formed.

All numbers k are within [1, 300].

Output length ≤ 10⁵.

Edge Cases:

Single-character inputs (e.g., "a" → "a")

Nested encodings (e.g., "2[a2[b]]")

Large repetition factors (300[a])

Multiple segments concatenated ("2[abc]3[cd]ef")

3. Intuition & Thought Process

Naive thought: Directly expand recursively, but recursion may be hard to manage with nesting.

Better idea: Use a stack to process characters:

Maintain two stacks → one for counts, one for strings.

When encountering ], pop from stack, repeat substring, append to parent.

4. Approaches & Complexity Analysis

Approach – Stack-based decoding

Traverse input string.

If digit → build number (may be > 1 digit).

If [ → push current result + count to stack.

If letter → append to current result.

If ] → pop, repeat string, merge.

Time Complexity: O(n * k) worst-case (string building), typically O(n).
Space Complexity: O(n) for stack and output string.

5. Example Walkthrough

Input: s = "3[a2[c]]"

Push 3 and empty string.

Encounter "a2[c]" → expands to "acc".

Final expansion → "accaccacc".

Output: "accaccacc"

6. Patterns / Algorithms

Stack simulation

Parsing multi-digit integers

String concatenation

7. Related Problems

LeetCode 880 – Decoded String at Index

LeetCode 682 – Baseball Game (stack simulation)

8. Key Insights & Interview Considerations

Nested structures naturally → stack or recursion.

Watch out for multi-digit numbers.

Efficiently manage repeated substrings to avoid TLE.

9. Interview follow-up

Handle streamed input (decode without storing entire string).

Optimize for huge outputs (lazy evaluation).

10. References

LeetCode 394 – Decode String

MIT 6.006 – Parsing with Stacks