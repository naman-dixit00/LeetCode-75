# Equal Row and Column Pairs

🔗 Problem Link : LeetCode 2352 – Equal Row and Column Pairs

• Problem Classification :

Category → Matrix / Hashing
Pattern → Compare Row vs Column Equality

1. Problem Statement

We are given a 0-indexed n × n integer matrix grid.
We must return the number of pairs (ri, cj) such that row ri and column cj are identical.

A row and column pair is equal if they have exact same sequence of elements.

2. Constraints & Edge Cases

Input size: n == grid.length == grid[i].length

1 ≤ n ≤ 200

1 ≤ grid[i][j] ≤ 10⁵

Edge Cases:

All rows and columns are unique → result = 0

Matrix with repeated rows or repeated columns → multiple matches

n = 1 → always 1 (row0 = col0)

3. Intuition & Thought Process

First thought: Compare each row with each column directly → O(n³). Too slow for n=200.

Optimization idea:

Store each row as a vector/hashable string.

Store each column as well.

Count matches using hash maps.

Key insight: Row and column comparison reduces to comparing serialized vectors.

4. Approaches & Complexity

Naive Approach:

For each row, compare with every column.

Time: O(n³)

Space: O(1)

Optimized Approach (Hashing):

Serialize each row → store in a hash map.

Serialize each column → check matches with row map.

Count total matches.

Time Complexity: O(n²)

Space Complexity: O(n²)

5. Example Walkthrough

Example 1:
Input: grid = [[3,2,1],[1,7,6],[2,7,7]]
Row[2] = [2,7,7] matches Column[1] = [2,7,7].
Output = 1 ✅

Example 2:
Input: grid = [[3,1,2,2],[1,4,4,5],[2,4,2,2],[2,4,2,2]]
Matches: Row0 = Col0, Row2 = Col2, Row3 = Col2 → 3 total.
Output = 3 ✅

6. Patterns / Algorithms

Hashing for sequences

Matrix row/column traversal

7. Related Problems

LeetCode 49: Group Anagrams (string hashing)

LeetCode 187: Repeated DNA Sequences

8. Key Insights & Interview Considerations

Avoid O(n³) brute force.

Hash row → column comparison makes it linear in matrix size.

Pay attention to serialization of vectors.