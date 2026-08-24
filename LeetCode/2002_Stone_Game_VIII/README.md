# 2002. Stone Game VIII

## 🔗 Original Problem

[LeetCode - Stone Game VIII](https://leetcode.com/problems/stone-game-viii/)

---

## 📝 Problem Statement

Alice and Bob take turns playing a game, with **Alice starting first**.

There are `n` stones arranged in a row. On each player's turn, while the number of stones is **more than one**, they will do the following:

	- Choose an integer `x > 1`, and **remove** the leftmost `x` stones from the row.

	- Add the **sum** of the **removed** stones' values to the player's score.

	- Place a **new stone**, whose value is equal to that sum, on the left side of the row.

The game stops when **only** **one** stone is left in the row.

The **score difference** between Alice and Bob is `(Alice's score - Bob's score)`. Alice's goal is to **maximize** the score difference, and Bob's goal is the **minimize** the score difference.

Given an integer array `stones` of length `n` where `stones[i]` represents the value of the `i^t^h` stone **from the left**, return *the **score difference** between Alice and Bob if they both play **optimally**.*

---

## 💡 Examples

**Example 1:**

**Input:** stones = [-1,2,-3,4,-5]
**Output:** 5
**Explanation:**
- Alice removes the first 4 stones, adds (-1) + 2 + (-3) + 4 = 2 to her score, and places a stone of
  value 2 on the left. stones = [2,-5].
- Bob removes the first 2 stones, adds 2 + (-5) = -3 to his score, and places a stone of value -3 on
  the left. stones = [-3].
The difference between their scores is 2 - (-3) = 5.
</pre>

**Example 2:**

**Input:** stones = [7,-6,5,10,5,-2,-6]
**Output:** 13
**Explanation:**
- Alice removes all stones, adds 7 + (-6) + 5 + 10 + 5 + (-2) + (-6) = 13 to her score, and places a
  stone of value 13 on the left. stones = [13].
The difference between their scores is 13 - 0 = 13.
</pre>

**Example 3:**

**Input:** stones = [-10,-12]
**Output:** -22
**Explanation:**
- Alice can only make one move, which is to remove both stones. She adds (-10) + (-12) = -22 to her
  score and places a stone of value -22 on the left. stones = [-22].
The difference between their scores is (-22) - 0 = -22.
</pre>

---

## 📌 Constraints

</strong>

	- `n == stones.length`

	- `2 <= n <= 10⁵`

	- `-10⁴ <= stones[i] <= 10⁴`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 2002                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 89 ms                    |
| Beats           | 95.32%                    |
| Memory          | 91.6 MB                    |
| Memory Beats    | 72.18%                    |
| Submission Date | Aug 24, 2026 |

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

* [Stone Game](https://leetcode.com/problems/stone-game/)
* [Stone Game II](https://leetcode.com/problems/stone-game-ii/)
* [Stone Game III](https://leetcode.com/problems/stone-game-iii/)
* [Stone Game IV](https://leetcode.com/problems/stone-game-iv/)
* [Stone Game V](https://leetcode.com/problems/stone-game-v/)
* [Stone Game VI](https://leetcode.com/problems/stone-game-vi/)
* [Stone Game VII](https://leetcode.com/problems/stone-game-vii/)
* [Stone Game VIII](https://leetcode.com/problems/stone-game-viii/)
* [Stone Game IX](https://leetcode.com/problems/stone-game-ix/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
