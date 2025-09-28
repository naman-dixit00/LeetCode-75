Online Stock Span

🔗 Problem Link : LeetCode – Online Stock Span

•Problem Classification : Category → Stack / Array . Pattern → Monotonic Stack

Problem Statement -
Design a class StockSpanner that receives daily stock prices and returns the span of the price for the current day. The span is the maximum number of consecutive days, going backward from today, where the stock price was less than or equal to today’s price.

This problem helps understand online processing and how monotonic stacks can efficiently compute spans without re-checking every previous day.

Constraints & Edge Cases -
Price range : 1 <= price <= 10^5
Number of calls : At most 10^4 calls to next.
• Edge Cases :

Strictly increasing prices → span increases each day.

Strictly decreasing prices → span is always 1.

Random fluctuating prices → test general case.

Maximum calls → ensures O(n) amortized complexity.

Intuition & Thought Process -

First thought : Brute-force would check all previous days for each new price → O(n^2).

Key observation : Use a stack to maintain previous days’ prices and their spans.

Monotonic Stack Idea : Stack stores pairs (price, span). For a new price, pop from stack while previous prices ≤ current price, accumulate spans. Push (current_price, total_span) to stack.

Approaches & Complexity Analysis -
• Brute Force :

Iterate all previous prices for each new price.
Time Complexity : O(n^2)
Space Complexity : O(n)

• Optimized Approach (Monotonic Stack) :
Step 1: Initialize stack of pairs (price, span).
Step 2: For each next(price), pop all stack elements with price <= current_price, summing their spans.
Step 3: Push (price, accumulated_span) to stack. Return span.
Time Complexity : O(n) amortized (each price pushed/popped once)
Space Complexity : O(n)

Example Walkthrough -

Example 1 :
Input sequence: [100, 80, 60, 70, 60, 75, 85]

Day 0: 100 → span 1

Day 1: 80 → span 1

Day 2: 60 → span 1

Day 3: 70 → span 2 (60 and 70)

…
Output: [1,1,1,2,1,4,6]

Patterns / Algorithms -

Primary Pattern : Monotonic Stack

General Category : Stack + Online Processing

Efficiently computes “previous less than or equal” element spans.

Related Problems -

Daily Temperatures (LeetCode 739)

Next Greater Element (LeetCode 496)

Maximum Rectangle in Histogram (LeetCode 84)

Key Insights & Interview Considerations -

Store both price and span in stack to avoid re-scanning history.

This is an online problem – previous results affect current computation.

Monotonic stack ensures O(n) amortized performance for n calls.

Interview follow-up -

Modify to handle streaming data in real-time.

Compute spans for multiple stocks simultaneously.

Discuss differences between online vs batch processing.

References -

LeetCode 901 – Online Stock Span

Monotonic Stack Tutorials

Cracking the Coding Interview – Stack & Array Patterns