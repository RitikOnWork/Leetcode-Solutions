# 1234. Number of Paths with Max Score

## 🔗 Original Problem

[LeetCode - Number of Paths with Max Score](https://leetcode.com/problems/number-of-paths-with-max-score/)

---

## 📝 Problem Statement

You are given a square `board` of characters. You can move on the board starting at the bottom right square marked with the character `'S'`.


You need to reach the top left square marked with the character `'E'`. The rest of the squares are labeled either with a numeric character `1, 2, ..., 9` or with an obstacle `'X'`. In one move you can go up, left or up-left (diagonally) only if there is no obstacle there.


Return a list of two integers: the first integer is the maximum sum of numeric characters you can collect, and the second is the number of such paths that you can take to get that maximum sum, **taken modulo `10^9 + 7`**.


In case there is no path, return `[0, 0]`.

---

## 💡 Examples

**Example 1:**

**Input:** board = ["E23","2X2","12S"]
**Output:** [7,1]
</pre>

**Example 2:**

**Input:** board = ["E12","1X1","21S"]
**Output:** [4,2]
</pre>

**Example 3:**

**Input:** board = ["E11","XXX","11S"]
**Output:** [0,0]
</pre>

---

## 📌 Constraints

</strong>



	- `2 <= board.length == board[i].length <= 100`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 1234                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 11 ms                    |
| Beats           | 48.08%                    |
| Memory          | 11.8 MB                    |
| Memory Beats    | 51.22%                    |
| Submission Date | Jul 5, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Dynamic Programming
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
