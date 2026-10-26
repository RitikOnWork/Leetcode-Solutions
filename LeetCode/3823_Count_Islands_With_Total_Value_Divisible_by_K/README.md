# 3823. Count Islands With Total Value Divisible by K

## 🔗 Original Problem

[LeetCode - Count Islands With Total Value Divisible by K](https://leetcode.com/problems/count-islands-with-total-value-divisible-by-k/)

---

## 📝 Problem Statement

You are given an `m x n` matrix `grid` and a positive integer `k`. An **island** is a group of **positive** integers (representing land) that are **4-directionally** connected (horizontally or vertically).

The **total value** of an island is the sum of the values of all cells in the island.

Return the number of islands with a total value **divisible by** `k`.

---

## 💡 Examples

**Example 1:**
<img alt="" src="https://assets.leetcode.com/uploads/2025/03/06/example1griddrawio-1.png" style="width: 200px; height: 200px;" />
<div class="example-block">

**Input:** <span class="example-io">grid = [[0,2,1,0,0],[0,5,0,0,5],[0,0,1,0,0],[0,1,4,7,0],[0,2,0,0,8]], k = 5</span>

**Output:** <span class="example-io">2</span>

**Explanation:**

The grid contains four islands. The islands highlighted in blue have a total value that is divisible by 5, while the islands highlighted in red do not.
</div>

**Example 2:**
<img alt="" src="https://assets.leetcode.com/uploads/2025/03/06/example2griddrawio.png" style="width: 200px; height: 150px;" />
<div class="example-block">

**Input:** <span class="example-io">grid = [[3,0,3,0], [0,3,0,3], [3,0,3,0]], k = 3</span>

**Output:** <span class="example-io">6</span>

**Explanation:**

The grid contains six islands, each with a total value that is divisible by 3.
</div>

---

## 📌 Constraints

</strong>

	- `m == grid.length`

	- `n == grid[i].length`

	- `1 <= m, n <= 1000`

	- `1 <= m * n <= 10⁵`

	- `0 <= grid[i][j] <= 10⁶`

	- `1 <= k <= 10⁶`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 3823                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 849 ms                    |
| Beats           | 5.14%                    |
| Memory          | 102.2 MB                    |
| Memory Beats    | 38.33%                    |
| Submission Date | Oct 26, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Depth-First Search
* Breadth-First Search
* Union-Find
* Matrix

---

## 📚 Related Topics

* [Number of Islands](https://leetcode.com/problems/number-of-islands/)

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
