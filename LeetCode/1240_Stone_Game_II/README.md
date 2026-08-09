# 1240. Stone Game II

## 🔗 Original Problem

[LeetCode - Stone Game II](https://leetcode.com/problems/stone-game-ii/)

---

## 📝 Problem Statement

Alice and Bob continue their games with piles of stones. There are a number of piles **arranged in a row**, and each pile has a positive integer number of stones `piles[i]`. The objective of the game is to end with the most stones.

Alice and Bob take turns, with Alice starting first.

On each player's turn, that player can take **all the stones** in the **first** `X` remaining piles, where `1 <= X <= 2M`. Then, we set `M = max(M, X)`. Initially, M = 1.

The game continues until all the stones have been taken.

Assuming Alice and Bob play optimally, return the maximum number of stones Alice can get.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">piles = [2,7,9,4,4]</span>

**Output:** <span class="example-io">10</span>

**Explanation:**

	- If Alice takes one pile at the beginning, Bob takes two piles, then Alice takes 2 piles again. Alice can get `2 + 4 + 4 = 10` stones in total.

	- If Alice takes two piles at the beginning, then Bob can take all three piles left. In this case, Alice get `2 + 7 = 9` stones in total.

So we return 10 since it's larger.
</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">piles = [1,2,3,4,5,100]</span>

**Output:** <span class="example-io">104</span>
</div>

---

## 📌 Constraints

</strong>

	- `1 <= piles.length <= 100`

	- `1 <= piles[i] <= 10⁴`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 1240                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 54 ms                    |
| Beats           | 18.85%                    |
| Memory          | 13.6 MB                    |
| Memory Beats    | 55.90%                    |
| Submission Date | Aug 9, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Math
* Dynamic Programming
* Minimax
* Prefix Sum
* Game Theory
* Zero-Sum Game

---

## 📚 Related Topics

* [Stone Game V](https://leetcode.com/problems/stone-game-v/)
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
