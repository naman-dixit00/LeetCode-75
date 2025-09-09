# Day 3 – Kids With the Greatest Number of Candies

🔗 Problem Link : [LeetCode 1431 – Kids With the Greatest Number of Candies](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/)

**• Problem Classification :**
Category → Array / Greedy Check
Pattern → Maximum Element Comparison


**Problem Statement -**
We are given an integer array `candies`, where each `candies[i]` represents the number of candies the i-th kid has, and an integer `extraCandies`, representing the number of extra candies available.

We must return a boolean array `result` of length `n`, where `result[i] = true` if after giving **all extraCandies** to the i-th kid, they can have the greatest number of candies among all kids, otherwise `false`.

Note: Multiple kids can simultaneously have the greatest number of candies.


**Constraints & Edge Cases -**

* Input size: `2 <= n <= 100`
* Candies per kid: `1 <= candies[i] <= 100`
* Extra candies: `1 <= extraCandies <= 50`

**• Edge Cases :**

* Only one kid already has the maximum candies (others always false).
* Multiple kids already at the maximum → many `true` results.
* All kids equal → all `true` results.
* Smallest n = 2 (minimum array length).
* Large n = 100 with random distribution.


**Intuition & Thought Process -**

* **First thought :** Every kid’s final candy count depends on comparing `(candies[i] + extraCandies)` with the global maximum.
* **Naive idea :** For each kid, give them `extraCandies` and check against others one by one (O(n²)).
* **Key observation :**

  1. The actual comparison only requires knowing the **current maximum** in the array.
  2. For each kid, check `(candies[i] + extraCandies >= max_candies)`.
  3. This reduces to **O(n)** solution.


**Approaches & Complexity Analysis -**

**• Brute Force :**

* For each kid, simulate giving `extraCandies`.
* Compare result with every other kid’s candies to check if it is maximum.
* **Time Complexity :** O(n²)
* **Space Complexity :** O(n) for result array.


**• Optimized Approach :**

* Step 1: Find the maximum candy count among all kids (`max_candies`).
* Step 2: For each kid, check if `candies[i] + extraCandies >= max_candies`.
* Step 3: Build result array accordingly.
* **Time Complexity :** O(n)
* **Space Complexity :** O(n) for result array.


**Example Walkthrough -**

Example 1:
Input: `candies = [2,3,5,1,3], extraCandies = 3`

* `max_candies = 5`
* Kid 1 → 2+3=5 ≥ 5 → true
* Kid 2 → 3+3=6 ≥ 5 → true
* Kid 3 → 5+3=8 ≥ 5 → true
* Kid 4 → 1+3=4 < 5 → false
* Kid 5 → 3+3=6 ≥ 5 → true
  Output: `[true,true,true,false,true]`

Example 2:
Input: `candies = [4,2,1,1,2], extraCandies = 1`

* `max_candies = 4`
* Only Kid 1 can ever reach max → `[true,false,false,false,false]`

Example 3:
Input: `candies = [12,1,12], extraCandies = 10`

* `max_candies = 12`
* Kid 1 → 12+10=22 ≥ 12 → true
* Kid 2 → 1+10=11 < 12 → false
* Kid 3 → 12+10=22 ≥ 12 → true
  Output: `[true,false,true]`


**Patterns / Algorithms -**

* **Primary Pattern :** Maximum Comparison
* **General Category :** Array Traversal / Greedy
* **Related Problems :**

  * Richest Customer Wealth (LeetCode 1672)
  * Maximum Product of Two Elements in an Array (LeetCode 1464)
  * Can Place Flowers (LeetCode 605)


**Key Insights & Interview Considerations -**

* Pitfall: Forgetting to precompute global maximum → leads to O(n²).
* Always return `vector<bool>` of the same length as `candies`.
* Follow-up discussions:

  * Optimize for **stream input** (if candies are not all given initially).
  * Apply similar logic to problems where relative ranking matters.
  * Extend to more complex conditions (e.g., distributing candies optimally, not all to one kid).


**References -**

* LeetCode 1431 – Kids With the Greatest Number of Candies
* MIT 6.006 – Introduction to Algorithms (Greedy Basics)
* Cracking the Coding Interview – Array Traversal & Greedy Strategies

