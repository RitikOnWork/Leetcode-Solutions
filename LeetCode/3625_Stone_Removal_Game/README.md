# 3625. Stone Removal Game

## 🔗 Original Problem

[LeetCode - Stone Removal Game](https://leetcode.com/problems/stone-removal-game/)

---

## 📝 Problem Statement

Alice and Bob are playing a game where they take turns removing stones from a pile, with *Alice going first*.

	- Alice starts by removing **exactly** 10 stones on her first turn.

	- For each subsequent turn, each player removes **exactly** 1 fewer** **stone** **than the previous opponent.

The player who cannot make a move loses the game.

Given a positive integer `n`, return `true` if Alice wins the game and `false` otherwise.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">n = 12</span>

**Output:** <span class="example-io">true</span>

**Explanation:**

	- Alice removes 10 stones on her first turn, leaving 2 stones for Bob.

	- Bob cannot remove 9 stones, so Alice wins.

</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">n = 1</span>

**Output:** <span class="example-io">false</span>

**Explanation:**

	- Alice cannot remove 10 stones, so Alice loses.

</div>

---

## 📌 Constraints

</strong>

	- `1 <= n <= 50`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 3625                    |
| Difficulty      | Easy                    |
| Language        | C++                     |
| Runtime         | 0 ms                    |
| Beats           | 100.00%                    |
| Memory          | 7.7 MB                    |
| Memory Beats    | 72.34%                    |
| Submission Date | Nov 26, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Math
* Simulation

---

## 📚 Related Topics

* [Stone Game IV](https://leetcode.com/problems/stone-game-iv/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
