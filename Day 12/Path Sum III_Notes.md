# Path Sum III

🔗 Problem Link : LeetCode 437 – Path Sum III

• Problem Classification :
Category → Binary Trees, Prefix Sum
Pattern → DFS + Hashmap (Prefix Sums)

1. Problem Statement

Given the root of a binary tree and an integer targetSum, return the number of paths where the sum of values equals targetSum.

Paths must go downward (parent to child).

Paths do not need to start at the root or end at a leaf.

2. Constraints & Edge Cases

Input size: 0 ≤ n ≤ 1000

Node values: -10⁹ ≤ val ≤ 10⁹

Target range: -1000 ≤ targetSum ≤ 1000

Edge Cases:

Empty tree (0 paths)

Negative values in nodes

Multiple overlapping paths giving same sum

Very deep skewed tree

3. Intuition & Thought Process

First thought: Try every path starting from every node (brute force).

Naive approach: O(n²) worst case.

Optimized idea: Use prefix sums with a hashmap.

Store count of prefix sums seen.

For each node, check how many prefix sums lead to currentSum - targetSum.

4. Approaches & Complexity Analysis

Approach (DFS + Prefix Hashmap):

Maintain running sum during DFS.

At each node:

Check (currSum - targetSum) in hashmap.

Update hashmap with current sum.

Recurse left & right.

Time Complexity: O(n)
Space Complexity: O(n)

5. Example Walkthrough

Input: root = [10,5,-3,3,2,null,11,3,-2,null,1], target=8

Valid paths: [5,3], [5,2,1], [10,-3,1]

Output = 3

6. Patterns / Algorithms

Prefix Sum

DFS Traversal

Hashmap Frequency Count

7. Related Problems

Subarray Sum Equals K (LeetCode 560)

Path Sum II (LeetCode 113)

8. Key Insights & Interview Considerations

Similar to subarray sum problem in arrays.

Pitfall: Not backtracking prefix sum counts after recursion.

9. Interview Follow-up

Modify to return all valid paths instead of count.

Extend to weighted graphs.

10. References

LeetCode 437 – Path Sum III

MIT 6.046J – Advanced Data Structures (Prefix Sums)