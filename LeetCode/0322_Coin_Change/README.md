# 0322. Coin Change

## 🔗 Original Problem

[LeetCode - Coin Change](https://leetcode.com/problems/coin-change/)

---

## 📝 Problem Statement

You are given an integer array `coins` representing coins of different denominations and an integer `amount` representing a total amount of money.

Return the **fewest** number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

You may assume that you have an infinite number of each kind of coin.

---

## 💡 Examples

**Example 1:**

**Input:** coins = [1,2,5], amount = 11
**Output:** 3
**Explanation:** 11 = 5 + 5 + 1
</pre>

**Example 2:**

**Input:** coins = [2], amount = 3
**Output:** -1
</pre>

**Example 3:**

**Input:** coins = [1], amount = 0
**Output:** 0
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= coins.length <= 12`

	- `1 <= coins[i] <= 2³¹ - 1`

	- `0 <= amount <= 10⁴`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0322                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 20 ms                    |
| Beats           | 69.62%                    |
| Memory          | 17.9 MB                    |
| Memory Beats    | 66.33%                    |
| Submission Date | Nov 2, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Dynamic Programming
* Breadth-First Search
* Knapsack Problem
* Complete Knapsack

---

## 📚 Related Topics

* [Minimum Cost For Tickets](https://leetcode.com/problems/minimum-cost-for-tickets/)
* [Maximum Value of K Coins From Piles](https://leetcode.com/problems/maximum-value-of-k-coins-from-piles/)
* [Minimum Number of Operations to Convert Time](https://leetcode.com/problems/minimum-number-of-operations-to-convert-time/)
* [Minimum Cost to Split an Array](https://leetcode.com/problems/minimum-cost-to-split-an-array/)
* [Count of Sub-Multisets With Bounded Sum](https://leetcode.com/problems/count-of-sub-multisets-with-bounded-sum/)
* [Length of the Longest Subsequence That Sums to Target](https://leetcode.com/problems/length-of-the-longest-subsequence-that-sums-to-target/)
* [Minimum Number of Coins to be Added](https://leetcode.com/problems/minimum-number-of-coins-to-be-added/)
* [Most Expensive Item That Can Not Be Bought](https://leetcode.com/problems/most-expensive-item-that-can-not-be-bought/)
* [Inverse Coin Change](https://leetcode.com/problems/inverse-coin-change/)
* [Minimum Days to Score Exactly N Points](https://leetcode.com/problems/minimum-days-to-score-exactly-n-points/)

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
