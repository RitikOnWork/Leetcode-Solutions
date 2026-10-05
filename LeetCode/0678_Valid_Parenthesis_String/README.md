# 0678. Valid Parenthesis String

## 🔗 Original Problem

[LeetCode - Valid Parenthesis String](https://leetcode.com/problems/valid-parenthesis-string/)

---

## 📝 Problem Statement

Given a string `s` containing only three types of characters: `'('`, `')'` and `'*'`, return `true` *if* `s` *is **valid***.

The following rules define a **valid** string:

	- Any left parenthesis `'('` must have a corresponding right parenthesis `')'`.

	- Any right parenthesis `')'` must have a corresponding left parenthesis `'('`.

	- Left parenthesis `'('` must go before the corresponding right parenthesis `')'`.

	- `'*'` could be treated as a single right parenthesis `')'` or a single left parenthesis `'('` or an empty string `""`.

---

## 💡 Examples

**Example 1:**

**Input:** s = "()"
**Output:** true
</pre>

**Example 2:**

**Input:** s = "(*)"
**Output:** true
</pre>

**Example 3:**

**Input:** s = "(*))"
**Output:** true
</pre>

**Example 4:**

**Input:** s = "("
**Output:** false
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= s.length <= 100`

	- `s[i]` is `'('`, `')'` or `'*'`.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0678                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 27 ms                    |
| Beats           | 5.02%                    |
| Memory          | 31.6 MB                    |
| Memory Beats    | 5.02%                    |
| Submission Date | Oct 5, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* String
* Dynamic Programming
* Stack
* Greedy
* Bracket Sequences

---

## 📚 Related Topics

* [Special Binary String](https://leetcode.com/problems/special-binary-string/)
* [Check if a Parentheses String Can Be Valid](https://leetcode.com/problems/check-if-a-parentheses-string-can-be-valid/)

---

## 📈 Complexity

* **Time Complexity:** O(1)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
