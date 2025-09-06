
# Day 1 – Merge Strings Alternately

🔗  **Problem Link :** [LeetCode 1768 – Merge Strings Alternately]
    (https://leetcode.com/problems/merge-strings-alternately/)

•	**Problem Classification :** Category → String Manipulation· Pattern → Two Pointers /Alternate Traversal .

1. **Problem Statement -**

We are given two strings, `word1` and `word2`. Starting with the first character of `word1`, merge the two strings by alternately taking one character from each.   
If one string finishes earlier, append the remaining part of the longer string at the end. Return the merged string.

2. **Constraints & Edge Cases  -**

**Input size :** 1 <= word1.length, word2.length <= 100`                                                                                
**Characters :** only lowercase English letters

•	**Edge Cases :**

    •  One string much longer than the other
    •  Both strings equal length
    •  Strings of length 1

 3. **Intuition & Thought Process -**

*  **First thought :** This is essentially merging two lists character-by-character.
*  **Naive idea :** Concatenate directly with indices, but need to handle remainder carefully.
*  **Key observation :** Two pointers (`i`, `j`) allow linear traversal of both strings in sync.
*  The problem is small (`n, m <= 100`), so an O(n+m) approach is already optimal.

4. **Approaches & Complexity Analysis -**

•	 **Brute Force :**

*  Concatenate by manually alternating characters with index checks.
*  Append remainder of whichever string is left.
    •	**Time Complexity  :** O(n + m)
    •	**Space Complexity :** O(n + m) (for result string)

**Note :**  Brute force is already optimal here; there is no worse quadratic version.  

•	**Optimized Approach :**

*  Use two pointers `i` and `j` to iterate `word1` and `word2`.
*  Append alternately until one string ends.
*  Append remaining substring from whichever string has leftover characters.
    •	**Time Complexity:** O(n + m)
    •	**Space Complexity:** O(n + m)

5. **Example Walkthrough -**

*  **Input:** `word1 = "abc"`, `word2 = "pqr"`
    •	Step 1 → result = "a" + "p" → `"ap"`
    •	Step 2 → result = `"apbq"`
    •	Step 3 → result = `"apbqcr"`
* **Output:** `"apbqcr"` 

6. Patterns / Algorithms -

* **Primary Pattern :** Two Pointers
* **General Category :** String Traversal / Merge
* **Related Problems :** Merge Two Sorted Lists, Zigzag Conversion


7. **Key Insights & Interview Considerations -**

* Optimal solution is just a linear two-pointer merge.
* **Pitfall:** Forgetting to append the leftover substring when one string is longer.
* **Follow-up:** Extend this to merge *k* strings, or handle stream input instead of static strings.

8. **References - **

* **LeetCode 1768 –** Merge Strings Alternately .
* **MIT 6.006 –** Introduction to Algorithms (String Traversal Concepts) .
* **Cracking the Coding Interview –** String Manipulation Section .


                                             

