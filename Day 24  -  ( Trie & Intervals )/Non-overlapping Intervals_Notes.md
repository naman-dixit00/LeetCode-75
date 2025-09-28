Non-overlapping Intervals

🔗 Problem Link : LeetCode 435 – Non-overlapping Intervals

• Problem Classification : Category → Greedy / Sorting
Pattern → Interval Scheduling + Overlap Removal

1. Problem Statement -

You are given an array of intervals intervals where intervals[i] = [starti, endi]. Your task is to return the minimum number of intervals that need to be removed to make the remaining intervals non-overlapping.

Important Note: Intervals that only touch at endpoints (like [1,2] and [2,3]) are considered non-overlapping.

2. Constraints & Edge Cases -

Input size: 1 <= intervals.length <= 10^5
Interval limits: -5*10^4 <= starti < endi <= 5*10^4

Edge Cases:

All intervals overlap completely.

Intervals with the same start time but different end times.

Intervals with no overlap at all.

Single interval only (output = 0).

Very large number of intervals (stress test).

3. Intuition & Thought Process -

First thought: Identify overlapping intervals and count how many to remove.

Observation: To minimize removals, always keep the interval that ends earliest because it leaves maximum room for subsequent intervals.

Greedy Insight: Sort intervals by end time. Then, iterate and count overlaps:

If an interval’s start is less than the last interval’s end, it overlaps → increment removal count.

Otherwise, update the last interval to the current interval.

Why this works:
The interval that ends earliest reduces the chance of overlapping with future intervals. This is a classical interval scheduling maximization problem, applied inversely to compute removals.

4. Approaches & Complexity Analysis -

Brute Force:

Check all pairs of intervals for overlap and try removing one at a time.

Time Complexity: O(n^2) → Not feasible for large n.

Space Complexity: O(1)

Optimized Greedy Approach:

Sort intervals by end time (interval[1]).

Initialize end = -∞ and removal_count = 0.

For each interval:

If interval.start >= end → update end = interval.end.

Else → increment removal_count (remove current interval).

Time Complexity: O(n log n) (due to sorting)
Space Complexity: O(1) (or O(n) if sorting is not in-place)

5. Example Walkthrough -

Example 1:
Input: intervals = [[1,2],[2,3],[3,4],[1,3]]
Sort by end time: [[1,2],[2,3],[1,3],[3,4]]
Step through:

Keep [1,2] → end = 2

[2,3] start >= 2 → keep → end = 3

[1,3] start < 3 → remove → removal_count = 1

[3,4] start >= 3 → keep → end = 4
Output: 1

Example 2:
Input: [[1,2],[1,2],[1,2]]
Remove 2 intervals to leave only one → Output: 2

6. Patterns / Algorithms -

Primary Pattern: Greedy interval scheduling

General Category: Sorting + Overlap Handling

7. Related Problems -

Merge Intervals (LeetCode 56)

Maximum Number of Non-overlapping Intervals (variant)

Meeting Rooms II (LeetCode 253)

8. Key Insights & Interview Considerations -

Always prefer intervals ending earliest.

Overlaps can be counted during a single pass after sorting.

Pitfall: Sorting by start time instead of end time can fail in some test cases.

9. Interview follow-up -

Can you handle intervals with very large ranges efficiently?

Can you extend this to multidimensional intervals (like rectangles)?

10. References -

LeetCode 435 – Non-overlapping Intervals

Greedy Algorithm Patterns (CLRS / Competitive Programming)