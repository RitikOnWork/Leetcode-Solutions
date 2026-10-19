# 2210. Find Target Indices After Sorting Array

## 🔗 Original Problem

[LeetCode - Find Target Indices After Sorting Array](https://leetcode.com/problems/find-target-indices-after-sorting-array/)

---

## 📝 Problem Statement

You are given a **0-indexed** integer array `nums` and a target element `target`.

A **target index** is an index `i` such that `nums[i] == target`.

Return *a list of the target indices of* `nums` after* sorting *`nums`* in **non-decreasing** order*. If there are no target indices, return *an **empty** list*. The returned list must be sorted in **increasing** order.

---

## 💡 Examples

**Example 1:**

**Input:** nums = [1,2,5,2,3], target = 2
**Output:** [1,2]
**Explanation:** After sorting, nums is [1,<u>**2**</u>,<u>**2**</u>,3,5].
The indices where nums[i] == 2 are 1 and 2.
</pre>

**Example 2:**

**Input:** nums = [1,2,5,2,3], target = 3
**Output:** [3]
**Explanation:** After sorting, nums is [1,2,2,<u>**3**</u>,5].
The index where nums[i] == 3 is 3.
</pre>

**Example 3:**

**Input:** nums = [1,2,5,2,3], target = 5
**Output:** [4]
**Explanation:** After sorting, nums is [1,2,2,3,<u>**5**</u>].
The index where nums[i] == 5 is 4.
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= nums.length <= 100`

	- `1 <= nums[i], target <= 100`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 2210                    |
| Difficulty      | Easy                    |
| Language        | C++                     |
| Runtime         | 0 ms                    |
| Beats           | 100.00%                    |
| Memory          | 15.1 MB                    |
| Memory Beats    | 52.00%                    |
| Submission Date | Oct 20, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Binary Search
* Sorting

---

## 📚 Related Topics

* [Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)
* [Rank Transform of an Array](https://leetcode.com/problems/rank-transform-of-an-array/)
* [Find Words Containing Character](https://leetcode.com/problems/find-words-containing-character/)

---

## 📈 Complexity

* **Time Complexity:** O(n log n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
