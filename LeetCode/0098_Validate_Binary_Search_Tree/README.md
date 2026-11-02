# 0098. Validate Binary Search Tree

## 🔗 Original Problem

[LeetCode - Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)

---

## 📝 Problem Statement

Given the `root` of a binary tree, *determine if it is a valid binary search tree (BST)*.

A **valid BST** is defined as follows:

	- The left <span data-keyword="subtree">subtree</span> of a node contains only nodes with keys **strictly less than** the node's key.

	- The right subtree of a node contains only nodes with keys **strictly greater than** the node's key.

	- Both the left and right subtrees must also be binary search trees.

---

## 💡 Examples

**Example 1:**
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/01/tree1.jpg" style="width: 302px; height: 182px;" />

**Input:** root = [2,1,3]
**Output:** true
</pre>

**Example 2:**
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/01/tree2.jpg" style="width: 422px; height: 292px;" />

**Input:** root = [5,1,4,null,null,3,6]
**Output:** false
**Explanation:** The root node's value is 5 but its right child's value is 4.
</pre>

---

## 📌 Constraints

</strong>

	- The number of nodes in the tree is in the range `[1, 10⁴]`.

	- `-2³¹ <= Node.val <= 2³¹ - 1`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0098                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 0 ms                    |
| Beats           | 100.00%                    |
| Memory          | 21.8 MB                    |
| Memory Beats    | 71.05%                    |
| Submission Date | Nov 2, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Tree
* Depth-First Search
* Binary Search Tree
* Binary Tree

---

## 📚 Related Topics

* [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)
* [Find Mode in Binary Search Tree](https://leetcode.com/problems/find-mode-in-binary-search-tree/)

---

## 📈 Complexity

* **Time Complexity:** O(1)
* **Space Complexity:** O(1)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
