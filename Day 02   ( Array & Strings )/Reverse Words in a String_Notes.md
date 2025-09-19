# Reverse Words in a String
🔗 **Problem Link** : LeetCode 151 – Reverse Words in a String
(https://leetcode.com/problems/reverse-words-in-a-string/)

**• Problem Classification :**
* Category → String Manipulation
* Pattern → Trim + Split + Reverse + Join

**•Problem Statement-**
* We are given a string s consisting of words and spaces.
* A word is defined as a sequence of non-space characters.
* Words are separated by one or more spaces.
* We must return a new string where:
* Words are in reverse order.
* Only single spaces separate words.
* No leading or trailing spaces.

**•Constraints & Edge Cases -**
* Input size: 1 <= s.length <= 10^4
* Characters: English letters (upper/lowercase), digits, and spaces ' '
* There is at least one word in the string.

**• Edge Cases:**
* String with leading spaces → " hello world" → "world hello"
* String with trailing spaces → "hello world " → "world hello"
* Multiple spaces between words → "a b c" → "c b a"
* Single word string → "hello" → "hello"
* Very long input (10^4 chars)

**•Intuition & Thought Process-**
* First thought : Split the string by spaces, reverse the words, and join.
* Naive idea : Directly reverse character array and adjust spaces manually (tedious).

**•Key observations:**
* Multiple spaces should collapse into one.
* Leading/trailing spaces must be trimmed.

**The simplest way:**
* Trim spaces.
* Split into words.
* Reverse the list of words.
* Join with a single space.

**Approaches & Complexity Analysis-**

**• Brute Force Approach :**
* Reverse the entire string.
* Then reverse each word individually.
* Handle spaces carefully.
* Time: O(n)
* Space: O(n) (for output string)

**• Optimized Approach (Practical Solution):**
Step 1: Remove leading, trailing, and multiple spaces.
Step 2: Split the string into words.
Step 3: Reverse the word order.
Step 4: Join them with a single space.

* Time: O(n) (single pass split + reverse + join)
* Space: O(n) (storing words)

**•Example Walkthrough -**

* **Example 1:**
* Input: s = "the sky is blue"
* Process:

* Split → ["the", "sky", "is", "blue"]
* Reverse → ["blue", "is", "sky", "the"]
* Join → "blue is sky the"
* Output: "blue is sky the"

* **Example 2:**
* Input: s = " hello world "
* Process:
* Trim → "hello world"
* Split → ["hello", "world"]
* Reverse → ["world", "hello"]
* Join → "world hello"
* Output: "world hello"

* **Example 3:**
* Input: s = "a good example"
* Process:
* Trim + split → ["a", "good", "example"]
* Reverse → ["example", "good", "a"]
* Join → "example good a"
* Output: "example good a"

**•Patterns / Algorithms -**
* Primary Pattern : String Reverse + Word Splitting
* General Category : String Manipulation

**•Related Problems :**
* Reverse Words in a String II (LeetCode 186)
* Reverse String (LeetCode 344)
* Trim a String / Remove Extra Spaces (common interview helper function)

**•Key Insights & Interview Considerations -**
* Be careful with extra spaces.
* Avoid character-by-character manipulation if language provides split/join (use built-in functions).

**•Follow-up discussion :**
* Solve in-place with O(1) space if mutable strings allowed.
* Generalize to handle tab/other whitespace delimiters.
* Trade-off between simplicity (split/join) vs low-level in-place optimization.

**•References -**
* LeetCode 151 – Reverse Words in a String
* CLRS – String Manipulation Techniques
* Cracking the Coding Interview – String Questions