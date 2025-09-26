Koko Eating Bananas

🔗 Problem Link : LeetCode 875 – Koko Eating Bananas

• Problem Classification : Category → Binary Search on Answer.
Pattern → Search for minimum feasible speed.

1. Problem Statement –

We are given n piles of bananas, each pile having piles[i] bananas.
Koko can eat at a speed of k bananas per hour. In one hour:

She selects a pile.

Eats k bananas from it. If fewer than k bananas remain, she finishes the pile and stops eating further that hour.

We need to find the minimum integer k such that all bananas can be eaten within h hours.

2. Constraints & Edge Cases –

Constraints:

1 <= piles.length <= 10^4

1 <= piles[i] <= 10^9

piles.length <= h <= 10^9

Edge Cases:

When h == piles.length → she must eat one pile per hour, so k = max(piles).

When h is very large (greater than piles total), answer reduces to 1.

Very large pile sizes → check overflow in calculations.

3. Intuition & Thought Process –

Naive idea: Try all possible k values from 1 to max(piles), simulate hours, and find the minimum valid one → too slow (10^9 range).

Key observation: If Koko can eat all bananas at speed k, then she can also do so at any larger speed. This forms a monotonic search space, perfect for binary search.

4. Approaches & Complexity Analysis –

Brute Force – Linear Check:

For each k from 1 to max(piles), compute required hours.

Time Complexity: O(maxPile * n).

Not feasible for large inputs.

Optimized – Binary Search on k:

Step 1: Search range = [1, maxPile].

Step 2: For each mid, compute hours needed using formula:
hours = sum(ceil(piles[i] / mid)).

Step 3: If hours ≤ h → try smaller k.

Step 4: Else → increase k.

Time Complexity: O(n log(maxPile)).

Space Complexity: O(1).

5. Example Walkthrough –

Input: piles = [3,6,7,11], h = 8

low=1, high=11.

mid=6 → hours = 1+1+2+2=6 ≤ 8 → reduce speed.

mid=3 → hours = 1+2+3+4=10 > 8 → too slow.

mid=4 → hours = 1+2+2+3=8 → valid.

Answer = 4.

6. Patterns / Algorithms –

Pattern: Binary Search on Answer.

General Category: Optimization via monotonic property.

7. Related Problems –

Minimum Eating Speed (variant).

Capacity To Ship Packages Within D Days.

Split Array Largest Sum.

8. Key Insights & Interview Considerations –

The monotonic property (if k works, all larger k also work) is essential.

Must carefully handle division with ceiling.

Avoid integer overflow with long long in intermediate sums.

9. Interview Follow-up –

Extend to cases with multiple eaters.

What if piles are infinite stream? → approximate with averages.

10. References –

LeetCode 875 – Koko Eating Bananas.

MIT 6.006 – Binary Search Applications.