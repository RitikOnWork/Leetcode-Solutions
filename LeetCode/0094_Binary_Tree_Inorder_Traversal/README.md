# 0094. Binary Tree Inorder Traversal

## 🔗 Original Problem

[LeetCode - Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)

---

## 📝 Problem Statement

Given the `root` of a binary tree, return *the inorder traversal of its nodes' values*.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">root = [1,null,2,3]</span>

**Output:** <span class="example-io">[1,3,2]</span>

**Explanation:**

<img alt="" src="https://assets.leetcode.com/uploads/2024/08/29/screenshot-2024-08-29-202743.png" style="width: 200px; height: 264px;" />
</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">root = [1,2,3,4,5,null,8,null,null,6,7,9]</span>

**Output:** <span class="example-io">[4,2,6,5,7,1,3,9,8]</span>

**Explanation:**

<img alt="" src="https://assets.leetcode.com/uploads/2024/08/29/tree_2.png" style="width: 350px; height: 286px;" />
</div>

**Example 3:**

<div class="example-block">

**Input:** <span class="example-io">root = []</span>

**Output:** <span class="example-io">[]</span>
</div>

**Example 4:**

<div class="example-block">

**Input:** <span class="example-io">root = [1]</span>

**Output:** <span class="example-io">[1]</span>
</div>

---

## 📌 Constraints

</strong>

	- The number of nodes in the tree is in the range `[0, 100]`.

	- `-100 <= Node.val <= 100`

 
**Follow up:** Recursive solution is trivial, could you do it iteratively?

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0094                    |
| Difficulty      | Easy                    |
| Language        | C++                     |
| Runtime         | 0 ms                    |
| Beats           | 100.00%                    |
| Memory          | 10.8 MB                    |
| Memory Beats    | 66.93%                    |
| Submission Date | Sep 24, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Stack
* Tree
* Depth-First Search
* Binary Tree

---

## 📚 Related Topics

* [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)
* [Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/)
* [Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/)
* [Binary Search Tree Iterator](https://leetcode.com/problems/binary-search-tree-iterator/)
* [Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)
* [Closest Binary Search Tree Value II](https://leetcode.com/problems/closest-binary-search-tree-value-ii/)
* [Inorder Successor in BST](https://leetcode.com/problems/inorder-successor-in-bst/)
* [Convert Binary Search Tree to Sorted Doubly Linked List](https://leetcode.com/problems/convert-binary-search-tree-to-sorted-doubly-linked-list/)
* [Minimum Distance Between BST Nodes](https://leetcode.com/problems/minimum-distance-between-bst-nodes/)

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
