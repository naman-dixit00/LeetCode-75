Number of Recent Calls

🔗 Problem Link : LeetCode 933 – Number of Recent Calls

• Problem Classification :
Category → Queue / Sliding Window
Pattern → Maintain valid range [t-3000, t]

1. Problem Statement

Design RecentCounter to track recent requests within 3000 ms.

Operations:

RecentCounter() → initialize.

ping(t) → add request at time t, return count of requests in [t-3000, t].

2. Constraints & Edge Cases

1 ≤ t ≤ 10⁹

Calls are strictly increasing in t.

At most 10⁴ calls.

Edge Cases:

First request (ping(1)) → should return 1.

Multiple requests within the same range.

Requests far apart (ping(1), ping(10000)).

3. Intuition & Thought Process

Naive → check all stored requests each time → O(n²).

Better → Use queue:

Add new request.

Remove old requests < t - 3000.

Queue size = answer.

4. Approaches & Complexity Analysis

Queue Approach

Maintain queue of requests.

Pop outdated requests.

Return queue size.

Time Complexity: O(1) amortized per ping.
Space Complexity: O(n) for storing requests.

5. Example Walkthrough

Input:

["RecentCounter", "ping", "ping", "ping", "ping"]
[[], [1], [100], [3001], [3002]]


Output: [null, 1, 2, 3, 3]

6. Patterns / Algorithms

Sliding window

Queue maintenance

7. Related Problems

LeetCode 346 – Moving Average from Data Stream

LeetCode 362 – Design Hit Counter

8. Key Insights & Interview Considerations

Queue ensures efficient removal of outdated requests.

Strictly increasing t allows safe pops from front.

9. Interview follow-up

What if t is not strictly increasing? (Need balanced BST)

Handle different window size (parameterized).

10. References

LeetCode 933 – Number of Recent Calls

MIT 6.006 – Queue-based Sliding Windows