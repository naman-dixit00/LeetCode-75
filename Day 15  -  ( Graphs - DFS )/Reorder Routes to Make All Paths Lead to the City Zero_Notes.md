# Reorder Routes to Make All Paths Lead to the City Zero

🔗 Problem Link : LeetCode 1466 – Reorder Routes to Make All Paths Lead to the City Zero

• Problem Classification :

Category → Graph / DFS / Tree Traversal
Pattern → Edge Direction Reversal in Trees

1. Problem Statement –

We are given n cities (0 to n-1) connected by n-1 bidirectional roads, forming a tree.

But the ministry has assigned directions to these roads (a → b).

We must reorient the minimum number of roads so that every city can reach city 0.

Return that minimum number.

2. Constraints & Edge Cases –

Tree property: n-1 edges for n nodes, so graph is connected and acyclic.

Constraints: 2 <= n <= 5 * 10^4, edges up to 50k → requires efficient O(n) traversal.

Edge Cases:

Already all paths lead to 0 → answer = 0.

A star-shaped tree with center ≠ 0 may need multiple reversals.

Deep chains with wrong orientation may require many changes.

3. Intuition & Thought Process –

First thought: Every city must have a directed path to city 0.

Naive idea: Try reorienting edges greedily. But we must ensure minimal changes.

Key observation: If we do a DFS starting at node 0, every edge directed away from 0 must be reversed.

Approach: Build adjacency list with direction info. Run DFS from city 0, count reversed edges.

4. Approaches & Complexity Analysis –
DFS Traversal with Direction Check

Represent each edge as (neighbor, needsReverse) where needsReverse=1 if original edge is u → v and we traverse from u to v.

Run DFS from city 0, accumulate reversals.

Time Complexity: O(n) (single DFS).
Space Complexity: O(n) (adjacency list + recursion).

5. Example Walkthrough –

Example 1:

n = 6
connections = [[0,1],[1,3],[2,3],[4,0],[4,5]]


Roads:
0→1 (needs reversal), 1→3 (needs reversal), 2→3 (ok), 4→0 (ok), 4→5 (needs reversal).

Minimum changes = 3.
Output: 3 ✅

Example 2:

n = 5
connections = [[1,0],[1,2],[3,2],[3,4]]


Roads 1→0 (ok), 1→2 (reverse), 3→2 (reverse), 3→4 (ok).

Minimum changes = 2.
Output: 2 ✅

6. Patterns / Algorithms –

Primary Pattern: DFS Traversal + Edge Direction Check.

General Category: Tree Problems with Edge Modifications.

7. Related Problems –

LeetCode 685 – Redundant Connection II

LeetCode 2246 – Longest Path with Different Adjacent Characters

Graph orientation problems in competitive programming.

8. Key Insights & Interview Considerations –

Must store both directions in adjacency list, but mark whether reversal needed.

Interviewers often ask: “Why DFS from 0 works?” Answer: Because all paths must lead to 0, so exploring outward naturally detects wrong edges.

Alternative: BFS with direction counts.

9. Interview Follow-up –

Could this be extended to graphs with cycles? (Harder problem).

Could we compute which exact edges to reverse (not just count)?

How to adapt for directed acyclic graphs with multiple roots?

10. References –

LeetCode 1466 – Reorder Routes to Make All Paths Lead to the City Zero

Tree Algorithms in Competitive Programming – Codeforces Editorials

MIT OCW Graph Algorithms – DFS Applications