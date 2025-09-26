Find Peak Element

🔗 Problem Link : LeetCode 162 – Find Peak Element

• Problem Classification : Category → Binary Search.
Pattern → Local maximum search.

1. Problem Statement –

We are given an integer array nums. A peak element is one that is strictly greater than its neighbors.

Assume nums[-1] = -∞ and nums[n] = -∞.

We must return the index of any peak element.

Must be solved in O(log n).

2. Constraints & Edge Cases –

1 <= nums.length <= 1000.

-2^31 <= nums[i] <= 2^31 - 1.

nums[i] != nums[i+1] (no equal adjacent values).

• Edge Cases –

Array of size 1 → element itself is peak.

Peak at start (index 0).

Peak at end (index n-1).

Multiple peaks → any valid index acceptable.

3. Intuition & Thought Process –

Naive idea: Scan through all elements and check neighbors → O(n).

Key insight: If an element is smaller than its right neighbor, a peak must exist on the right side.

If it’s larger, then a peak must exist on the left side (including itself).

This directly leads to a binary search style approach.

4. Approaches & Complexity Analysis –

Brute Force – Linear Scan

Check each element with neighbors.

Time Complexity: O(n).

Space Complexity: O(1).

Optimized – Binary Search

Step 1: Initialize low=0, high=n-1.

Step 2: Compute mid=(low+high)/2.

Step 3: Compare nums[mid] with nums[mid+1].

If nums[mid] > nums[mid+1] → peak on left side.

Else → peak on right side.

Step 4: Continue until convergence.

Time Complexity: O(log n).

Space Complexity: O(1).

5. Example Walkthrough –

Example 1:
Input: [1,2,3,1]

mid=1 → nums[1]=2, nums[2]=3 → right larger → move right.

mid=2 → nums[2]=3, nums[3]=1 → left larger → peak=2.

Output=2.

6. Patterns / Algorithms –

Pattern: Binary Search adaptation.

General Category: Local extrema search.

7. Related Problems –

Peak Index in Mountain Array (LeetCode 852).

Find Minimum in Rotated Sorted Array.

8. Key Insights & Interview Considerations –

The "peak exists" guarantee comes from the array ends being -∞.

Binary search logic ensures O(log n).

Interviewers may test whether you know why scanning is not optimal.

9. Interview Follow-up –

Extend to 2D peak finding (matrix version, used in MIT course).

Handle arrays with equal adjacent values (harder variant).

10. References –

LeetCode 162 – Find Peak Element.

MIT 6.006 – Peak Finding Lecture.