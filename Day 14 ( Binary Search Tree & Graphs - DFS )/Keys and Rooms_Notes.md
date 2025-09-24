# Keys and Rooms

🔗 Problem Link : LeetCode 841 – Keys and Rooms

• Problem Classification :
Category → Graph Traversal
Pattern → BFS / DFS Reachability

1. Problem Statement

We have n rooms (0 to n-1). Only room 0 is unlocked initially. Each room contains keys that open other rooms. We need to check if all rooms can be visited.

2. Constraints & Edge Cases

2 ≤ n ≤ 1000

Sum of all keys ≤ 3000

Keys are unique within a room.

Edge Cases:

Keys form a simple chain → always true.

A cycle of rooms but one isolated room → false.

Graph fully connected → true.

3. Intuition & Thought Process

First thought: This is just a graph reachability problem.

Observation: Keys = edges, Rooms = nodes.

Naive idea: Try brute-force visiting repeatedly until no new rooms.

Better idea: Use DFS/BFS from room 0 and see if all rooms get visited.

4. Approaches & Complexity Analysis

Approach (DFS/BFS):

Start with room 0.

Use a stack/queue to traverse.

Mark visited rooms.

At the end, check if all rooms visited.

Time Complexity: O(n + k) (n = rooms, k = total keys)
Space Complexity: O(n) visited array

5. Example Walkthrough

Input: rooms = [[1],[2],[3],[]]

Start from room 0 → get key 1.

Enter room 1 → get key 2.

Enter room 2 → get key 3.

Enter room 3.

All visited → true.

6. Patterns / Algorithms

Graph DFS / BFS.

Reachability problem.

7. Related Problems

Course Schedule (LeetCode 207)

Graph Connected Components

8. Key Insights & Interview Considerations

Model keys as directed edges.

Equivalent to checking strong connectivity from node 0.

9. Interview Follow-up

Modify for weighted rooms (time cost).

Return the order of visiting instead of boolean.

10. References

LeetCode 841 – Keys and Rooms

MIT 6.006 – Graph Traversal DFS/BFS