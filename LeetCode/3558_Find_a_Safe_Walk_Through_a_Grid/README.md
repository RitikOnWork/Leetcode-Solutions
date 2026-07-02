# 3558. Find a Safe Walk Through a Grid

## 🔗 Original Problem

[LeetCode - Find a Safe Walk Through a Grid](https://leetcode.com/problems/find-a-safe-walk-through-a-grid/)

---

## 📝 Problem Statement

You are given an `m x n` binary matrix `grid` and an integer `health`.

You start on the upper-left corner `(0, 0)` and would like to get to the lower-right corner `(m - 1, n - 1)`.

You can move up, down, left, or right from one cell to another adjacent cell as long as your health *remains* **positive**.

Cells `(i, j)` with `grid[i][j] = 1` are considered **unsafe** and reduce your health by 1.

Return `true` if you can reach the final cell with a health value of 1 or more, and `false` otherwise.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">grid = [[0,1,0,0,0],[0,1,0,1,0],[0,0,0,1,0]], health = 1</span>

**Output:** <span class="example-io">true</span>

**Explanation:**

The final cell can be reached safely by walking along the gray cells below.
<img alt="" src="https://assets.leetcode.com/uploads/2024/08/04/3868_examples_1drawio.png" style="width: 301px; height: 121px;" /></div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">grid = [[0,1,1,0,0,0],[1,0,1,0,0,0],[0,1,1,1,0,1],[0,0,1,0,1,0]], health = 3</span>

**Output:** <span class="example-io">false</span>

**Explanation:**

A minimum of 4 health points is needed to reach the final cell safely.
<img alt="" src="https://assets.leetcode.com/uploads/2024/08/04/3868_examples_2drawio.png" style="width: 361px; height: 161px;" /></div>

**Example 3:**

<div class="example-block">

**Input:** <span class="example-io">grid = [[1,1,1],[1,0,1],[1,1,1]], health = 5</span>

**Output:** <span class="example-io">true</span>

**Explanation:**

The final cell can be reached safely by walking along the gray cells below.

<img alt="" src="https://assets.leetcode.com/uploads/2024/08/04/3868_examples_3drawio.png" style="width: 181px; height: 121px;" />

Any path that does not go through the cell `(1, 1)` is unsafe since your health will drop to 0 when reaching the final cell.
</div>

---

## 📌 Constraints

</strong>

	- `m == grid.length`

	- `n == grid[i].length`

	- `1 <= m, n <= 50`

	- `<font face="monospace">2 <= m * n</font>`

	- `1 <= health <= m + n`

	- `grid[i][j]` is either 0 or 1.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 3558                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 34 ms                    |
| Beats           | 34.67%                    |
| Memory          | 37.3 MB                    |
| Memory Beats    | 28.20%                    |
| Submission Date | Jul 2, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Breadth-First Search
* Graph Theory
* Heap (Priority Queue)
* Matrix
* Shortest Path

---

## 📚 Related Topics

* [Shortest Path in a Grid with Obstacles Elimination](https://leetcode.com/problems/shortest-path-in-a-grid-with-obstacles-elimination/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
