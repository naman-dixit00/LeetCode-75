Daily Temperatures

🔗 Problem Link : LeetCode – Daily Temperatures

•Problem Classification : Category → Array / Stack . Pattern → Monotonic Stack

Problem Statement -
We are given an array temperatures representing the daily temperatures. For each day i, we want to determine how many days we have to wait until a warmer temperature occurs. If no such future day exists, we set answer[i] = 0. The challenge is to efficiently compute this for large input arrays up to length 10^5.

This problem helps in understanding future-oriented comparisons in arrays and is a classic application of monotonic stacks, where we track indices in a decreasing order to efficiently find the next greater element.

Constraints & Edge Cases -
Input size : 1 <= temperatures.length <= 10^5
Value range : 30 <= temperatures[i] <= 100
• Edge Cases :

All temperatures are the same → output is all zeros.

Strictly decreasing temperatures → output is all zeros.

Strictly increasing temperatures → output is a sequence of 1, 1, …, 0.

Maximum length arrays to test stack efficiency and memory usage.

Intuition & Thought Process -

First thought : Brute-force solution would check every subsequent day for each day, resulting in O(n^2), which is infeasible for large inputs.

Key observation : We only need the next day with a higher temperature, which can be efficiently tracked with a stack.

Monotonic Stack Idea : Maintain a stack of indices of temperatures in decreasing order. When a new temperature arrives that is higher than the top of the stack, it is the “next greater temperature” for all elements popped from the stack. This avoids redundant comparisons.

Approaches & Complexity Analysis -
• Brute Force :

Iterate over each day and check subsequent days until a warmer temperature is found.
Time Complexity : O(n^2)
Space Complexity : O(1)

• Optimized Approach (Monotonic Stack) :
Step 1: Initialize an empty stack and an answer array filled with zeros.
Step 2: Iterate over temperatures.
Step 3: While the stack is not empty and current temperature > temperature at index on top of the stack, pop the index from the stack and calculate the difference of indices for the answer.
Step 4: Push the current index to the stack.
Time Complexity : O(n) – each element is pushed and popped at most once.
Space Complexity : O(n) for the stack.

Example Walkthrough -

Example 1 :

Input : temperatures = [73,74,75,71,69,72,76,73]

Day 0: 73 → next higher is 74 → wait 1 day

Day 1: 74 → next higher is 75 → wait 1 day

Day 2: 75 → next higher is 76 → wait 4 days

… continue for all days

Output : [1,1,4,2,1,1,0,0]

Patterns / Algorithms -

Primary Pattern : Monotonic Stack

General Category : Array + Stack

Handles “next greater element” or “next smaller element” problems efficiently.

Related Problems -

Next Greater Element (LeetCode 496)

Online Stock Span (LeetCode 901)

Trapping Rain Water (LeetCode 42)

Key Insights & Interview Considerations -

The stack stores indices, not values, to compute distance efficiently.

Ensure proper handling when no warmer temperature exists (default 0).

Critical trick: Maintain monotonic decreasing stack to guarantee O(n) complexity.

Interview follow-up -

Extend logic to circular arrays.

Find “next smaller temperature” using similar logic.

Discuss memory trade-offs if the array is extremely large.

References -

LeetCode 739 – Daily Temperatures

Cracking the Coding Interview – Stack Patterns

Monotonic Stack Tutorials