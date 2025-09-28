# Best Time to Buy and Sell Stock with Transaction Fee

🔗 Problem Link : LeetCode 714 – Best Time to Buy and Sell Stock with Transaction Fee

• Problem Classification : Category → Dynamic Programming / Greedy
• Pattern → State Tracking + DP Optimization

1. Problem Statement

We are given an array prices where prices[i] represents the price of a stock on day i. Along with it, we are given a fee which is a fixed transaction cost for each buy/sell operation.

The goal is to determine the maximum profit achievable if we are allowed to perform as many transactions as possible, under the constraints:

You cannot hold multiple stocks simultaneously.

Each transaction (buy and sell) incurs a fee once.

Return the maximum possible profit.

2. Constraints & Edge Cases

Input Size: 1 <= prices.length <= 5 * 10^4

Price Range: 1 <= prices[i] < 5 * 10^4

Fee Range: 0 <= fee < 5 * 10^4

Edge Cases:

Only one day: cannot sell → profit = 0

Fee is 0: behaves like normal stock buy/sell problem

Constant prices: best profit = 0

3. Intuition & Thought Process

Observation: On each day, we can either hold a stock or not hold a stock.

State Approach: Track two states:

hold → max profit if currently holding a stock

cash → max profit if currently not holding a stock

Transition:

Buy: reduce cash by price → new hold

Sell: increase hold by price minus fee → new cash

The solution is the maximum profit in cash at the end since holding stock without selling cannot be counted.

4. Approaches & Complexity Analysis

Brute Force:

Try all sequences of buy/sell → exponential complexity → infeasible

Optimized DP Approach:

For each price p:
  hold = max(hold, cash - p)
  cash = max(cash, hold + p - fee)


Time Complexity: O(n)

Space Complexity: O(1)

5. Example Walkthrough

Example 1:
Input: prices = [1,3,2,8,4,9], fee = 2
Step 1 → Buy at 1 → hold = -1
Step 2 → Sell at 8 → cash = 5 (8 - 1 - 2)
Step 3 → Buy at 4 → hold = 1
Step 4 → Sell at 9 → cash = 8 (9 - 4 - 2 + previous 5)

Output: 8

6. Patterns / Algorithms

Primary Pattern: Dynamic Programming – State Tracking

General Category: Stock Problem + Transaction Fee

7. Related Problems

Best Time to Buy and Sell Stock I, II, III, IV

Maximum Profit with Cooldown

Buy/Sell with Limited Transactions

8. Key Insights & Interview Considerations

Track only two states → O(1) space optimization

Always subtract fee when selling

Avoid nested loops → linear time solution

9. Interview Follow-up

Handle multiple stock types

Extend to variable fees per day

Streaming prices → online DP

10. References

LeetCode 714 – Best Time to Buy and Sell Stock with Transaction Fee

Dynamic Programming Patterns – MIT 6.006 / 6.042J