# 1386. Shift 2D Grid

## 🔗 Original Problem

[LeetCode - Shift 2D Grid](https://leetcode.com/problems/shift-2d-grid/)

---

## 📝 Problem Statement

Given a 2D `grid` of size `m x n` and an integer `k`. You need to shift the `grid` `k` times.

In one shift operation:

	- Element at `grid[i][j]` moves to `grid[i][j + 1]`.

	- Element at `grid[i][n - 1]` moves to `grid[i + 1][0]`.

	- Element at `grid[m - 1][n - 1]` moves to `grid[0][0]`.

Return the *2D grid* after applying shift operation `k` times.

---

## 💡 Examples

**Example 1:**
<img alt="" src="https://assets.leetcode.com/uploads/2019/11/05/e1.png" style="width: 400px; height: 178px;" />

**Input:** `grid` = [[1,2,3],[4,5,6],[7,8,9]], k = 1
**Output:** [[9,1,2],[3,4,5],[6,7,8]]
</pre>

**Example 2:**
<img alt="" src="https://assets.leetcode.com/uploads/2019/11/05/e2.png" style="width: 400px; height: 166px;" />

**Input:** `grid` = [[3,8,1,9],[19,7,2,5],[4,6,11,10],[12,0,21,13]], k = 4
**Output:** [[12,0,21,13],[3,8,1,9],[19,7,2,5],[4,6,11,10]]
</pre>

**Example 3:**

**Input:** `grid` = [[1,2,3],[4,5,6],[7,8,9]], k = 9
**Output:** [[1,2,3],[4,5,6],[7,8,9]]
</pre>

---

## 📌 Constraints

</strong>

	- `m == grid.length`

	- `n == grid[i].length`

	- `1 <= m <= 50`

	- `1 <= n <= 50`

	- `-1000 <= grid[i][j] <= 1000`

	- `0 <= k <= 100`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 1386                    |
| Difficulty      | Easy                    |
| Language        | C++                     |
| Runtime         | 0 ms                    |
| Beats           | 100.00%                    |
| Memory          | 18.1 MB                    |
| Memory Beats    | 91.78%                    |
| Submission Date | Jul 20, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Matrix
* Simulation

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
