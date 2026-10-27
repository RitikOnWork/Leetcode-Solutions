# 4342. Create Grid With Exactly One Path

## 🔗 Original Problem

[LeetCode - Create Grid With Exactly One Path](https://leetcode.com/problems/create-grid-with-exactly-one-path/)

---

## 📝 Problem Statement

You are given two integers `m` and `n`, representing the number of rows and columns of a grid.

Construct **any** `m x n` grid consisting only of the characters `'.'` and `'#'`, where:

	- `'.'` represents a free cell.

	- `'#'` represents an obstacle cell.

A **valid path** is a sequence of free cells that:

	- Starts at the top-left cell `(0, 0)`.

	- Ends at the bottom-right cell `(m - 1, n - 1)`.

	<li>Moves only:
	

		- Right, from `(i, j)` to `(i, j + 1)`, or

		- Down, from `(i, j)` to `(i + 1, j)`.

	

	</li>

Return any grid such that there is **exactly one valid path** from the top-left cell to the bottom-right cell.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">m = 2, n = 3</span>

**Output:** <span class="example-io">["..#","#.."]</span>

**Explanation:**

<img src="https://assets.leetcode.com/uploads/2026/05/26/screenshot-2026-05-26-at-61005pm.png" style="width: 200px; height: 95px;" />

The only valid path is: `(0,0) &rarr; (0,1) &rarr; (1,1) &rarr; (1,2)`
</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">m = 3, n = 3</span>

**Output:** <span class="example-io">["..#","#..","##."]</span>

**Explanation:**

<img src="https://assets.leetcode.com/uploads/2026/05/26/screenshot-2026-05-26-at-61129pm.png" style="width: 220px; height: 150px;" />

The only valid path is: `(0,0) &rarr; (0,1) &rarr; (1,1) &rarr; (1,2) &rarr; (2,2)`
</div>

**Example 3:**

<div class="example-block">

**Input:** <span class="example-io">m = 1, n = 4</span>

**Output:** <span class="example-io">["...."]</span>

**Explanation:**

The only valid path is: `(0,0) &rarr; (0,1) &rarr; (0,2) &rarr; (0,3)`
</div>

---

## 📌 Constraints

</strong>

	- `1 <= m, n <= 25`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 4342                    |
| Difficulty      | Easy                    |
| Language        | C++                     |
| Runtime         | 1 ms                    |
| Beats           | 57.48%                    |
| Memory          | 10.7 MB                    |
| Memory Beats    | 100.00%                    |
| Submission Date | Oct 28, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* None

---

## 📚 Related Topics

* [Create Grid With Exactly K Paths I](https://leetcode.com/problems/create-grid-with-exactly-k-paths-i/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
