# 0141. Linked List Cycle

## 🔗 Original Problem

[LeetCode - Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)

---

## 📝 Problem Statement

Given `head`, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the `next` pointer. Internally, `pos` is used to denote the index of the node that tail's `next` pointer is connected to. **Note that `pos` is not passed as a parameter**.

Return `true`* if there is a cycle in the linked list*. Otherwise, return `false`.

---

## 💡 Examples

**Example 1:**
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist.png" style="width: 300px; height: 97px; margin-top: 8px; margin-bottom: 8px;" />

**Input:** head = [3,2,0,-4], pos = 1
**Output:** true
**Explanation:** There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
</pre>

**Example 2:**
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test2.png" style="width: 141px; height: 74px;" />

**Input:** head = [1,2], pos = 0
**Output:** true
**Explanation:** There is a cycle in the linked list, where the tail connects to the 0th node.
</pre>

**Example 3:**
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test3.png" style="width: 45px; height: 45px;" />

**Input:** head = [1], pos = -1
**Output:** false
**Explanation:** There is no cycle in the linked list.
</pre>

---

## 📌 Constraints

</strong>

	- The number of the nodes in the list is in the range `[0, 10⁴]`.

	- `-10⁵ <= Node.val <= 10⁵`

	- `pos` is `-1` or a **valid index** in the linked-list.

 

**Follow up:** Can you solve it using `O(1)` (i.e. constant) memory?

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0141                    |
| Difficulty      | Easy                    |
| Language        | C++                     |
| Runtime         | 9 ms                    |
| Beats           | 57.74%                    |
| Memory          | 11.9 MB                    |
| Memory Beats    | 53.90%                    |
| Submission Date | Nov 2, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Hash Table
* Linked List
* Two Pointers
* Floyd's Cycle Finding Algorithm

---

## 📚 Related Topics

* [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)
* [Happy Number](https://leetcode.com/problems/happy-number/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
