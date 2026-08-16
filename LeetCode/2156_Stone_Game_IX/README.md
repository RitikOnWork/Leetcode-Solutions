# 2156. Stone Game IX

## 🔗 Original Problem

[LeetCode - Stone Game IX](https://leetcode.com/problems/stone-game-ix/)

---

## 📝 Problem Statement

Alice and Bob continue their games with stones. There is a row of n stones, and each stone has an associated value. You are given an integer array `stones`, where `stones[i]` is the **value** of the `i^t^h` stone.

Alice and Bob take turns, with **Alice** starting first. On each turn, the player may remove any stone from `stones`. The player who removes a stone **loses** if the **sum** of the values of **all removed stones** is divisible by `3`. Bob will win automatically if there are no remaining stones (even if it is Alice's turn).

Assuming both players play **optimally**, return `true` *if Alice wins and* `false` *if Bob wins*.

---

## 💡 Examples

**Example 1:**

**Input:** stones = [2,1]
**Output:** true
**Explanation:** The game will be played as follows:
- Turn 1: Alice can remove either stone.
- Turn 2: Bob removes the remaining stone. 
The sum of the removed stones is 1 + 2 = 3 and is divisible by 3. Therefore, Bob loses and Alice wins the game.
</pre>

**Example 2:**

**Input:** stones = [2]
**Output:** false
**Explanation:** Alice will remove the only stone, and the sum of the values on the removed stones is 2. 
Since all the stones are removed and the sum of values is not divisible by 3, Bob wins the game.
</pre>

**Example 3:**

**Input:** stones = [5,1,2,4,3]
**Output:** false
**Explanation:** Bob will always win. One possible way for Bob to win is shown below:
- Turn 1: Alice can remove the second stone with value 1. Sum of removed stones = 1.
- Turn 2: Bob removes the fifth stone with value 3. Sum of removed stones = 1 + 3 = 4.
- Turn 3: Alices removes the fourth stone with value 4. Sum of removed stones = 1 + 3 + 4 = 8.
- Turn 4: Bob removes the third stone with value 2. Sum of removed stones = 1 + 3 + 4 + 2 = 10.
- Turn 5: Alice removes the first stone with value 5. Sum of removed stones = 1 + 3 + 4 + 2 + 5 = 15.
Alice loses the game because the sum of the removed stones (15) is divisible by 3. Bob wins the game.
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= stones.length <= 10⁵`

	- `1 <= stones[i] <= 10⁴`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 2156                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 0 ms                    |
| Beats           | 100.00%                    |
| Memory          | 131.4 MB                    |
| Memory Beats    | 33.50%                    |
| Submission Date | Aug 16, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Math
* Greedy
* Minimax
* Counting
* Game Theory
* Nim Game
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
