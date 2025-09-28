Implement Trie (Prefix Tree)

🔗 Problem Link : LeetCode 208 – Implement Trie (Prefix Tree)

• Problem Classification : Category → Data Structure / Trie / String
• Pattern → Prefix Storage + Tree Traversal

1. Problem Statement

We are asked to implement a Trie, which is a specialized tree used for storing strings efficiently. The Trie allows us to perform operations like:

Insert a word

Search for a word

Check if any word starts with a given prefix

Operations to implement:

Trie() → Initializes the trie object.

insert(String word) → Inserts word into the trie.

search(String word) → Returns true if word exists in the trie.

startsWith(String prefix) → Returns true if any word starts with prefix.

Applications:

Autocomplete systems

Spell checkers

Search engines

2. Constraints & Edge Cases

Input size: 1 <= word.length, prefix.length <= 2000

Character set: only lowercase English letters

Number of calls: At most 3 * 10^4 calls for insert, search, and startsWith

Edge Cases:

Empty trie → search should return false

Prefix not present → startsWith returns false

Words of maximum length → memory efficiency matters

Multiple inserts of the same word → should not create duplicates

3. Intuition & Thought Process

Observation: Trie nodes represent characters, and paths from the root represent prefixes of words.

Node Structure: Each node has:

An array (or map) of children nodes corresponding to the 26 lowercase letters

A flag indicating if a word ends at this node

Insert Logic: For each character in the word, traverse the path and create nodes if missing. Mark the last node as end-of-word.

Search Logic: Traverse character by character; if any node is missing, word doesn't exist. At the last character, check end-of-word flag.

Prefix Check: Traverse like search; do not check end-of-word flag.

4. Approaches & Complexity Analysis

Brute Force:

Store all words in an array → search is O(n * m) for n words of length m → inefficient

Optimized Approach (Trie):

Use a tree structure → each node has 26 pointers (children)

Insert: O(m), where m = length of word

Search: O(m)

Prefix Check: O(p), where p = length of prefix

Space Complexity:

O(n * m) → worst case all words are different and non-overlapping

Can be optimized with compressed Trie / Radix Tree

5. Example Walkthrough

Example Input:

["Trie","insert","search","search","startsWith","insert","search"]
[[],["apple"],["apple"],["app"],["app"],["app"],["app"]]


Step-by-step:

Initialize Trie → empty root node

Insert "apple" → create nodes a → p → p → l → e, mark e as end-of-word

Search "apple" → traverse path, e is end-of-word → True

Search "app" → traverse a → p → p, not end-of-word → False

startsWith "app" → path exists → True

Insert "app" → traverse existing a → p → p, mark p as end-of-word

Search "app" → p is now end-of-word → True

Output: [null, null, true, false, true, null, true]

6. Patterns / Algorithms

Primary Pattern: Trie Data Structure

General Category: Tree Traversal + Prefix Handling

7. Related Problems

Add and Search Word – Data Structure Design (LeetCode 211)

Word Search II (LeetCode 212)

Autocomplete System (LeetCode 642)

8. Key Insights & Interview Considerations

Efficient memory usage by reusing nodes for common prefixes

Consider alphabet size → 26 for lowercase letters, or 128/256 for ASCII

Can optimize search by storing counts at nodes for quick prefix queries

Edge cases: inserting the same word multiple times, searching for non-existent words

9. Interview Follow-up

Extend to support wildcards / regular expressions in search

Implement compressed Trie to reduce memory usage

Design Trie to handle Unicode characters or variable alphabet

10. References

LeetCode 208 – Implement Trie (Prefix Tree)

Trie Data Structure – MIT 6.042J / Competitive Programming resources

Cracking the Coding Interview – Data Structures & Tree Patterns