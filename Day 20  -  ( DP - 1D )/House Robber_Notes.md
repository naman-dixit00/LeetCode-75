# House Robber

🔗 Problem Link : LeetCode 198 – House Robber

• Problem Classification : Category → Dynamic Programming.
Pattern → Linear DP with non-adjacent constraint.

1. Problem Statement –

You are a robber planning to steal from houses along a street.

Adjacent houses have security systems; robbing two consecutive houses triggers the alarm.

Each house has a value nums[i].

Return the maximum amount you can rob without alerting the police.

2. Constraints & Edge Cases –

Constraints:

1 <= nums.length <= 100

0 <= nums[i] <= 400

Edge Cases:

Single house → rob it.

All houses zero → max loot = 0.

Large values → sum fits within 32-bit integer.

3. Intuition & Thought Process –

Naive idea: Try all subsets avoiding consecutive indices → exponential time.

Key observation: DP works: maxLoot[i] = max(maxLoot[i-1], maxLoot[i-2]+nums[i])

This ensures choosing current house vs skipping it.

4. Approaches & Complexity Analysis –

Brute Force – Subset Enumeration:

Enumerate all valid non-adjacent subsets → check sum.

Time Complexity: O(2^n)

Optimized – Linear DP:

Initialize: dp[0] = nums[0], dp[1] = max(nums[0], nums[1])

For i>=2: dp[i] = max(dp[i-1], dp[i-2] + nums[i])

Result = dp[n-1]

Time Complexity: O(n)

Space Complexity: O(1) using rolling variables

5. Example Walkthrough –

Input: nums = [1,2,3,1]

Step 0: dp[0]=1

Step 1: dp[1]=max(1,2)=2

Step 2: dp[2]=max(2,1+3)=4

Step 3: dp[3]=max(4,2+1)=4

Output: 4

6. Patterns / Algorithms –

Primary Pattern: Dynamic Programming with non-adjacency constraint.

General Category: Linear optimization, greedy-like DP.

7. Related Problems –

House Robber II (circular street)

Maximum Sum of Non-Adjacent Numbers

Climbing Stairs variants

8. Key Insights & Interview Considerations –

Recognize DP recurrence from problem constraints.

Rolling variables reduce memory usage.

Careful with base cases (first two houses).

9. Interview Follow-up –

Circular houses variant.

Houses with cooldown period.

Variable adjacency constraints.

10. References –

LeetCode 198 – House Robber

MIT 6.006 – Linear DP examples