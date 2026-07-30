# 0374. Guess Number Higher or Lower

## 🔗 Original Problem

[LeetCode - Guess Number Higher or Lower](https://leetcode.com/problems/guess-number-higher-or-lower/)

---

## 📝 Problem Statement

We are playing the Guess Game. The game is as follows:

I pick a number from `1` to `n`. You have to guess which number I picked (the number I picked stays the same throughout the game).

Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

You call a pre-defined API `int guess(int num)`, which returns three possible results:

	- `-1`: Your guess is higher than the number I picked (i.e. `num > pick`).

	- `1`: Your guess is lower than the number I picked (i.e. `num < pick`).

	- `0`: your guess is equal to the number I picked (i.e. `num == pick`).

Return *the number that I picked*.

---

## 💡 Examples

**Example 1:**

**Input:** n = 10, pick = 6
**Output:** 6
</pre>

**Example 2:**

**Input:** n = 1, pick = 1
**Output:** 1
</pre>

**Example 3:**

**Input:** n = 2, pick = 1
**Output:** 1
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= n <= 2³¹ - 1`

	- `1 <= pick <= n`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0374                    |
| Difficulty      | Easy                    |
| Language        | C++                     |
| Runtime         | 2 ms                    |
| Beats           | 56.24%                    |
| Memory          | 8.1 MB                    |
| Memory Beats    | 6.69%                    |
| Submission Date | Jul 30, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Binary Search
* Interactive

---

## 📚 Related Topics

* [First Bad Version](https://leetcode.com/problems/first-bad-version/)
* [Guess Number Higher or Lower II](https://leetcode.com/problems/guess-number-higher-or-lower-ii/)
* [Find K Closest Elements](https://leetcode.com/problems/find-k-closest-elements/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
