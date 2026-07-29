# 3813. Smallest Palindromic Rearrangement II

## 🔗 Original Problem

[LeetCode - Smallest Palindromic Rearrangement II](https://leetcode.com/problems/smallest-palindromic-rearrangement-ii/)

---

## 📝 Problem Statement

You are given a **<span data-keyword="palindrome-string">palindromic</span>** string `s` and an integer `k`.

Return the **k-th** **<span data-keyword="lexicographically-smaller-string">lexicographically smallest</span>** palindromic <span data-keyword="permutation-string">permutation</span> of `s`. If there are fewer than `k` distinct palindromic permutations, return an empty string.

**Note:** Different rearrangements that yield the same palindromic string are considered identical and are counted once.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">s = "abba", k = 2</span>

**Output:** <span class="example-io">"baab"</span>

**Explanation:**

	- The two distinct palindromic rearrangements of `"abba"` are `"abba"` and `"baab"`.

	- Lexicographically, `"abba"` comes before `"baab"`. Since `k = 2`, the output is `"baab"`.

</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">s = "aa", k = 2</span>

**Output:** <span class="example-io">""</span>

**Explanation:**

	- There is only one palindromic rearrangement: `"aa"`.

	- The output is an empty string since `k = 2` exceeds the number of possible rearrangements.

</div>

**Example 3:**

<div class="example-block">

**Input:** <span class="example-io">s = "bacab", k = 1</span>

**Output:** <span class="example-io">"abcba"</span>

**Explanation:**

	- The two distinct palindromic rearrangements of `"bacab"` are `"abcba"` and `"bacab"`.

	- Lexicographically, `"abcba"` comes before `"bacab"`. Since `k = 1`, the output is `"abcba"`.

</div>

---

## 📌 Constraints

</strong>

	- `1 <= s.length <= 10⁴`

	- `s` consists of lowercase English letters.

	- `s` is guaranteed to be palindromic.

	- `1 <= k <= 10⁶`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 3813                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 15 ms                    |
| Beats           | 78.26%                    |
| Memory          | 17.1 MB                    |
| Memory Beats    | 66.67%                    |
| Submission Date | Jul 29, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Hash Table
* Math
* String
* Combinatorics
* Counting

---

## 📚 Related Topics

* None

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
