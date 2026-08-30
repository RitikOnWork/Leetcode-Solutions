# 0073. Set Matrix Zeroes

## 🔗 Original Problem

[LeetCode - Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/)

---

## 📝 Problem Statement

Given an `m x n` integer matrix `matrix`, if an element is `0`, set its entire row and column to `0`'s.

You must do it [in place](https://en.wikipedia.org/wiki/In-place_algorithm).

---

## 💡 Examples

**Example 1:**
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/17/mat1.jpg" style="width: 450px; height: 169px;" />

**Input:** matrix = [[1,1,1],[1,0,1],[1,1,1]]
**Output:** [[1,0,1],[0,0,0],[1,0,1]]
</pre>

**Example 2:**
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/17/mat2.jpg" style="width: 450px; height: 137px;" />

**Input:** matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
**Output:** [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
</pre>

---

## 📌 Constraints

</strong>

	- `m == matrix.length`

	- `n == matrix[0].length`

	- `1 <= m, n <= 200`

	- `-2³¹ <= matrix[i][j] <= 2³¹ - 1`

 

**Follow up:**

	- A straightforward solution using `O(mn)` space is probably a bad idea.

	- A simple improvement uses `O(m + n)` space, but still not the best solution.

	- Could you devise a constant space solution?

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0073                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 0 ms                    |
| Beats           | 100.00%                    |
| Memory          | 21.2 MB                    |
| Memory Beats    | 17.12%                    |
| Submission Date | Aug 30, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Hash Table
* Matrix

---

## 📚 Related Topics

* [Game of Life](https://leetcode.com/problems/game-of-life/)
* [Number of Laser Beams in a Bank](https://leetcode.com/problems/number-of-laser-beams-in-a-bank/)
* [Minimum Operations to Remove Adjacent Ones in Matrix](https://leetcode.com/problems/minimum-operations-to-remove-adjacent-ones-in-matrix/)
* [Remove All Ones With Row and Column Flips II](https://leetcode.com/problems/remove-all-ones-with-row-and-column-flips-ii/)

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
