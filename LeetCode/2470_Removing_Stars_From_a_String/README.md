# 2470. Removing Stars From a String

## 🔗 Original Problem

[LeetCode - Removing Stars From a String](https://leetcode.com/problems/removing-stars-from-a-string/)

---

## 📝 Problem Statement

You are given a string `s`, which contains stars `*`.

In one operation, you can:

	- Choose a star in `s`.

	- Remove the closest **non-star** character to its **left**, as well as remove the star itself.

Return *the string after **all** stars have been removed*.

**Note:**

	- The input will be generated such that the operation is always possible.

	- It can be shown that the resulting string will always be unique.

---

## 💡 Examples

**Example 1:**

**Input:** s = "leet**cod*e"
**Output:** "lecoe"
**Explanation:** Performing the removals from left to right:
- The closest character to the 1^s^t star is 't' in "lee**<u>t</u>****cod*e". s becomes "lee*cod*e".
- The closest character to the 2ⁿ^d star is 'e' in "le**<u>e</u>***cod*e". s becomes "lecod*e".
- The closest character to the 3^r^d star is 'd' in "leco**<u>d</u>***e". s becomes "lecoe".
There are no more stars, so we return "lecoe".</pre>

**Example 2:**

**Input:** s = "erase*****"
**Output:** ""
**Explanation:** The entire string is removed, so we return an empty string.
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= s.length <= 10⁵`

	- `s` consists of lowercase English letters and stars `*`.

	- The operation above can be performed on `s`.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 2470                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 7 ms                    |
| Beats           | 96.94%                    |
| Memory          | 29.7 MB                    |
| Memory Beats    | 37.76%                    |
| Submission Date | Aug 13, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* String
* Stack
* Simulation

---

## 📚 Related Topics

* [Backspace String Compare](https://leetcode.com/problems/backspace-string-compare/)
* [Remove All Adjacent Duplicates In String](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
