# 3562. Maximum Score of Non-overlapping Intervals

## 🔗 Original Problem

[LeetCode - Maximum Score of Non-overlapping Intervals](https://leetcode.com/problems/maximum-score-of-non-overlapping-intervals/)

---

## 📝 Problem Statement

You are given a 2D integer array `intervals`, where `intervals[i] = [l<sub>i</sub>, r<sub>i</sub>, weight<sub>i</sub>]`. Interval `i` starts at position `l<sub>i</sub>` and ends at `r<sub>i</sub>`, and has a weight of `weight<sub>i</sub>`. You can choose *up to* 4 **non-overlapping** intervals. The **score** of the chosen intervals is defined as the total sum of their weights.

Return the <span data-keyword="lexicographically-smaller-array">lexicographically smallest</span> array of at most 4 indices from `intervals` with **maximum** score, representing your choice of non-overlapping intervals.

Two intervals are said to be **non-overlapping** if they do not share any points. In particular, intervals sharing a left or right boundary are considered overlapping.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">intervals = [[1,3,2],[4,5,2],[1,5,5],[6,9,3],[6,7,1],[8,9,1]]</span>

**Output:** <span class="example-io">[2,3]</span>

**Explanation:**

You can choose the intervals with indices 2, and 3 with respective weights of 5, and 3.
</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">intervals = [[5,8,1],[6,7,7],[4,7,3],[9,10,6],[7,8,2],[11,14,3],[3,5,5]]</span>

**Output:** <span class="example-io">[1,3,5,6]</span>

**Explanation:**

You can choose the intervals with indices 1, 3, 5, and 6 with respective weights of 7, 6, 3, and 5.
</div>

---

## 📌 Constraints

</strong>

	- `1 <= intevals.length <= 5 * 10⁴`

	- `intervals[i].length == 3`

	- `intervals[i] = [l<sub>i</sub>, r<sub>i</sub>, weight<sub>i</sub>]`

	- `1 <= l<sub>i</sub> <= r<sub>i</sub> <= 10⁹`

	- `1 <= weight<sub>i</sub> <= 10⁹`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 3562                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 2058 ms                    |
| Beats           | 23.91%                    |
| Memory          | 237 MB                    |
| Memory Beats    | 78.26%                    |
| Submission Date | Sep 13, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Binary Search
* Dynamic Programming
* Sorting

---

## 📚 Related Topics

* [Two Best Non-Overlapping Events](https://leetcode.com/problems/two-best-non-overlapping-events/)

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
