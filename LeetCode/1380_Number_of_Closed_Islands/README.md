# 1380. Number of Closed Islands

## 🔗 Original Problem

[LeetCode - Number of Closed Islands](https://leetcode.com/problems/number-of-closed-islands/)

---

## 📝 Problem Statement

Given a 2D `grid` consists of `0s` (land) and `1s` (water).  An *island* is a maximal 4-directionally connected group of `<font face="monospace">0</font>s` and a *closed island* is an island **totally** (all left, top, right, bottom) surrounded by `1s.`

Return the number of *closed islands*.

---

## 💡 Examples

**Example 1:**

<img alt="" src="https://assets.leetcode.com/uploads/2019/10/31/sample_3_1610.png" style="width: 240px; height: 120px;" />

**Input:** grid = [[1,1,1,1,1,1,1,0],[1,0,0,0,0,1,1,0],[1,0,1,0,1,1,1,0],[1,0,0,0,0,1,0,1],[1,1,1,1,1,1,1,0]]
**Output:** 2
**Explanation:** 
Islands in gray are closed because they are completely surrounded by water (group of 1s).</pre>

**Example 2:**

<img alt="" src="https://assets.leetcode.com/uploads/2019/10/31/sample_4_1610.png" style="width: 160px; height: 80px;" />

**Input:** grid = [[0,0,1,0,0],[0,1,0,1,0],[0,1,1,1,0]]
**Output:** 1
</pre>

**Example 3:**

**Input:** grid = [[1,1,1,1,1,1,1],
               [1,0,0,0,0,0,1],
               [1,0,1,1,1,0,1],
               [1,0,1,0,1,0,1],
               [1,0,1,1,1,0,1],
               [1,0,0,0,0,0,1],
               [1,1,1,1,1,1,1]]
**Output:** 2
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= grid.length, grid[0].length <= 100`

	- `0 <= grid[i][j] <=1`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 1380                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 31 ms                    |
| Beats           | 5.40%                    |
| Memory          | 26.2 MB                    |
| Memory Beats    | 5.05%                    |
| Submission Date | Oct 25, 2026 |

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

* None

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
