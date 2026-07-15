# 0237. Delete Node in a Linked List

## 🔗 Original Problem

[LeetCode - Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/)

---

## 📝 Problem Statement

There is a singly-linked list `head` and we want to delete a node `node` in it.

You are given the node to be deleted `node`. You will **not be given access** to the first node of `head`.

All the values of the linked list are **unique**, and it is guaranteed that the given node `node` is not the last node in the linked list.

Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:

	- The value of the given node should not exist in the linked list.

	- The number of nodes in the linked list should decrease by one.

	- All the values before `node` should be in the same order.

	- All the values after `node` should be in the same order.

**Custom testing:**

	- For the input, you should provide the entire linked list `head` and the node to be given `node`. `node` should not be the last node of the list and should be an actual node in the list.

	- We will build the linked list and pass the node to your function.

	- The output will be the entire list after calling your function.

---

## 💡 Examples

**Example 1:**
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/01/node1.jpg" style="width: 400px; height: 286px;" />

**Input:** head = [4,5,1,9], node = 5
**Output:** [4,1,9]
**Explanation: **You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling your function.
</pre>

**Example 2:**
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/01/node2.jpg" style="width: 400px; height: 315px;" />

**Input:** head = [4,5,1,9], node = 1
**Output:** [4,5,9]
**Explanation: **You are given the third node with value 1, the linked list should become 4 -> 5 -> 9 after calling your function.
</pre>

---

## 📌 Constraints

</strong>

	- The number of the nodes in the given list is in the range `[2, 1000]`.

	- `-1000 <= Node.val <= 1000`

	- The value of each node in the list is **unique**.

	- The `node` to be deleted is **in the list** and is **not a tail** node.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0237                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 10 ms                    |
| Beats           | 36.42%                    |
| Memory          | 12.4 MB                    |
| Memory Beats    | 56.81%                    |
| Submission Date | Jul 15, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Linked List

---

## 📚 Related Topics

* [Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/)
* [Remove Nodes From Linked List](https://leetcode.com/problems/remove-nodes-from-linked-list/)
* [Delete Nodes From Linked List Present in Array](https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
