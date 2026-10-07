# 0301. Remove Invalid Parentheses

## 🔗 Original Problem

[LeetCode - Remove Invalid Parentheses](https://leetcode.com/problems/remove-invalid-parentheses/)

---

## 📝 Problem Statement

Given a string `s` that contains parentheses and letters, remove the minimum number of invalid parentheses to make the input string valid.

Return *a list of **unique strings** that are valid with the minimum number of removals*. You may return the answer in **any order**.

---

## 💡 Examples

**Example 1:**

**Input:** s = "()())()"
**Output:** ["(())()","()()()"]
</pre>

**Example 2:**

**Input:** s = "(a)())()"
**Output:** ["(a())()","(a)()()"]
</pre>

**Example 3:**

**Input:** s = ")("
**Output:** [""]
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= s.length <= 25`

	- `s` consists of lowercase English letters and parentheses `'('` and `')'`.

	- There will be at most `20` parentheses in `s`.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0301                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 68 ms                    |
| Beats           | 46.05%                    |
| Memory          | 22.2 MB                    |
| Memory Beats    | 25.03%                    |
| Submission Date | Oct 7, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* String
* Backtracking
* Breadth-First Search

---

## 📚 Related Topics

* [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
* [Minimum Number of Swaps to Make the String Balanced](https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/)

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
