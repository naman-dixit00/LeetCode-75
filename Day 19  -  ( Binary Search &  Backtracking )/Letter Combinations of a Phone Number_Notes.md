Letter Combinations of a Phone Number

🔗 Problem Link : LeetCode 17 – Letter Combinations of a Phone Number

• Problem Classification : Category → Backtracking.
Pattern → String building via recursion.

1. Problem Statement –

We are given a string of digits (2–9). Each digit maps to letters (like a phone keypad). We must return all possible letter combinations.

2. Constraints & Edge Cases –

Constraints:

0 <= digits.length <= 4

digits[i] ∈ [2-9].

Edge Cases:

Empty input → return empty list.

Single digit → return its mapping.

Multiple digits → exponential growth in combinations.

3. Intuition & Thought Process –

Naive idea: Generate all combinations by brute force nested loops. Works but rigid.

Key observation: This is essentially a Cartesian product of digit mappings → recursion/backtracking is natural.

4. Approaches & Complexity Analysis –

Brute Force – Nested Loops:

Manually generate all combos. Works only up to length 4.

Time Complexity: Exponential, ~O(3^n * 4^m).

Optimized – Backtracking:

Use recursion: for each digit, append letters and recurse.

Collect results when reaching end.

Time Complexity: O(3^n * 4^m).

Space Complexity: O(n) recursion stack.

5. Example Walkthrough –

Input: "23"

Digit '2' → "abc".

Digit '3' → "def".

Build combinations:
→ "ad","ae","af","bd","be","bf","cd","ce","cf".

Output = 9 combinations.

6. Patterns / Algorithms –

Pattern: Backtracking recursion.

General Category: Combinatorial generation.

7. Related Problems –

Generate Parentheses.

Subsets.

Permutations.

8. Key Insights & Interview Considerations –

Backtracking ensures code is simple, scalable.

Be mindful of exponential output size.

9. Interview Follow-up –

Could generalize to any mapping (not just phone keypad).

Could implement iterative BFS style solution.

10. References –

LeetCode 17 – Letter Combinations.

MIT 6.046 – Recursion and Backtracking.