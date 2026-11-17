# 0112. Path Sum

## 🔗 Original Problem

[LeetCode - Path Sum](https://leetcode.com/problems/path-sum/)

---

## 📝 Problem Statement

Given the `root` of a binary tree and an integer `targetSum`, return `true` if the tree has a **root-to-leaf** path such that adding up all the values along the path equals `targetSum`.

A **leaf** is a node with no children.

---

## 💡 Examples

**Example 1:**
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/18/pathsum1.jpg" style="width: 500px; height: 356px;" />

**Input:** root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
**Output:** true
**Explanation:** The root-to-leaf path with the target sum is shown.
</pre>

**Example 2:**
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/18/pathsum2.jpg" />

**Input:** root = [1,2,3], targetSum = 5
**Output:** false
**Explanation:** There are two root-to-leaf paths in the tree:
(1 --> 2): The sum is 3.
(1 --> 3): The sum is 4.
There is no root-to-leaf path with sum = 5.
</pre>

**Example 3:**

**Input:** root = [], targetSum = 0
**Output:** false
**Explanation:** Since the tree is empty, there are no root-to-leaf paths.
</pre>

---

## 📌 Constraints

</strong>

	- The number of nodes in the tree is in the range `[0, 5000]`.

	- `-1000 <= Node.val <= 1000`

	- `-1000 <= targetSum <= 1000`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0112                    |
| Difficulty      | Easy                    |
| Language        | C++                     |
| Runtime         | 0 ms                    |
| Beats           | 100.00%                    |
| Memory          | 21.3 MB                    |
| Memory Beats    | 93.30%                    |
| Submission Date | Nov 17, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Tree
* Depth-First Search
* Breadth-First Search
* Binary Tree

---

## 📚 Related Topics

* [Path Sum II](https://leetcode.com/problems/path-sum-ii/)
* [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)
* [Sum Root to Leaf Numbers](https://leetcode.com/problems/sum-root-to-leaf-numbers/)
* [Path Sum III](https://leetcode.com/problems/path-sum-iii/)
* [Path Sum IV](https://leetcode.com/problems/path-sum-iv/)

---

## 📈 Complexity

* **Time Complexity:** O(1)
* **Space Complexity:** O(1)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
