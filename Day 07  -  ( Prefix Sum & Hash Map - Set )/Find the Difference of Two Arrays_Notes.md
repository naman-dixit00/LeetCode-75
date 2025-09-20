# Find the Difference of Two Arrays

🔗 Problem Link : LeetCode 2215 – Find the Difference of Two Arrays

• Problem Classification :

Category → Array / Set / Hashing

Pattern → Symmetric Difference, Unique Elements Extraction

• Problem Statement -

We are given two integer arrays nums1 and nums2.
We need to return a list of size 2:

answer[0] = all distinct integers in nums1 not present in nums2.

answer[1] = all distinct integers in nums2 not present in nums1.

Duplicates must be removed, order does not matter.

• Constraints & Edge Cases -

1 <= nums1.length, nums2.length <= 1000

-1000 <= nums1[i], nums2[i] <= 1000

Critical Cases:

Arrays are completely disjoint → everything goes into the answer.

Arrays are identical → output is [[], []].

One array is empty → answer is [nums1, []] or [[], nums2].

Arrays with many duplicates → must deduplicate before output.

Presence of negative integers and zero → check correctness with set operations.

• Intuition & Thought Process -

First Thought (Naive):
Compare each element of nums1 with every element of nums2. If not found, keep it. Repeat for nums2.

This works but takes O(n*m) time → inefficient when both arrays are large.

Better Thought:
Membership testing (is x in nums2?) is repeated many times.
This screams for a hash set, since:

Lookup in a set is O(1) average.

Duplicates are automatically removed.

So the idea becomes:

Convert nums1 and nums2 into sets.

Use set difference operations:

set1 - set2 → items only in nums1.

set2 - set1 → items only in nums2.

Analogy:
Imagine nums1 and nums2 as two classrooms of students.

Question: “Which students are only in class A, and which are only in class B?”
We only care about names once, not repeated multiple times.

• Approaches & Complexity -

1. Brute Force Approach:

For each element in nums1, check if it exists in nums2.

Repeat vice versa.

Time: O(n*m).

Space: O(1).

2. Optimized Using Sets (Practical):

Build two sets.

Compute differences.

Time: O(n + m).

Space: O(n + m).

• Example Walkthrough -

Example 1:
nums1 = [1,2,3], nums2 = [2,4,6]

set1 = {1,2,3}, set2 = {2,4,6}

set1 - set2 = {1,3}

set2 - set1 = {4,6}

Output = [[1,3],[4,6]]

Example 2:
nums1 = [1,2,3,3], nums2 = [1,1,2,2]

set1 = {1,2,3}, set2 = {1,2}

set1 - set2 = {3}

set2 - set1 = {}

Output = [[3],[]]

Example 3:
nums1 = [], nums2 = [5,6]

Output = [[],[5,6]]

• Patterns / Algorithms -

Set operations (difference)

Symmetric Difference Problems

Deduplication via Hashing

• Related Problems -

LeetCode 349 – Intersection of Two Arrays

LeetCode 350 – Intersection of Two Arrays II

LeetCode 705 – Design HashSet

• Key Insights & Interview Considerations -

This problem tests understanding of set theory in coding.

Always clarify if duplicates matter → here they don’t.

Consider negative numbers and empty arrays.

Pitfall: Using lists instead of sets can give wrong output due to duplicates.