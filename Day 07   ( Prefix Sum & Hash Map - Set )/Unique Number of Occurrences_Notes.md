# Unique Number of Occurrences

🔗 Problem Link : LeetCode 1207 – Unique Number of Occurrences

• Problem Classification :

Category → Array / Hashing

Pattern → Frequency Counting + Uniqueness Check

• Problem Statement -

We are given an array arr.
We must check whether the number of occurrences of each value is unique.

Return true if all frequencies are distinct.

Return false otherwise.

• Constraints & Edge Cases -

1 <= arr.length <= 1000

-1000 <= arr[i] <= 1000

Critical Cases:

Single element array → always true.

All elements equal → frequency is unique, return true.

All elements distinct → frequencies = {1,1,1...}, not unique → return false.

Negative numbers mixed with positive.

• Intuition & Thought Process -

First Thought:
Count occurrences with a map.
Then, for each frequency, check if it repeats.
Naive → O(n²).

Optimized Idea:
Use a set to track frequencies:

If we insert all frequencies into a set, duplicates disappear.

Compare set size vs map size.

If they differ → not unique.

Analogy:
Imagine students in a class grouped by T-shirt color.

Frequency = how many students have the same color.

If two colors end up with the same number of students → uniqueness violated.

• Approaches & Complexity -

1. Brute Force:

Count frequencies.

Check pairwise duplicates.

Time: O(n²).

2. Optimized Approach:

Step 1: Count with hashmap.

Step 2: Insert counts into set.

Step 3: Compare sizes.

Time: O(n).

Space: O(n).

• Example Walkthrough -

Example 1:
arr = [1,2,2,1,1,3]

Counts: {1→3, 2→2, 3→1}

Frequencies = [3,2,1], unique.

Output = true.

Example 2:
arr = [1,2]

Counts: {1→1, 2→1}

Frequencies = [1,1], not unique.

Output = false.

Example 3:
arr = [-3,0,1,-3,1,1,1,-3,10,0]

Counts: {-3→3, 0→2, 1→4, 10→1}

Frequencies = [3,2,4,1], unique.

Output = true.

• Patterns / Algorithms -

Frequency Counting

HashSet uniqueness check

• Related Problems -

LeetCode 451 – Sort Characters by Frequency

LeetCode 242 – Valid Anagram

LeetCode 347 – Top K Frequent Elements

• Key Insights & Interview Considerations -

Clever trick: compare size of frequency map vs size of frequency set.

Edge case: all values distinct (fails).

Handles negatives naturally.

Pitfall: Confusing "unique numbers" with "unique frequencies".