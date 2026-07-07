# 4135. Concatenate Non-Zero Digits and Multiply by Sum I

## 🔗 Original Problem

[LeetCode - Concatenate Non-Zero Digits and Multiply by Sum I](https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/)

---

## 📝 Problem Statement

You are given an integer `n`.

Form a new integer `x` by concatenating all the **non-zero digits** of `n` in their original order. If there are no **non-zero** digits, `x = 0`.

Let `sum` be the **sum of digits** in `x`.

Return an integer representing the value of `x * sum`.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">n = 10203004</span>

**Output:** <span class="example-io">12340</span>

**Explanation:**

	- The non-zero digits are 1, 2, 3, and 4. Thus, `x = 1234`.

	- The sum of digits is `sum = 1 + 2 + 3 + 4 = 10`.

	- Therefore, the answer is `x * sum = 1234 * 10 = 12340`.

</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">n = 1000</span>

**Output:** <span class="example-io">1</span>

**Explanation:**

	- The non-zero digit is 1, so `x = 1` and `sum = 1`.

	- Therefore, the answer is `x * sum = 1 * 1 = 1`.

</div>

---

## 📌 Constraints

</strong>

	- `0 <= n <= 10⁹`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 4135                    |
| Difficulty      | Easy                    |
| Language        | C++                     |
| Runtime         | 0 ms                    |
| Beats           | 100.00%                    |
| Memory          | 9.3 MB                    |
| Memory Beats    | 16.67%                    |
| Submission Date | Jul 7, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Math

---

## 📚 Related Topics

* None

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
