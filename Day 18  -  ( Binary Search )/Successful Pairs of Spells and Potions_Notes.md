Successful Pairs of Spells and Potions

🔗 Problem Link : LeetCode 2300 – Successful Pairs of Spells and Potions

• Problem Classification : Category → Binary Search + Sorting.
Pattern → Two-array interaction with threshold condition.

1. Problem Statement –

We are given two arrays:

spells (length = n), representing spell strengths.

potions (length = m), representing potion strengths.

A pair (spell, potion) is successful if spell * potion >= success.

We must return an array pairs of length n, where pairs[i] = number of potions that, when paired with spells[i], result in success.

2. Constraints & Edge Cases –

Array sizes: 1 <= n, m <= 100,000.

Values: 1 <= spells[i], potions[j] <= 100,000.

Success threshold: 1 <= success <= 10^10.

• Edge Cases –

Very small spells (like 1) may fail against all potions.

Very large spells may succeed against all potions.

Large success threshold may result in mostly 0 pairs.

Duplicate spells and potions must be handled correctly.

3. Intuition & Thought Process –

Naive idea: For each spell, check all potions → O(n * m) → impossible for 100k.

Key observation:

Rearrange condition: spell * potion >= success.

For each spell, we need potions where potion >= ceil(success / spell).

This turns into a search for lower bound in a sorted potion array.

4. Approaches & Complexity Analysis –

Brute Force Approach –

For each spell, multiply with all potions. Count valid ones.

Time Complexity: O(n * m).

Space Complexity: O(1).

Optimized Approach – Sorting + Binary Search

Step 1: Sort potions.

Step 2: For each spell, compute threshold = ceil(success / spell).

Step 3: Use binary search to find the first potion ≥ threshold.

Step 4: Count = total potions - index.

Time Complexity: O(m log m + n log m).

Space Complexity: O(1).

5. Example Walkthrough –

Example 1:
Input: spells = [5,1,3], potions = [1,2,3,4,5], success = 7

For spell=5 → threshold=ceil(7/5)=2 → potions≥2 → {2,3,4,5} → count=4.

For spell=1 → threshold=7 → potions≥7 → none → count=0.

For spell=3 → threshold=ceil(7/3)=3 → potions≥3 → {3,4,5} → count=3.

Output = [4,0,3].

6. Patterns / Algorithms –

Primary Pattern: Sorting + Binary Search.

General Category: Two-pointer / Array interaction.

7. Related Problems –

Successful Pairs with threshold (variant).

Minimum Time to Complete Trips (binary search scaling).

Count of Smaller Numbers After Self.

8. Key Insights & Interview Considerations –

Converting multiplicative inequality into a division threshold is critical.

Sorting potions once and reusing search makes it efficient.

Careful handling of integer division and ceil is important.

9. Interview Follow-up –

Could extend to multiple thresholds (multi-dimensional queries).

Could handle streaming data (need balanced BST or segment tree).

10. References –

LeetCode 2300 – Successful Pairs of Spells and Potions.

MIT 6.006 – Binary Search and Divide & Conquer.