# 4136. Concatenate Non-Zero Digits and Multiply by Sum II

## 🔗 Original Problem

[LeetCode - Concatenate Non-Zero Digits and Multiply by Sum II](https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-ii/)

---

## 📝 Problem Statement

You are given a string `s` of length `m` consisting of digits. You are also given a 2D integer array `queries`, where `queries[i] = [l<sub>i</sub>, r<sub>i</sub>]`.

For each `queries[i]`, extract the **<span data-keyword="substring-nonempty">substring</span>** `s[l<sub>i</sub>..r<sub>i</sub>]`. Then, perform the following:

	- Form a new integer `x` by concatenating all the **non-zero digits** from the substring in their original order. If there are no non-zero digits, `x = 0`.

	- Let `sum` be the **sum of digits** in `x`. The answer is `x * sum`.

Return an array of integers `answer` where `answer[i]` is the answer to the `i^t^h` query.

Since the answers may be very large, return them **modulo** `10⁹ + 7`.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">s = "10203004", queries = [[0,7],[1,3],[4,6]]</span>

**Output:** <span class="example-io">[12340, 4, 9]</span>

**Explanation:**

	<li>`s[0..7] = "10203004"`

	

		- `x = 1234`

		- `sum = 1 + 2 + 3 + 4 = 10`

		- Therefore, answer is `1234 * 10 = 12340`.

	

	</li>
	<li>`s[1..3] = "020"`
	

		- `x = 2`

		- `sum = 2`

		- Therefore, the answer is `2 * 2 = 4`.

	

	</li>
	<li>`s[4..6] = "300"`
	

		- `x = 3`

		- `sum = 3`

		- Therefore, the answer is `3 * 3 = 9`.

	

	</li>

</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">s = "1000", queries = [[0,3],[1,1]]</span>

**Output:** <span class="example-io">[1, 0]</span>

**Explanation:**

	<li>`s[0..3] = "1000"`

	

		- `x = 1`

		- `sum = 1`

		- Therefore, the answer is `1 * 1 = 1`.

	

	</li>
	<li>`s[1..1] = "0"`
	

		- `x = 0`

		- `sum = 0`

		- Therefore, the answer is `0 * 0 = 0`.

	

	</li>

</div>

**Example 3:**

<div class="example-block">

**Input:** <span class="example-io">s = "9876543210", queries = [[0,9]]</span>

**Output:** <span class="example-io">[444444137]</span>

**Explanation:**

	<li>`s[0..9] = "9876543210"`

	

		- `x = 987654321`

		- `sum = 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 = 45`

		- Therefore, the answer is `987654321 * 45 = 44444444445`.

		- We return `44444444445 modulo (10⁹ + 7) = 444444137`.

	

	</li>

</div>

---

## 📌 Constraints

</strong>

	- `1 <= m == s.length <= 10⁵`

	- `s` consists of digits only.

	- `1 <= queries.length <= 10⁵`

	- `queries[i] = [l<sub>i</sub>, r<sub>i</sub>]`

	- `0 <= l<sub>i</sub> <= r<sub>i</sub> < m`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 4136                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 251 ms                    |
| Beats           | 9.85%                    |
| Memory          | 259.9 MB                    |
| Memory Beats    | 5.18%                    |
| Submission Date | Jul 8, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Math
* String
* Prefix Sum

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
