# Evaluate Division

🔗 Problem Link : LeetCode 399 – Evaluate Division

• Problem Classification :
Category → Graphs (Weighted Directed Graph) / Union-Find.
Pattern → Graph Traversal (DFS/BFS) + Ratio Propagation.

1. Problem Statement -

We are given equations of the form A / B = k where k is a real number. Using these, we must answer queries like C / D = ?.

If no valid relation can be established, we return -1.0.

Each variable is a node, each equation is an edge with weight = ratio value.

Essentially, the task is to evaluate division values dynamically based on the given relational graph.

2. Constraints & Edge Cases -

Input size : 1 <= equations.length <= 20

Each variable length: 1–5 characters, lowercase letters/digits.

Values: 0.0 < values[i] <= 20.0.

Edge Cases :

Query involves unknown variables (output = -1).

Query is of form x / x (always = 1 if x exists).

Multiple chains of equations may lead to the same result.

Graph may have disconnected components.

3. Intuition & Thought Process -

First thought : Treat each variable as a graph node. Division relation A / B = k means A → B with weight k and B → A with weight 1/k.

Naive idea : For each query, perform DFS to find path and multiply edge weights.

Key observation : The problem reduces to path evaluation in weighted graph.

Alternative view : Could also use Union-Find with ratios to merge connected components.

4. Approaches & Complexity Analysis -

• DFS/BFS Approach :

Build adjacency list with edges and ratios.

For each query, perform DFS to find path and compute ratio product.

Time Complexity : O(N * Q) worst-case.

Space Complexity : O(N) for graph + recursion stack.

• Union-Find Approach :

Maintain parent mapping and weight ratios.

Path compression adjusts ratio with parent updates.

Answer queries by checking if two nodes belong to same set.

Time Complexity : Almost O(α(N)) per operation.

Space Complexity : O(N).

5. Example Walkthrough -

Input :
equations = [["a","b"],["b","c"]], values = [2.0, 3.0], queries = [["a","c"],["b","a"],["a","e"],["a","a"],["x","x"]]

Steps:

Build graph: a→b (2.0), b→c (3.0). Also add b→a (0.5), c→b (0.333...).

Query 1: a→c path → a→b (2) × b→c (3) = 6.

Query 2: b→a path → 0.5.

Query 3: a→e → not connected → -1.

Query 4: a→a → trivial → 1.

Query 5: x→x → variable undefined → -1.

Output : [6.0, 0.5, -1.0, 1.0, -1.0].

6. Patterns / Algorithms -

Primary Pattern: Graph traversal with weighted edges.

General Category: Graph Theory + Union-Find with ratios.

7. Related Problems -

LeetCode 684 – Redundant Connection

LeetCode 547 – Number of Provinces (similar graph connectivity check)

LeetCode 1319 – Number of Operations to Make Network Connected

8. Key Insights & Interview Considerations -

Always model division as bidirectional weighted graph edges.

Union-Find can speed up repeated queries.

Important pitfall: Handle queries where variable never appears.

9. Interview Follow-up -

How would you scale if 10^5 equations exist?

Can you handle floating-point precision errors?

Extend to real-time queries while equations stream in.

10. References -

LeetCode 399 – Evaluate Division

Graph Traversals (DFS/BFS) – MIT 6.006 Intro to Algorithms

Union-Find with Weights – Competitive Programming Notes