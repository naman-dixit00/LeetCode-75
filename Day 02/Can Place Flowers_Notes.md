
# Day 4 – Can Place Flowers

🔗 Problem Link : [LeetCode 605 – Can Place Flowers](https://leetcode.com/problems/can-place-flowers/)

**• Problem Classification :**
Category → Array / Greedy
Pattern → Linear Scan + Placement Rule Check

**Problem Statement -**
We are given a long flowerbed represented by an integer array `flowerbed`, where:

* `0` = empty plot
* `1` = already planted flower

A new flower can **only** be planted in an empty plot (`0`) if its adjacent plots (left and right) are also empty (or out of bounds).
We must return `true` if we can plant `n` new flowers in the flowerbed without violating the no-adjacent-flowers rule, otherwise `false`.

**Constraints & Edge Cases -**
* Input size: `1 <= flowerbed.length <= 2 * 10^4`
* Values: `flowerbed[i]` ∈ {0, 1}
* It is guaranteed that there are no two adjacent flowers in the initial flowerbed.
* `0 <= n <= flowerbed.length`

**• Edge Cases :**
* `n = 0` → always return true.
* Very small flowerbeds (length 1 or 2).
* Flowerbed full of `0`s.
* Flowerbed already full of `1`s.
* Edge plots (first or last index) can allow planting if neighbor is empty.


**Intuition & Thought Process -**
* **First thought :** Check every empty plot to see if we can plant a flower without violating adjacency.
* **Naive idea :** Try placing flowers in every possible configuration → exponential and inefficient.

* **Key observation :**
  1. We don’t need to test all configurations. A greedy strategy works: if a spot is plantable, plant immediately and move ahead.
  2. Because planting earlier does not reduce future possibilities, greedy ensures correctness.
  3. Only need to check `(flowerbed[i-1], flowerbed[i], flowerbed[i+1])`.


**Approaches & Complexity Analysis -**

**• Brute Force :**
* Try all combinations of placing/not placing flowers in empty spots.
* Validate each configuration by adjacency rule.
* **Time Complexity :** Exponential (impractical for n ≤ 20000).
* **Space Complexity :** O(1).


**• Optimized Greedy Approach :**
* Step 1: Iterate through each plot.
* Step 2: If current plot is empty (`0`) and both neighbors (or boundaries) are empty/valid, plant a flower (`flowerbed[i] = 1`) and decrement `n`.
* Step 3: If at any point `n == 0`, return true.
* Step 4: After loop, return whether `n <= 0`.
* **Time Complexity :** O(m), where m = flowerbed length.
* **Space Complexity :** O(1).


**Example Walkthrough -**
Example 1:
Input: `flowerbed = [1,0,0,0,1], n = 1`

* Check index 1 → 0 but right=0 and left=1 → cannot plant
* Check index 2 → 0, neighbors are 0 and 0 → plant here → `flowerbed = [1,0,1,0,1]`, n=0 → true
  Output: `true`

Example 2:
Input: `flowerbed = [1,0,0,0,1], n = 2`

* Only one flower can be placed at index 2
* Still need 1 more → not possible
  Output: `false`


**Patterns / Algorithms -**
* **Primary Pattern :** Greedy Placement
* **General Category :** Array Traversal
* **Related Problems :**

  * Kids With the Greatest Number of Candies (LeetCode 1431)
  * Non-decreasing Array (LeetCode 665)
  * Maximum Product of Two Elements in an Array (LeetCode 1464)


**Key Insights & Interview Considerations -**
* Greedy works because planting at the first available spot never blocks future valid spots.
* Pitfall: Forgetting to handle edge indices (first and last positions).
* Pitfall: Modifying flowerbed in-place is fine, but sometimes interviewers ask for immutability → then simulate instead.
* Follow-up discussions:

  * What if `n` is extremely large (close to array size)?
  * Can we solve this without modifying the input array?
  * How does solution change if flowers can be placed with k-distance (generalized version)?


**References -**
* LeetCode 605 – Can Place Flowers
* MIT 6.006 – Introduction to Algorithms (Greedy Techniques)
* Cracking the Coding Interview – Array / Greedy Problem Patterns

