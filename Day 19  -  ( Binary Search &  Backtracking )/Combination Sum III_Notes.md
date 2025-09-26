Combination Sum III

🔗 Problem Link : LeetCode 216 – Combination Sum III

• Problem Classification : Category → Backtracking.
Pattern → Subset generation with sum constraint.

1. Problem Statement –

We need all combinations of k numbers (from 1–9) such that their sum is n.
Each number can be used once. No duplicate combinations.

2. Constraints & Edge Cases –

Constraints:

2 <= k <= 9

1 <= n <= 60

Edge Cases:

If smallest k numbers exceed n → no solutions.

If largest k numbers still less than n → no solutions.

Must avoid duplicate sets.

3. Intuition & Thought Process –

Naive idea: Try all subsets of {1…9}, check if size=k and sum=n.

Key observation: Search space is small (only 9 numbers). Backtracking works well.

4. Approaches & Complexity Analysis –

Brute Force – Subset Generation:

Generate all subsets of {1…9}.

Filter those with k elements and sum=n.

Time Complexity: O(2^9).

Optimized – Backtracking:

Build combination step by step.

Prune when sum > n or size > k.

Time Complexity: O(C(9,k)).

Space Complexity: O(k).

5. Example Walkthrough –

Input: k=3, n=9

Start with 1 → try 2,3,4…

Path: [1,2,6] sum=9 → valid.

Path: [1,3,5] sum=9 → valid.

Path: [2,3,4] sum=9 → valid.

Output = [[1,2,6],[1,3,5],[2,3,4]].

6. Patterns / Algorithms –

Pattern: Backtracking with constraints.

General Category: Combinatorial search.

7. Related Problems –

Combination Sum I & II.

Subsets with Sum.

8. Key Insights & Interview Considerations –

Pruning early avoids unnecessary work.

Order matters in recursion to avoid duplicates.

9. Interview Follow-up –

Could extend to larger number ranges.

Could apply memoization for large constraints.

10. References –

LeetCode 216 – Combination Sum III.

MIT Backtracking Lecture Notes.