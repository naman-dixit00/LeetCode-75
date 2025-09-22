Dota2 Senate

🔗 Problem Link : LeetCode 649 – Dota2 Senate

• Problem Classification :
Category → Greedy / Queue Simulation
Pattern → Circular banning

1. Problem Statement

We have a string senate with R (Radiant) and D (Dire). Each senator can:

Ban one opponent.

Announce victory if all remaining are from one side.

Return "Radiant" or "Dire".

2. Constraints & Edge Cases

n = senate.length, 1 ≤ n ≤ 10⁴

senate[i] ∈ {R, D}

Edge Cases:

Only Rs or only Ds → immediate victory.

Equal number of senators.

Long alternating sequences "RDRDRD...".

3. Intuition & Thought Process

Naive → simulate round by round with string erasing → O(n²).

Efficient → Use two queues to track indices of each party.

In each step, lower index senator bans opponent.

Winner re-enters with index + n (simulate next round).

4. Approaches & Complexity Analysis

Queue-based Greedy Simulation

Maintain queues for R and D.

Compare front indices.

Remove losing senator, winner gets requeued with offset.

Time Complexity: O(n)
Space Complexity: O(n)

5. Example Walkthrough

Input: "RDD"

R(0) vs D(1): R bans D → queues: R=[3], D=[2].

Next → D(2) bans R(3). → Winner = "Dire".

Output: "Dire"

6. Patterns / Algorithms

Greedy banning

Circular queue rotation

7. Related Problems

LeetCode 649 – Senate (variations)

Simulation + greedy elimination

8. Key Insights & Interview Considerations

Index rotation trick avoids re-scanning entire string.

Ensures O(n) runtime even for large cases.

9. Interview follow-up

Modify rules (e.g., each senator can ban 2 people).

Randomized banning instead of deterministic.

10. References

LeetCode 649 – Dota2 Senate

MIT 6.046 – Greedy Algorithms