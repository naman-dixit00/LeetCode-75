#  Removing Stars From a String

🔗 Problem Link : LeetCode 2390 – Removing Stars From a String

• Problem Classification :

Category → String / Stack
Pattern → Remove Characters using Stack

1. Problem Statement

We are given a string s consisting of lowercase letters and *.
Each * removes itself and the closest non-star character to its left.
We must return the final string after all removals.

2. Constraints & Edge Cases

1 ≤ s.length ≤ 10⁵

s contains only lowercase letters and *.

Operations are always valid (never invalid star).

Edge Cases:

"*****" with enough letters before.

"erase*****" → empty string.

String with no * → remains unchanged.

3. Intuition & Thought Process

First thought: Simulate removals left to right.

Stack approach fits perfectly:

Push characters onto stack.

When * encountered → pop last character.

4. Approaches & Complexity

Naive Approach:

String modification with removals.

Time: O(n²) (shifts after removals).

Optimized Approach (Stack):

Use stack to process characters.

At end, build result from stack.

Time: O(n)

Space: O(n)

5. Example Walkthrough

Example 1:
s = "leet**cod*e"

Remove t → "lee*cod*e"

Remove e → "lecod*e"

Remove d → "lecoe" ✅

Example 2:
s = "erase*****" → all removed → "". ✅

6. Patterns / Algorithms

Stack simulation

String building

7. Related Problems

LeetCode 20: Valid Parentheses

LeetCode 1047: Remove All Adjacent Duplicates

8. Key Insights & Interview Considerations

Stack guarantees O(n) linear processing.

Avoid repeated string erase operations.