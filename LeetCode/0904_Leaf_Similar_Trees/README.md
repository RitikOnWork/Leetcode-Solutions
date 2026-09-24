# 0904. Leaf-Similar Trees

## 🔗 Original Problem

[LeetCode - Leaf-Similar Trees](https://leetcode.com/problems/leaf-similar-trees/)

---

## 📝 Problem Statement

Consider all the leaves of a binary tree, from left to right order, the values of those leaves form a **leaf value sequence***.*

<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/16/tree.png" style="width: 400px; height: 336px;" />

For example, in the given tree above, the leaf value sequence is `(6, 7, 4, 9, 8)`.

Two binary trees are considered *leaf-similar* if their leaf value sequence is the same.

Return `true` if and only if the two given trees with head nodes `root1` and `root2` are leaf-similar.

---

## 💡 Examples

**Example 1:**
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/03/leaf-similar-1.jpg" style="width: 600px; height: 237px;" />

**Input:** root1 = [3,5,1,6,2,9,8,null,null,7,4], root2 = [3,5,1,6,7,4,2,null,null,null,null,null,null,9,8]
**Output:** true
</pre>

**Example 2:**
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/03/leaf-similar-2.jpg" style="width: 300px; height: 110px;" />

**Input:** root1 = [1,2,3], root2 = [1,3,2]
**Output:** false
</pre>

---

## 📌 Constraints

</strong>

	- The number of nodes in each tree will be in the range `[1, 200]`.

	- Both of the given trees will have values in the range `[0, 200]`.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0904                    |
| Difficulty      | Easy                    |
| Language        | C++                     |
| Runtime         | 0 ms                    |
| Beats           | 100.00%                    |
| Memory          | 15.3 MB                    |
| Memory Beats    | 50.54%                    |
| Submission Date | Sep 24, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Tree
* Depth-First Search
* Binary Tree

---

## 📚 Related Topics

* None

---

## 📈 Complexity

* **Time Complexity:** O(1)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
