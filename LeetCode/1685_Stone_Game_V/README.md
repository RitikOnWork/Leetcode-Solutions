# 1685. Stone Game V

## 🔗 Original Problem

[LeetCode - Stone Game V](https://leetcode.com/problems/stone-game-v/)

---

## 📝 Problem Statement

There are several stones **arranged in a row**, and each stone has an associated value which is an integer given in the array `stoneValue`.

In each round of the game, Alice divides the row into **two non-empty rows** (i.e. left row and right row), then Bob calculates the value of each row which is the sum of the values of all the stones in this row. Bob throws away the row which has the maximum value, and Alice's score increases by the value of the remaining row. If the value of the two rows are equal, Bob lets Alice decide which row will be thrown away. The next round starts with the remaining row.

The game ends when there is only **one stone remaining**. Alice's score is initially **zero**.

Return *the maximum score that Alice can obtain*.

---

## 💡 Examples

**Example 1:**

**Input:** stoneValue = [6,2,3,4,5,5]
**Output:** 18
**Explanation:** In the first round, Alice divides the row to [6,2,3], [4,5,5]. The left row has the value 11 and the right row has value 14. Bob throws away the right row and Alice's score is now 11.
In the second round Alice divides the row to [6], [2,3]. This time Bob throws away the left row and Alice's score becomes 16 (11 + 5).
The last round Alice has only one choice to divide the row which is [2], [3]. Bob throws away the right row and Alice's score is now 18 (16 + 2). The game ends because only one stone is remaining in the row.
</pre>

**Example 2:**

**Input:** stoneValue = [7,7,7,7,7,7,7]
**Output:** 28
</pre>

**Example 3:**

**Input:** stoneValue = [4]
**Output:** 0
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= stoneValue.length <= 500`

	- `1 <= stoneValue[i] <= 10⁶`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 1685                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 976 ms                    |
| Beats           | 12.81%                    |
| Memory          | 27.5 MB                    |
| Memory Beats    | 73.18%                    |
| Submission Date | Aug 17, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Math
* Dynamic Programming
* Game Theory

---

## 📚 Related Topics

* [Stone Game](https://leetcode.com/problems/stone-game/)
* [Stone Game II](https://leetcode.com/problems/stone-game-ii/)
* [Stone Game III](https://leetcode.com/problems/stone-game-iii/)
* [Stone Game IV](https://leetcode.com/problems/stone-game-iv/)
* [Stone Game VI](https://leetcode.com/problems/stone-game-vi/)
* [Stone Game VII](https://leetcode.com/problems/stone-game-vii/)
* [Stone Game VIII](https://leetcode.com/problems/stone-game-viii/)
* [Stone Game IX](https://leetcode.com/problems/stone-game-ix/)

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
