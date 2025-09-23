# Maximum Twin Sum of a Linked List

🔗 Problem Link : LeetCode 2130 – Maximum Twin Sum of a Linked List

• Problem Classification :
Category → Linked List, Two-Pointer, Array Conversion
Pattern → Symmetric Index Pairing + Maximum Pair Sum

1. Problem Statement

In a linked list of size n (where n is even), the i-th node is called the twin of the (n-1-i)-th node.

The twin sum = value of a node + value of its twin.
We need to return the maximum twin sum of the linked list.

2. Constraints & Edge Cases

Input size: 2 ≤ n ≤ 10⁵ (and n is even)

Node values: 1 ≤ Node.val ≤ 10⁵

Edge Cases:

Smallest list with 2 nodes

Very large list (up to 10⁵ nodes)

All values equal (max sum repeats)

Increasing / decreasing linked list values

3. Intuition & Thought Process

First thought: Pair symmetric nodes (i and n-1-i).

Naive idea: Copy all values into an array, then compute pair sums.

Optimized idea: Use fast and slow pointers to find the middle → reverse the second half → pair nodes while traversing.

4. Approaches & Complexity Analysis

Approach 1 (Array Conversion):

Traverse linked list, store values in array.

Compute twin sums from both ends.

Time: O(n)

Space: O(n)

Approach 2 (In-place Reverse Second Half):

Find middle using slow/fast pointer.

Reverse second half of list.

Traverse first & second halves together to compute max sum.

Time: O(n)

Space: O(1)

5. Example Walkthrough

Input: head = [5,4,2,1]

Twin pairs: (5+1)=6, (4+2)=6

Maximum twin sum = 6

Input: head = [1,100000]

Twin pair: (1+100000)=100001

Maximum twin sum = 100001

6. Patterns / Algorithms

Linked List → Middle finding (fast & slow pointer)

Reversal of second half

Pair sum computation

7. Related Problems

Reverse Linked List (LeetCode 206)

Palindrome Linked List (LeetCode 234)

Middle of Linked List (LeetCode 876)

8. Key Insights & Interview Considerations

Efficient solution avoids O(n) extra memory.

Fast/slow pointer is critical.

Pitfall: Forgetting to reverse back the list (if required).

9. Interview Follow-up

Extend to odd-length lists (skip middle element).

Apply similar logic for circular linked lists.

10. References

LeetCode 2130 – Maximum Twin Sum of a Linked List

MIT 6.006 – Introduction to Algorithms (Linked List manipulation)