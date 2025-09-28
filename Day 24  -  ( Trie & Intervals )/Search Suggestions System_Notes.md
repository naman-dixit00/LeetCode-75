Search Suggestions System

🔗 Problem Link: LeetCode – Search Suggestions System

• Problem Classification: Category → Trie / String Manipulation / Sorting. Pattern → Prefix Matching + Lexicographical Order

Problem Statement -
We are given an array of strings products and a string searchWord. We need to design a system that suggests at most three product names from products after each character of searchWord is typed.

The suggested products must share a common prefix with the current typed string.

If more than three products share the prefix, we return the three lexicographically smallest products.

The output is a list of lists, where each inner list represents suggestions after each character of searchWord.

Constraints & Edge Cases -
Input size:

1 <= products.length <= 1000

1 <= products[i].length <= 3000

1 <= sum(products[i].length) <= 2 * 10^4

1 <= searchWord.length <= 1000

Characters: lowercase English letters only.

Edge Cases:

Only one product in the list.

No products matching the prefix.

Prefix matches exactly three products.

Prefix matches more than three products – need to select the smallest lexicographically.

Intuition & Thought Process -

First thought: We need a data structure to efficiently check prefix matches; a Trie comes naturally.

Naive idea: For each prefix of searchWord, scan all products and filter matches → O(N * L) per prefix.

Optimized observation: Sort the products lexicographically first. Then, for each prefix of searchWord, we can scan the sorted list and pick first 3 matches. Sorting guarantees lexicographical order automatically.

Trie + DFS or binary search on sorted array can both be used for efficiency.

Approaches & Complexity Analysis -

Brute Force: For each prefix, check all products.

Time Complexity: O(P * N * L), where P = length of searchWord, N = #products, L = avg product length.

Space Complexity: O(1) extra space.

Optimized Approach (Sorting + Prefix Scan):

Sort products lexicographically.

For each prefix of searchWord, scan sorted products and add first 3 matches.

Time Complexity: O(N log N + P * N)

Space Complexity: O(N) for sorted products storage.

Example Walkthrough -

Example 1:

Input: products = ["mobile","mouse","moneypot","monitor","mousepad"], searchWord = "mouse"

Sorted products = ["mobile","moneypot","monitor","mouse","mousepad"]

After typing 'm' and 'mo' → ["mobile","moneypot","monitor"]

After typing 'mou', 'mous', 'mouse' → ["mouse","mousepad"]

Output: [["mobile","moneypot","monitor"],["mobile","moneypot","monitor"],["mouse","mousepad"],["mouse","mousepad"],["mouse","mousepad"]]

Patterns / Algorithms -

Primary Pattern: Trie / Prefix Matching

General Category: String Manipulation + Sorting + Prefix Scan

Related Problems -

Implement Trie (LeetCode 208)

Autocomplete System (LeetCode 642)

Longest Common Prefix (LeetCode 14)

Key Insights & Interview Considerations -

Critical trick: Sorting the array upfront simplifies lexicographical selection.

Trie usage is optimal when multiple prefix queries are expected.

Be careful with prefixes longer than any product string.

Interview follow-up -

Extend logic to support dynamic insertion/deletion of products.

Handle streaming input of searchWord characters efficiently.

Discuss time-space trade-offs between Trie and sorted array approaches.

References -

LeetCode Problem Page

Trie Data Structure (CLRS / GeeksforGeeks)

String Manipulation Patterns in Competitive Programming