# 4220. Minimum Operations to Sort a String

## 🔗 Original Problem

[LeetCode - Minimum Operations to Sort a String](https://leetcode.com/problems/minimum-operations-to-sort-a-string/)

---

## 📝 Problem Statement

You are given a string `s` consisting of lowercase English letters.

In one operation, you can select any **<span data-keyword="substring-nonempty">substring</span>** of `s` that is **not** the entire string and **sort** it in **non-descending alphabetical** order.

Return the **minimum** number of operations required to make `s` sorted in **non-descending** order. If it is not possible, return -1.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">s = "dog"</span>

**Output:** <span class="example-io">1</span>

**Explanation:**​​​​​​​

	- Sort substring `"og"` to `"go"`.

	- Now, `s = "dgo"`, which is sorted in ascending order. Thus, the answer is 1.

</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">s = "card"</span>

**Output:** <span class="example-io">2</span>

**Explanation:**

	- Sort substring `"car"` to `"acr"`, so `s = "acrd"`.

	- Sort substring `"rd"` to `"dr"`, making `s = "acdr"`, which is sorted in ascending order. Thus, the answer is 2.

</div>

**Example 3:**

<div class="example-block">

**Input:** <span class="example-io">s = "gf"</span>

**Output:** <span class="example-io">-1</span>

**Explanation:**

	- It is impossible to sort `s` under the given constraints. Thus, the answer is -1.

</div>

---

## 📌 Constraints

</strong>

	- `1 <= s.length <= 10⁵`

	- `s` consists of only lowercase English letters.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 4220                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 11 ms                    |
| Beats           | 73.01%                    |
| Memory          | 27.4 MB                    |
| Memory Beats    | 79.65%                    |
| Submission Date | Oct 21, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* String

---

## 📚 Related Topics

* None

---

## 📈 Complexity

* **Time Complexity:** O(n log n)
* **Space Complexity:** O(1)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
