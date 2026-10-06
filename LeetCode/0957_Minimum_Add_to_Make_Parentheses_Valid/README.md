# 0957. Minimum Add to Make Parentheses Valid

## 🔗 Original Problem

[LeetCode - Minimum Add to Make Parentheses Valid](https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/)

---

## 📝 Problem Statement

A parentheses string is valid if and only if:

	- It is the empty string,

	- It can be written as `AB` (`A` concatenated with `B`), where `A` and `B` are valid strings, or

	- It can be written as `(A)`, where `A` is a valid string.

You are given a parentheses string `s`. In one move, you can insert a parenthesis at any position of the string.

	- For example, if `s = "()))"`, you can insert an opening parenthesis to be `"(**(**)))"` or a closing parenthesis to be `"())**)**)"`.

Return *the minimum number of moves required to make *`s`* valid*.

---

## 💡 Examples

**Example 1:**

**Input:** s = "())"
**Output:** 1
</pre>

**Example 2:**

**Input:** s = "((("
**Output:** 3
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= s.length <= 1000`

	- `s[i]` is either `'('` or `')'`.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0957                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 0 ms                    |
| Beats           | 100.00%                    |
| Memory          | 8.3 MB                    |
| Memory Beats    | 96.26%                    |
| Submission Date | Oct 6, 2026 |

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
