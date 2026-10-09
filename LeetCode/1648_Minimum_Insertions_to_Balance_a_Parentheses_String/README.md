# 1648. Minimum Insertions to Balance a Parentheses String

## 🔗 Original Problem

[LeetCode - Minimum Insertions to Balance a Parentheses String](https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/)

---

## 📝 Problem Statement

Given a parentheses string `s` containing only the characters `'('` and `')'`. A parentheses string is **balanced** if:

	- Any left parenthesis `'('` must have a corresponding two consecutive right parenthesis `'))'`.

	- Left parenthesis `'('` must go before the corresponding two consecutive right parenthesis `'))'`.

In other words, we treat `'('` as an opening parenthesis and `'))'` as a closing parenthesis.

	- For example, `"())"`, `"())(())))"` and `"(())())))"` are balanced, `")()"`, `"()))"` and `"(()))"` are not balanced.

You can insert the characters `'('` and `')'` at any position of the string to balance it if needed.

Return *the minimum number of insertions* needed to make `s` balanced.

---

## 💡 Examples

**Example 1:**

**Input:** s = "(()))"
**Output:** 1
**Explanation:** The second '(' has two matching '))', but the first '(' has only ')' matching. We need to add one more ')' at the end of the string to be "(())))" which is balanced.
</pre>

**Example 2:**

**Input:** s = "())"
**Output:** 0
**Explanation:** The string is already balanced.
</pre>

**Example 3:**

**Input:** s = "))())("
**Output:** 3
**Explanation:** Add '(' to match the first '))', Add '))' to match the last '('.
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= s.length <= 10⁵`

	- `s` consists of `'('` and `')'` only.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 1648                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 3 ms                    |
| Beats           | 81.68%                    |
| Memory          | 15.6 MB                    |
| Memory Beats    | 76.37%                    |
| Submission Date | Oct 9, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* String
* Stack
* Greedy
* Bracket Sequences

---

## 📚 Related Topics

* [Minimum Number of Swaps to Make the String Balanced](https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
