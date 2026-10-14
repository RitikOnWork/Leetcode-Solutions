# 4084. Maximize Sum of Squares of Digits

## 🔗 Original Problem

[LeetCode - Maximize Sum of Squares of Digits](https://leetcode.com/problems/maximize-sum-of-squares-of-digits/)

---

## 📝 Problem Statement

You are given two **positive** integers `num` and `sum`.

A positive integer `n` is **good** if it satisfies both of the following:

	- The number of digits in `n` is **exactly** `num`.

	- The sum of digits in `n` is **exactly** `sum`.

The **score** of a **good** integer `n` is the sum of the squares of digits in `n`.

Return a **string** denoting the **good** integer `n` that achieves the **maximum** **score**. If there are multiple possible integers, return the **maximum **​​​​​​​one. If no such integer exists, return an empty string.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">num = 2, sum = 3</span>

**Output:** <span class="example-io">"30"</span>

**Explanation:**

There are 3 good integers: 12, 21, and 30.

	- The score of 12 is `1² + 2² = 5`.

	- The score of 21 is `2² + 1² = 5`.

	- The score of 30 is `3² + 0² = 9`.

The maximum score is 9, which is achieved by the good integer 30. Therefore, the answer is `"30"`.
</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">num = 2, sum = 17</span>

**Output:** <span class="example-io">"98"</span>

**Explanation:**

There are 2 good integers: 89 and 98.

	- The score of 89 is `8² + 9² = 145`.

	- The score of 98 is `9² + 8² = 145`.

The maximum score is 145. The maximum good integer that achieves this score is 98. Therefore, the answer is `"98"`.
</div>

**Example 3:**

<div class="example-block">

**Input:** <span class="example-io">num = 1, sum = 10</span>

**Output:** <span class="example-io">""</span>

**Explanation:**

There are no integers that have exactly 1 digit and whose digits sum to 10. Therefore, the answer is `""`.
</div>

---

## 📌 Constraints

</strong>

	- `1 <= num <= 2 * 10⁵`

	- `1 <= sum <= 2 * 10⁶`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 4084                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 8 ms                    |
| Beats           | 89.85%                    |
| Memory          | 54.7 MB                    |
| Memory Beats    | 87.82%                    |
| Submission Date | Oct 15, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Math
* Greedy

---

## 📚 Related Topics

* None

---

## 📈 Complexity

* **Time Complexity:** O(1)
* **Space Complexity:** O(1)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
