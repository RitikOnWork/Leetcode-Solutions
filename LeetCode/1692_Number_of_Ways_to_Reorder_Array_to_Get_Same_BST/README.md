# 1692. Number of Ways to Reorder Array to Get Same BST

## 🔗 Original Problem

[LeetCode - Number of Ways to Reorder Array to Get Same BST](https://leetcode.com/problems/number-of-ways-to-reorder-array-to-get-same-bst/)

---

## 📝 Problem Statement

Given an array `nums` that represents a permutation of integers from `1` to `n`. We are going to construct a binary search tree (BST) by inserting the elements of `nums` in order into an initially empty BST. Find the number of different ways to reorder `nums` so that the constructed BST is identical to that formed from the original array `nums`.

	- For example, given `nums = [2,1,3]`, we will have 2 as the root, 1 as a left child, and 3 as a right child. The array `[2,3,1]` also yields the same BST but `[3,2,1]` yields a different BST.

Return *the number of ways to reorder* `nums` *such that the BST formed is identical to the original BST formed from* `nums`.

Since the answer may be very large, **return it modulo **`10⁹ + 7`.

---

## 💡 Examples

**Example 1:**
<img alt="" src="https://assets.leetcode.com/uploads/2026/02/23/1569_ex0.png" style="width: 160px; height: 160px;" />

**Input:** nums = [2,1,3]
**Output:** 1
**Explanation:** We can reorder nums to be [2,3,1] which will yield the same BST. There are no other ways to reorder nums which will yield the same BST.
</pre>

**Example 2:**
<img alt="" src="https://assets.leetcode.com/uploads/2026/02/23/1569_ex.png" style="width: 270px; height: 270px;" />

**Input:** nums = [3,4,5,1,2]
**Output:** 5
**Explanation:** The following 5 arrays will yield the same BST: 
[3,1,2,4,5]
[3,1,4,2,5]
[3,1,4,5,2]
[3,4,1,2,5]
[3,4,1,5,2]
</pre>

**Example 3:**
<img alt="" src="https://assets.leetcode.com/uploads/2026/02/23/1569_ex2.png" style="width: 205px; height: 205px;" />

**Input:** nums = [1,2,3]
**Output:** 0
**Explanation:** There are no other orderings of nums that will yield the same BST.
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= nums.length <= 1000`

	- `1 <= nums[i] <= nums.length`

	- All integers in `nums` are **distinct**.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 1692                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 254 ms                    |
| Beats           | 14.80%                    |
| Memory          | 297.5 MB                    |
| Memory Beats    | 35.74%                    |
| Submission Date | Oct 18, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Math
* Divide and Conquer
* Dynamic Programming
* Tree
* Union-Find
* Binary Search Tree
* Memoization
* Combinatorics
* Binary Tree
* Fermat's Little Theorem

---

## 📚 Related Topics

* None

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
