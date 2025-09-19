Day 6 – Find the Highest Altitude

🔗 Problem Link : LeetCode 1732 – Find the Highest Altitude
(https://leetcode.com/problems/find-the-highest-altitude/
)

• Problem Classification :

Category → Array / Prefix Sum

Pattern → Cumulative Sum + Maximum Tracking

• Problem Statement -
A biker goes on a road trip with n + 1 points at different altitudes. Starting at altitude 0, the gain array of length n represents net change in altitude between consecutive points.
Return the highest altitude reached during the trip.

• Constraints & Edge Cases -

Input size: 1 <= gain.length <= 100

Values: -100 <= gain[i] <= 100

• Edge Cases :

All negative gains → highest = 0

All positive gains → highest = sum of gains

Mix of positive and negative → track cumulative max

• Intuition & Thought Process -

First thought : Maintain cumulative sum of altitudes while iterating through gain.

Key observation : Maximum altitude = max(cumulative sum, 0)

• Approaches & Complexity Analysis -

• Brute Force :

Compute altitude array fully, then find max

Time Complexity: O(n)

Space Complexity: O(n)

• Optimized Approach :

Initialize currentAltitude = 0 and maxAltitude = 0

Iterate gain → update currentAltitude += gain[i]

Update maxAltitude = max(maxAltitude, currentAltitude)

Return maxAltitude

Time Complexity: O(n)

Space Complexity: O(1)

• Example Walkthrough -

Example 1:
Input: gain = [-5,1,5,0,-7]
Altitudes: [0,-5,-4,1,1,-6] → max = 1
Output: 1

Example 2:
Input: gain = [-4,-3,-2,-1,4,3,2]
Altitudes: [0,-4,-7,-9,-10,-6,-3,-1] → max = 0
Output: 0

• Patterns / Algorithms -

Primary Pattern : Prefix Sum + Max Tracking

General Category : Array / Linear Scan

• Related Problems :

Running Sum of 1d Array (LeetCode 1480)

Max Consecutive Ones III (LeetCode 1004)

• Key Insights & Interview Considerations -

Maintain running sum to save space.

Edge case: start altitude is 0.

• References -

LeetCode 1732 – Find the Highest Altitude

Cracking the Coding Interview – Array / Prefix Sum Techniques