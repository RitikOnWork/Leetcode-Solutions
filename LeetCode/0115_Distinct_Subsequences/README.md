# 0115. Distinct Subsequences

## 🔗 Original Problem

[LeetCode - Distinct Subsequences](https://leetcode.com/problems/distinct-subsequences/)

---

## 📝 Problem Statement

Given two strings s and t, return *the number of distinct* ***subsequences**** of *s* which equals *t.

The test cases are generated so that the answer fits on a 32-bit signed integer.

---

## 💡 Examples

**Example 1:**

**Input:** s = "rabbbit", t = "rabbit"
**Output:** 3
**Explanation:**
As shown below, there are 3 ways you can generate "rabbit" from s.
`**<u>rabb</u>**b**<u>it</u>**`
`**<u>ra</u>**b**<u>bbit</u>**`
`**<u>rab</u>**b**<u>bit</u>**`
</pre>

**Example 2:**

**Input:** s = "babgbag", t = "bag"
**Output:** 5
**Explanation:**
As shown below, there are 5 ways you can generate "bag" from s.
`**<u>ba</u>**b<u>**g**</u>bag`
`**<u>ba</u>**bgba**<u>g</u>**`
`<u>**b**</u>abgb**<u>ag</u>**`
`ba<u>**b**</u>gb<u>**ag**</u>`
`babg**<u>bag</u>**`</pre>

---

## 📌 Constraints

</strong>

	- `1 <= s.length, t.length <= 1000`

	- `s` and `t` consist of English letters.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0115                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 1 ms                    |
| Beats           | 99.94%                    |
| Memory          | 8.8 MB                    |
| Memory Beats    | 98.28%                    |
| Submission Date | Sep 6, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* String
* Dynamic Programming

---

## 📚 Related Topics

* [Number of Unique Good Subsequences](https://leetcode.com/problems/number-of-unique-good-subsequences/)

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
