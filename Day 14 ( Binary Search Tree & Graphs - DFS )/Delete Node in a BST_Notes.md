# Delete Node in a BST

🔗 Problem Link : LeetCode 450 – Delete Node in a BST

• Problem Classification :
Category → Binary Search Trees (BST)
Pattern → Recursive Search + Node Replacement

1. Problem Statement

We are given the root of a Binary Search Tree (BST) and an integer key. We need to delete the node with value = key while still maintaining the properties of a BST. If the node does not exist, simply return the unchanged tree.

BST properties must remain valid after deletion.

2. Constraints & Edge Cases

Number of nodes: 0 ≤ n ≤ 10⁴

Node values: -10⁵ ≤ val ≤ 10⁵

Each node has a unique value.

Root is always a valid BST.

Key range: -10⁵ ≤ key ≤ 10⁵

Edge Cases:

Empty tree → return NULL.

Node not present → tree unchanged.

Node is a leaf → just remove it.

Node has one child → replace it with its child.

Node has two children → replace with inorder successor (smallest in right subtree) or predecessor (largest in left subtree).

3. Intuition & Thought Process

First thought: Use the recursive BST property (go left if key < root, go right if key > root).

Key observation:

Deletion has three cases:

Leaf node → simple removal.

One child → bypass the node and return the child.

Two children → replace with inorder successor, then recursively delete successor.

Reasoning: Inorder successor ensures BST ordering is preserved.

4. Approaches & Complexity Analysis

Approach (Recursive Search + Replacement):

Search for the node using BST property.

If found:

No child → return NULL.

One child → return that child.

Two children → find inorder successor, swap values, and delete recursively.

Time Complexity: O(h), where h = tree height (O(log n) for balanced BST, O(n) for skewed).
Space Complexity: O(h) recursion stack.

5. Example Walkthrough

Input: root = [5,3,6,2,4,null,7], key = 3

Search path: 5 → 3 (found).

Node 3 has two children (2,4).

Replace 3 with inorder successor (4).

Delete 4 from subtree.

Final tree: [5,4,6,2,null,null,7]

6. Patterns / Algorithms

BST recursive search.

Inorder successor/predecessor logic.

7. Related Problems

Insert into BST (LeetCode 701)

Search in BST (LeetCode 700)

Validate BST (LeetCode 98)

8. Key Insights & Interview Considerations

Must preserve BST ordering at all times.

The tricky part is two-child deletion.

Common pitfall: forgetting to update child pointers after deletion.

9. Interview Follow-up

Discuss iterative implementation.

Optimize to reduce recursion depth.

Compare use of inorder successor vs predecessor.

10. References

LeetCode 450 – Delete Node in a BST

MIT 6.006 – Trees and Recursive Algorithms