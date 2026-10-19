# 0236. Lowest Common Ancestor of a Binary Tree

## 🔗 Original Problem

[LeetCode - Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)

---

## 📝 Problem Statement

Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

According to the [definition of LCA on Wikipedia](https://en.wikipedia.org/wiki/Lowest_common_ancestor): &ldquo;The lowest common ancestor is defined between two nodes `p` and `q` as the lowest node in `T` that has both `p` and `q` as descendants (where we allow **a node to be a descendant of itself**).&rdquo;

---

## 💡 Examples

**Example 1:**
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/14/binarytree.png" style="width: 200px; height: 190px;" />

**Input:** root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
**Output:** 3
**Explanation:** The LCA of nodes 5 and 1 is 3.
</pre>

**Example 2:**
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/14/binarytree.png" style="width: 200px; height: 190px;" />

**Input:** root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 4
**Output:** 5
**Explanation:** The LCA of nodes 5 and 4 is 5, since a node can be a descendant of itself according to the LCA definition.
</pre>

**Example 3:**

**Input:** root = [1,2], p = 1, q = 2
**Output:** 1
</pre>

---

## 📌 Constraints

</strong>

	- The number of nodes in the tree is in the range `[2, 10⁵]`.

	- `-10⁹ <= Node.val <= 10⁹`

	- All `Node.val` are **unique**.

	- `p != q`

	- `p` and `q` will exist in the tree.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0236                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 55 ms                    |
| Beats           | 92.40%                    |
| Memory          | 43.9 MB                    |
| Memory Beats    | 77.57%                    |
| Submission Date | Oct 19, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Tree
* Depth-First Search
* Binary Tree
* Binary Lifting
* Lowest Common Ancestor

---

## 📚 Related Topics

* [Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/)
* [Smallest Common Region](https://leetcode.com/problems/smallest-common-region/)
* [Find Players With Zero or One Losses](https://leetcode.com/problems/find-players-with-zero-or-one-losses/)
* [Lowest Common Ancestor of a Binary Tree II](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree-ii/)
* [Lowest Common Ancestor of a Binary Tree III](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree-iii/)
* [Lowest Common Ancestor of a Binary Tree IV](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree-iv/)
* [Step-By-Step Directions From a Binary Tree Node to Another](https://leetcode.com/problems/step-by-step-directions-from-a-binary-tree-node-to-another/)
* [Cycle Length Queries in a Tree](https://leetcode.com/problems/cycle-length-queries-in-a-tree/)

---

## 📈 Complexity

* **Time Complexity:** O(1)
* **Space Complexity:** O(1)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
