# 0200. Number of Islands

## 🔗 Original Problem

[LeetCode - Number of Islands](https://leetcode.com/problems/number-of-islands/)

---

## 📝 Problem Statement

Given an `m x n` 2D binary grid `grid` which represents a map of `'1'`s (land) and `'0'`s (water), return *the number of islands*.

An **island** is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

---

## 💡 Examples

**Example 1:**

**Input:** grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
**Output:** 1
</pre>

**Example 2:**

**Input:** grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
**Output:** 3
</pre>

---

## 📌 Constraints

</strong>

	- `m == grid.length`

	- `n == grid[i].length`

	- `1 <= m, n <= 300`

	- `grid[i][j]` is `'0'` or `'1'`.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0200                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 27 ms                    |
| Beats           | 55.20%                    |
| Memory          | 16.1 MB                    |
| Memory Beats    | 93.75%                    |
| Submission Date | Nov 2, 2026 |

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

* [Surrounded Regions](https://leetcode.com/problems/surrounded-regions/)
* [Walls and Gates](https://leetcode.com/problems/walls-and-gates/)
* [Number of Islands II](https://leetcode.com/problems/number-of-islands-ii/)
* [Number of Connected Components in an Undirected Graph](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/)
* [Battleships in a Board](https://leetcode.com/problems/battleships-in-a-board/)
* [Number of Distinct Islands](https://leetcode.com/problems/number-of-distinct-islands/)
* [Max Area of Island](https://leetcode.com/problems/max-area-of-island/)
* [Count Sub Islands](https://leetcode.com/problems/count-sub-islands/)
* [Find All Groups of Farmland](https://leetcode.com/problems/find-all-groups-of-farmland/)
* [Count Unreachable Pairs of Nodes in an Undirected Graph](https://leetcode.com/problems/count-unreachable-pairs-of-nodes-in-an-undirected-graph/)
* [Maximum Number of Fish in a Grid](https://leetcode.com/problems/maximum-number-of-fish-in-a-grid/)
* [Count Islands With Total Value Divisible by K](https://leetcode.com/problems/count-islands-with-total-value-divisible-by-k/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
