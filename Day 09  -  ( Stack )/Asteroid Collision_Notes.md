Asteroid Collision

🔗 Problem Link : LeetCode 735 – Asteroid Collision

• Problem Classification :

Category → Stack / Simulation
Pattern → Directional Collision Simulation

1. Problem Statement

We are given an array asteroids, where:

Absolute value → size of asteroid

Sign → direction (+ right, - left)

When two asteroids collide:

Smaller explodes

If same size → both explode

Same direction → never collide

Return the final state after all collisions.

2. Constraints & Edge Cases

2 ≤ asteroids.length ≤ 10⁴

-1000 ≤ asteroids[i] ≤ 1000, asteroids[i] ≠ 0

Edge Cases:

All positive or all negative → no collisions.

Equal size collisions → both removed.

Chain reactions → multiple collisions in sequence.

3. Intuition & Thought Process

Naive approach: simulate collisions repeatedly → O(n²).

Stack-based approach:

Push asteroids moving right.

When a left-moving asteroid comes, check collisions with stack top.

Continue until stable.

4. Approaches & Complexity

Naive Approach:

Simulate collisions with nested loops.

Time: O(n²)

Optimized Approach (Stack):

Maintain stack of active asteroids.

Simulate only when needed.

Time Complexity: O(n)

Space Complexity: O(n)

5. Example Walkthrough

Example 1:
[5,10,-5]

10 vs -5 → 10 survives
Output: [5,10] ✅

Example 2:
[8,-8]

Equal size → both explode → [] ✅

Example 3:
[10,2,-5]

2 vs -5 → -5 survives

10 vs -5 → 10 survives
Output: [10] ✅

6. Patterns / Algorithms

Stack-based collision handling

Greedy elimination

7. Related Problems

LeetCode 84: Largest Rectangle in Histogram (stack simulation)

LeetCode 402: Remove K Digits

8. Key Insights & Interview Considerations

Stack prevents O(n²) chain reaction simulation.

Must carefully handle equal size case.