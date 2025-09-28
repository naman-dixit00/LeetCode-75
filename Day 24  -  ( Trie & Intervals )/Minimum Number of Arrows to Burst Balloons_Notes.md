Minimum Number of Arrows to Burst Balloons

🔗 Problem Link : LeetCode 452 – Minimum Number of Arrows to Burst Balloons

• Problem Classification : Category → Greedy / Sorting
Pattern → Interval Coverage / Overlap Minimization

1. Problem Statement -

Given a set of balloons represented as horizontal intervals points[i] = [xstart, xend], determine the minimum number of vertical arrows needed to burst all balloons.

An arrow shot at x bursts all balloons where xstart <= x <= xend.

Arrows travel infinitely in the positive y-direction.

2. Constraints & Edge Cases -

Input size: 1 <= points.length <= 10^5
Interval limits: -2^31 <= xstart < xend <= 2^31 - 1

Edge Cases:

All balloons overlapping → 1 arrow.

No overlapping balloons → one arrow per balloon.

Balloons sharing boundaries.

Large numbers to test integer overflow.

3. Intuition & Thought Process -

First thought: Consider balloon intervals like meeting intervals.

Observation: To minimize arrows, always shoot at the earliest end of a balloon, because this arrow can burst all overlapping balloons.

Greedy Insight: Sort by end position. Then iterate:

Shoot an arrow at end of first balloon.

Skip all balloons whose start <= end.

Repeat → count arrows.

Why this works:
Shooting at the earliest end ensures maximum overlap coverage, which is classic greedy coverage logic.

4. Approaches & Complexity Analysis -

Brute Force:

Try all x-values between min and max → check coverage → O(n^2)

Not feasible for large n

Optimized Greedy Approach:

Sort balloons by xend.

Initialize arrow_count = 1 and end = points[0][1].

Iterate:

If balloon.start > end → shoot new arrow → update end.

Else → continue (current arrow covers).

Time Complexity: O(n log n) (sorting)
Space Complexity: O(1)

5. Example Walkthrough -

Example 1: [[10,16],[2,8],[1,6],[7,12]]
Sort by end: [[1,6],[2,8],[7,12],[10,16]]
Shoot at 6 → covers [1,6] and [2,8]
Next uncovered → shoot at 12 → covers [7,12] and [10,16]
Output: 2

Example 2: [[1,2],[3,4],[5,6],[7,8]]
No overlaps → shoot 1 arrow per balloon → Output: 4

6. Patterns / Algorithms -

Primary Pattern: Greedy coverage of intervals

General Category: Sorting + Overlap handling

7. Related Problems -

Non-overlapping Intervals (LeetCode 435)

Meeting Rooms II (LeetCode 253)

Interval Scheduling Maximization

8. Key Insights & Interview Considerations -

Shooting at the earliest end covers all overlapping intervals.

Sorting is mandatory for greedy correctness.

Pitfall: Shooting at start of interval may fail to minimize arrows.

9. Interview follow-up -

Can we extend this to 2D balloons (rectangles) in a plane?

Streaming intervals: can we maintain coverage dynamically?

10. References -

LeetCode 452 – Minimum Number of Arrows to Burst Balloons

Greedy Interval Patterns (CLRS / Competitive Programming)