# 1222. Remove Covered Intervals

## 🔗 Original Problem

[LeetCode - Remove Covered Intervals](https://leetcode.com/problems/remove-covered-intervals/)

---

## 📝 Problem Statement

Given an array `intervals` where `intervals[i] = [l<sub>i</sub>, r<sub>i</sub>]` represent the interval `[l<sub>i</sub>, r<sub>i</sub>)`, remove all intervals that are covered by another interval in the list.

The interval `[a, b)` is covered by the interval `[c, d)` if and only if `c <= a` and `b <= d`.

Return *the number of remaining intervals*.

---

## 💡 Examples

**Example 1:**

**Input:** intervals = [[1,4],[3,6],[2,8]]
**Output:** 2
**Explanation:** Interval [3,6] is covered by [2,8], therefore it is removed.
</pre>

**Example 2:**

**Input:** intervals = [[1,4],[2,3]]
**Output:** 1
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= intervals.length <= 1000`

	- `intervals[i].length == 2`

	- `0 <= l<sub>i</sub> < r<sub>i</sub> <= 10⁵`

	- All the given intervals are **unique**.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 1222                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 0 ms                    |
| Beats           | 100.00%                    |
| Memory          | 15 MB                    |
| Memory Beats    | 82.12%                    |
| Submission Date | Jul 6, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Sorting

---

## 📚 Related Topics

* None

---

## 📈 Complexity

* **Time Complexity:** O(n log n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
