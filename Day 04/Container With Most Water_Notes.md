Container With Most Water

🔗 Problem Link : LeetCode 11 – Container With Most Water
(https://leetcode.com/problems/container-with-most-water/
)

• Problem Classification :

Category → Array / Two-Pointer

Pattern → Max Area by Shrinking Window

• Problem Statement -

We are given an array height of size n.

Each index represents a vertical line from (i,0) to (i,height[i]).

Need to choose two lines such that together with x-axis, they form a container holding maximum water.

• Constraints & Edge Cases -

2 <= height.length <= 10^5

0 <= height[i] <= 10^4

• Edge Cases :

Only 2 elements → area = min(h1,h2).

All heights same → max area = height * (n-1).

Very tall line + very short line → choose wisely.

• Intuition & Thought Process -

Brute force : Check every pair (i,j), compute area. Too slow.

Key observation : The area is limited by the shorter line.

Use two pointers at both ends, compute area, and move the pointer at the shorter line inward.

Approaches & Complexity Analysis -

• Brute Force Approach :

Check all pairs → O(n^2).

Space: O(1).

• Optimized Two-Pointer Approach :
Step 1: Start with left=0, right=n-1.
Step 2: Compute area = min(height[left], height[right]) * (right-left).
Step 3: Move the smaller height pointer inward.
Step 4: Keep track of max area.

Time: O(n)

Space: O(1)

• Example Walkthrough -

Input: [1,8,6,2,5,4,8,3,7]

Max area = 49 (between height[1]=8 and height[8]=7).

• Patterns / Algorithms -

Primary Pattern : Two-Pointer Shrink

General Category : Greedy Max Optimization

• Related Problems :

Trapping Rain Water (LeetCode 42)

Largest Rectangle in Histogram (LeetCode 84)

• Key Insights & Interview Considerations -

Don’t move taller line inward → only reduces potential area.

Optimal strategy is always shrinking from shorter side.

• Follow-up Discussion :

Could this be extended to 3D version (max volume box)?

Tradeoff between area maximization and width preservation.

• References -

LeetCode 11 – Container With Most Water

Neetcode patterns – Two-Pointer