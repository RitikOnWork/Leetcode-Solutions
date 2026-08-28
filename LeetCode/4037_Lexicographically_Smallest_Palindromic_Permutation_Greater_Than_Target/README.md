# 4037. Lexicographically Smallest Palindromic Permutation Greater Than Target

## 🔗 Original Problem

[LeetCode - Lexicographically Smallest Palindromic Permutation Greater Than Target](https://leetcode.com/problems/lexicographically-smallest-palindromic-permutation-greater-than-target/)

---

## 📝 Problem Statement

You are given two strings `s` and `target`, each of length `n`, consisting of lowercase English letters.

Return the **<span data-keyword="lexicographically-smaller-string">lexicographically smallest</span> string** that is **both** a **<span data-keyword="palindrome-string">palindromic</span> <span data-keyword="permutation">permutation</span>** of `s` and **strictly** greater than `target`. If no such permutation exists, return an empty string.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">s = "baba", target = "abba"</span>

**Output:** <span class="example-io">"baab"</span>

**Explanation:**

	- The palindromic permutations of `s` (in lexicographical order) are `"abba"` and `"baab"`.

	- The lexicographically smallest permutation that is strictly greater than `target` is `"baab"`.

</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">s = "baba", target = "bbaa"</span>

**Output:** <span class="example-io">""</span>

**Explanation:**

	- The palindromic permutations of `s` (in lexicographical order) are `"abba"` and `"baab"`.

	- None of them is lexicographically strictly greater than `target`. Therefore, the answer is `""`.

</div>

**Example 3:**

<div class="example-block">

**Input:** <span class="example-io">s = "abc", target = "abb"</span>

**Output:** <span class="example-io">""</span>

**Explanation:**

`s` has no palindromic permutations. Therefore, the answer is `""`.
</div>

**Example 4:**

<div class="example-block">

**Input:** <span class="example-io">s = "aac", target = "abb"</span>

**Output:** <span class="example-io">"aca"</span>

**Explanation:**

	- The only palindromic permutation of `s` is `"aca"`.

	- `"aca"` is strictly greater than `target`. Therefore, the answer is `"aca"`.

</div>

---

## 📌 Constraints

</strong>

	- `1 <= n == s.length == target.length <= 300`

	- `s` and `target` consist of only lowercase English letters.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 4037                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 11 ms                    |
| Beats           | 32.31%                    |
| Memory          | 13.7 MB                    |
| Memory Beats    | 43.08%                    |
| Submission Date | Aug 28, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Two Pointers
* String
* Enumeration

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
