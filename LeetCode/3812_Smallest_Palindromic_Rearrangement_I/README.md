# 3812. Smallest Palindromic Rearrangement I

## 🔗 Original Problem

[LeetCode - Smallest Palindromic Rearrangement I](https://leetcode.com/problems/smallest-palindromic-rearrangement-i/)

---

## 📝 Problem Statement

You are given a **<span data-keyword="palindrome-string">palindromic</span>** string `s`.

Return the **<span data-keyword="lexicographically-smaller-string">lexicographically smallest</span>** palindromic <span data-keyword="permutation-string">permutation</span> of `s`.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">s = "z"</span>

**Output:** <span class="example-io">"z"</span>

**Explanation:**

A string of only one character is already the lexicographically smallest palindrome.
</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">s = "babab"</span>

**Output:** <span class="example-io">"abbba"</span>

**Explanation:**

Rearranging `"babab"` &rarr; `"abbba"` gives the smallest lexicographic palindrome.
</div>

**Example 3:**

<div class="example-block">

**Input:** <span class="example-io">s = "daccad"</span>

**Output:** <span class="example-io">"acddca"</span>

**Explanation:**

Rearranging `"daccad"` &rarr; `"acddca"` gives the smallest lexicographic palindrome.
</div>

---

## 📌 Constraints

</strong>

	- `1 <= s.length <= 10⁵`

	- `s` consists of lowercase English letters.

	- `s` is guaranteed to be palindromic.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 3812                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 26 ms                    |
| Beats           | 75.82%                    |
| Memory          | 73.9 MB                    |
| Memory Beats    | 43.74%                    |
| Submission Date | Jul 28, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* String
* Sorting
* Counting Sort

---

## 📚 Related Topics

* [Shortest Palindrome](https://leetcode.com/problems/shortest-palindrome/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
