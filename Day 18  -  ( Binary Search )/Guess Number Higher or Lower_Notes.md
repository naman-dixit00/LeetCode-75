Guess Number Higher or Lower

🔗 Problem Link : LeetCode 374 – Guess Number Higher or Lower

• Problem Classification : Category → Binary Search.
Pattern → Divide & Conquer via Midpoint Checking.

1. Problem Statement –

We are playing a guessing game. You must determine a hidden number that lies between 1 and n.
The only tool available is an API guess(num) which compares your guess against the target:

Returns -1 if your guess is higher than the chosen number.

Returns 1 if your guess is lower than the chosen number.

Returns 0 if your guess is correct.

The task is to efficiently determine the correct number with the minimum number of API calls.

2. Constraints & Edge Cases –

Input range: 1 <= n <= 2^31 - 1

API guarantee: One hidden pick always exists between 1 and n.

• Edge Cases –

n = 1 (only one possible number).

Target is at the lowest bound (1).

Target is at the highest bound (n).

Very large n close to 2^31 - 1, must avoid overflow when calculating mid.

3. Intuition & Thought Process –

Naive idea: Start guessing from 1 upward until we find the number. → Very inefficient for large n.

Key insight: This is a search problem where feedback (higher/lower) naturally points us to the correct half.

Better approach: Apply binary search → At each step, guess the midpoint, eliminate half the space.

4. Approaches & Complexity Analysis –

Brute Force Approach –

Try numbers from 1 up to n sequentially until guess is correct.

Time Complexity: O(n) (too slow for n ~ 2^31).

Space Complexity: O(1).

Optimized Approach – Binary Search

Step 1: Initialize low = 1, high = n.

Step 2: Pick mid = low + (high - low)/2 (avoid overflow).

Step 3: Call API on mid. Adjust bounds accordingly.

Step 4: Continue until correct number found.

Time Complexity: O(log n).

Space Complexity: O(1).

5. Example Walkthrough –

Example 1:

Input: n = 10, pick = 6.

Iteration 1 → mid = 5 → API returns 1 → pick is larger → low = 6.

Iteration 2 → mid = 8 → API returns -1 → pick is smaller → high = 7.

Iteration 3 → mid = 6 → API returns 0 → Found number.

Output = 6.

6. Patterns / Algorithms –

Pattern: Binary Search (divide and conquer).

General Category: Search Optimization / Decision Problems.

7. Related Problems –

First Bad Version (LeetCode 278).

Search in Rotated Sorted Array (LeetCode 33).

Find Peak Element (LeetCode 162).

8. Key Insights & Interview Considerations –

Avoid integer overflow when computing midpoint.

Binary search ensures minimal API calls.

Show interviewer reasoning behind halving search space.

9. Interview Follow-up –

Extend to variations like finding multiple hidden numbers.

Consider a situation where guess API is noisy or randomized → how to adapt.

10. References –

LeetCode 374 – Guess Number Higher or Lower.

MIT 6.006 – Introduction to Algorithms (Binary Search Lecture).