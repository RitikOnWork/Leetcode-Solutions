# 1617. Stone Game IV

## 🔗 Original Problem

[LeetCode - Stone Game IV](https://leetcode.com/problems/stone-game-iv/)

---

## 📝 Problem Statement

Alice and Bob take turns playing a game, with Alice starting first.

Initially, there are `n` stones in a pile. On each player's turn, that player makes a *move* consisting of removing **any** non-zero **square number** of stones in the pile.

Also, if a player cannot make a move, he/she loses the game.

Given a positive integer `n`, return `true` if and only if Alice wins the game otherwise return `false`, assuming both players play optimally.

---

## 💡 Examples

**Example 1:**

**Input:** n = 1
**Output:** true
**Explanation: **Alice can remove 1 stone winning the game because Bob doesn't have any moves.</pre>

**Example 2:**

**Input:** n = 2
**Output:** false
**Explanation: **Alice can only remove 1 stone, after that Bob removes the last one winning the game (2 -> 1 -> 0).
</pre>

**Example 3:**

**Input:** n = 4
**Output:** true
**Explanation:** n is already a perfect square, Alice can win with one move, removing 4 stones (4 -> 0).
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= n <= 10⁵`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 1617                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 31 ms                    |
| Beats           | 81.44%                    |
| Memory          | 9 MB                    |
| Memory Beats    | 82.55%                    |
| Submission Date | Aug 10, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Math
* Dynamic Programming
* Minimax
* Game Theory
* Nim Game
* Sprague–Grundy Theorem
* Zero-Sum Game

---

## 📚 Related Topics

* [Stone Game V](https://leetcode.com/problems/stone-game-v/)
* [Stone Game VI](https://leetcode.com/problems/stone-game-vi/)
* [Stone Game VII](https://leetcode.com/problems/stone-game-vii/)
* [Stone Game VIII](https://leetcode.com/problems/stone-game-viii/)
* [Stone Game IX](https://leetcode.com/problems/stone-game-ix/)
* [Stone Removal Game](https://leetcode.com/problems/stone-removal-game/)

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
