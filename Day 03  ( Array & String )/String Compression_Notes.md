# String Compression

🔗 Problem Link : LeetCode 443 – String Compression
(https://leetcode.com/problems/string-compression/ )

• Problem Classification :

Category → String Manipulation / Two Pointers

Pattern → Run-Length Encoding (RLE)

• Problem Statement -

We are given an array of characters chars.

We must compress it using the following rules:

For a group of consecutive repeating characters:

If length = 1 → append only the character.

If length > 1 → append the character followed by its length.

The compressed result must be written back into the input array (in-place).

The function should return the new length of the compressed array.

Extra space is not allowed → only O(1) additional space can be used.

• Constraints & Edge Cases -

Input size: 1 <= chars.length <= 2000

Characters: lowercase/uppercase letters, digits, or symbols.

• Edge Cases :

Single character input → e.g., ["a"] → output length = 1

All unique characters → compression gives no benefit

All same characters → e.g., 2000 × "a" → compress to "a2000"

Multi-digit counts (≥ 10) must be split into separate characters ("12" → '1','2').

• Intuition & Thought Process -

First thought : Apply run-length encoding directly on the array.

Naive idea : Build a separate string with compressed values and then copy back (not space-efficient).

• Key observations:

Compression can be done in-place using two pointers:

read pointer → scans through chars

write pointer → writes compressed result back into chars.

When group ends, write character + group length digits.

• Approaches & Complexity Analysis -

• Brute Force Approach :

Use an auxiliary string to collect compressed output.

Copy it back into chars.

Time: O(n)

Space: O(n) → violates constant space requirement.

• Optimized Approach (In-place Two Pointers):
Step 1: Initialize read = 0, write = 0.
Step 2: For each group of same characters:

Count its length.

Write the character at chars[write++].

If length > 1, convert length → string and write each digit.
Step 3: Return write as the new compressed length.

Time Complexity: O(n)

Space Complexity: O(1) (only counters and indices used).

• Example Walkthrough -

Example 1:
Input: ["a","a","b","b","c","c","c"]
Process: "aa" → "a2", "bb" → "b2", "ccc" → "c3"
Result array = ["a","2","b","2","c","3"]
Output: 6

Example 2:
Input: ["a"]
Process: Only single character, stays the same.
Result array = ["a"]
Output: 1

Example 3:
Input: ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
Process: "a" → "a", "bbbbbbbbbbbb" → "b12"
Result array = ["a","b","1","2"]
Output: 4

• Patterns / Algorithms -

Primary Pattern : Run-Length Encoding (RLE)

General Category : String Manipulation + Two Pointers

• Related Problems :

Decode String (LeetCode 394)

Count and Say (LeetCode 38)

Run-Length Encoding (classic compression algorithm)

• Key Insights & Interview Considerations -

In-place write ensures O(1) extra space.

Pitfall: Forgetting to split multi-digit counts into separate characters.

Pitfall: Overwriting chars before processing the group fully.

Follow-up: Compare efficiency vs external storage methods.

• Follow-up discussion :

Can you implement the reverse process (decompression)?

How would this change if allowed more memory?

What if compression ratio is poor (output bigger than input)?

• References -

LeetCode 443 – String Compression

Run-Length Encoding – Data Compression Basics (MIT 6.006)

Cracking the Coding Interview – String & Array Manipulation