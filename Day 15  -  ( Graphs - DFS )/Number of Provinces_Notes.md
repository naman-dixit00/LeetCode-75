# Number of Provinces

🔗 Problem Link : LeetCode 547 – Number of Provinces

• Problem Classification :

Category → Graph / DFS / Union-Find
Pattern → Connected Components in an Undirected Graph

1. Problem Statement –

We are given n cities and a square matrix isConnected of size n × n.

isConnected[i][j] = 1 → city i and city j are directly connected.

isConnected[i][j] = 0 → no direct connection.

A province is defined as a group of cities that are directly or indirectly connected to each other, with no outside connections.

We must return the total number of provinces in the given graph.

2. Constraints & Edge Cases –

Input Size: 1 <= n <= 200 (small to medium graph size).

Matrix Properties: isConnected[i][i] = 1 (self-connected), symmetric (isConnected[i][j] == isConnected[j][i]).

Edge Cases:

All cities isolated → each city forms its own province.

Fully connected matrix → only one province.

Sparse connectivity → multiple small groups.

3. Intuition & Thought Process –

First thought: This is a classic connected components problem in an undirected graph.

Naive idea: Start at each city, perform DFS/BFS, and mark all reachable cities. Count how many times we start a new DFS.

Key observation: The adjacency matrix isConnected directly encodes graph edges.

Two strong methods:

DFS/BFS traversal to count components.

Union-Find (Disjoint Set Union) to merge connected cities efficiently.

4. Approaches & Complexity Analysis –
Approach 1 – DFS/BFS Traversal

Visit each city. If not already visited, run DFS to mark all cities in that province.

Count how many DFS runs we needed.

Time Complexity: O(n²) (matrix scan + DFS)
Space Complexity: O(n) (visited array, recursion/queue).

Approach 2 – Union-Find (Optimized)

Initially treat each city as its own province.

For every pair (i, j) where isConnected[i][j] = 1, union them.

Count the number of disjoint sets at the end.

Time Complexity: O(n² · α(n)) (α = inverse Ackermann, nearly constant).
Space Complexity: O(n).

5. Example Walkthrough –

Example 1:

Input: [[1,1,0],
        [1,1,0],
        [0,0,1]]


City 0 ↔ City 1 connected.

City 2 isolated.

Provinces = {0,1}, {2}.
Output: 2 ✅

Example 2:

Input: [[1,0,0],
        [0,1,0],
        [0,0,1]]


No interconnections.

Each city is its own province.
Output: 3 ✅

6. Patterns / Algorithms –

Primary Pattern: Connected Components in Graphs.

General Category: Graph Traversal / Union-Find.

7. Related Problems –

LeetCode 200 – Number of Islands

LeetCode 323 – Number of Connected Components in an Undirected Graph

LeetCode 684 – Redundant Connection

8. Key Insights & Interview Considerations –

Always clarify: input graph type (directed/undirected). Here it is undirected.

Interviewers often ask both DFS solution and Union-Find variant.

Watch out: self-loops (isConnected[i][i] = 1) must not confuse traversal.

9. Interview Follow-up –

What if input was a sparse adjacency list instead of a matrix?

Could we solve this in parallel/distributed manner for very large graphs?

How does this extend to directed graphs (strongly connected components)?

10. References –

LeetCode 547 – Number of Provinces

CLRS – Introduction to Algorithms, Graph Algorithms Chapter

MIT OpenCourseWare – Graph Theory & Applications