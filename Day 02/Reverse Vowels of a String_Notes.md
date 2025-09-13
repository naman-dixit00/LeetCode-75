# Reverse Vowels of a String
🔗 **Problem Link** : [ LeetCode 345 – Reverse Vowels of a String ]
( https://leetcode.com/problems/reverse-vowels-of-a-string/ )

**• Problem Classification :**
*  Category → String Manipulation / Two Pointers
*  Pattern → Two-Pointer Swap + Vowel Check

**• Problem Statement -**
*  We are given a string s consisting of printable ASCII characters.
*  We need to reverse only the vowels in the string while keeping all other characters in the same position.
*  Return the modified string.
*  Vowels are considered as: a, e, i, o, u (both uppercase and lowercase).

**• Constraints & Edge Cases -**
* **Input size:** 1 <= s.length <= 3 * 10^5
* **Characters:** Printable ASCII only

**• Edge Cases :**
* String has no vowels → output is the same string.
* String of length 1 (with/without vowel).
* All characters are vowels → whole string gets reversed.
* Mixed uppercase + lowercase vowels.
* Very large strings (performance check for 3 * 10^5).

**• Intuition & Thought Process -**
* **First thought :** Extract all vowels, reverse them, and put them back. But inefficient.
* **Naive approach :** Build a new string while handling vowels separately → extra space.

**• Key observation :**
* Vowels need to be swapped symmetrically → two-pointer technique is natural.
* Place one pointer at the start (l) and one at the end (r).
* Move inward, skipping non-vowels.
* When both pointers are at vowels → swap them.
* This avoids extra storage and ensures in-place vowel reversal.

**• Approaches & Complexity Analysis -**

**• Brute Force :**
* Collect all vowels from string into a list.
* Replace vowels in the string from the reversed list.
* **Time Complexity:** O(n)
* **Space Complexity:** O(n) (extra storage of vowels).

**• Optimized Two-Pointer Approach :**
Step 1: Define a set of vowels for fast lookup.
Step 2: Use two pointers → left at start, right at end.
Step 3: If both pointers point to vowels → swap them, move inward.
Step 4: If not vowel → move pointer accordingly.
Step 5: Continue until l >= r.
* **Time Complexity:** O(n)
* **Space Complexity:** O(1) (in-place swaps).

**• Example Walkthrough -**
**Example 1:**
* Input: s = "IceCreAm"
* Vowels = [I, e, e, A]
* Reverse vowels → [A, e, e, I]
* Final string → "AceCreIm"
* Output: "AceCreIm"

**Example 2:**
* Input: s = "leetcode"
* Vowels = [e, e, o, e]
* Reverse vowels → [e, o, e, e]
* Final string → "leotcede"
* Output: "leotcede"

**• Patterns / Algorithms -**
* **Primary Pattern:** Two-Pointer Swapping
* **General Category:** String Traversal

**• Related Problems :**
* Valid Palindrome (LeetCode 125)
* Reverse String (LeetCode 344)
* Reverse Only Letters (LeetCode 917)

**• Key Insights & Interview Considerations -**
* Efficiency: Two-pointer gives O(n) with no extra storage → optimal.
* Pitfall: Forgetting uppercase vowels (e.g., 'A', 'E').
* Pitfall: Infinite loop if pointers not updated correctly.

**• Follow-up discussions :**
* What if the set of vowels changes dynamically?
* Can we handle multilingual strings with Unicode vowels?
* Optimize for streaming input (cannot hold string fully in memory).

**• References -**
* LeetCode 345 – Reverse Vowels of a String
* MIT 6.006 – Two-Pointer Algorithms
* Cracking the Coding Interview – String Problems