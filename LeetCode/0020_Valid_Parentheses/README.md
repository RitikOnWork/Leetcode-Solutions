# 0020. Valid Parentheses

## 🔗 Original Problem

[LeetCode - Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

---

## 📝 Problem Statement

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:

	- Open brackets must be closed by the same type of brackets.

	- Open brackets must be closed in the correct order.

	- Every close bracket has a corresponding open bracket of the same type.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">s = "()"</span>

**Output:** <span class="example-io">true</span>
</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">s = "()[]{}"</span>

**Output:** <span class="example-io">true</span>
</div>

**Example 3:**

<div class="example-block">

**Input:** <span class="example-io">s = "(]"</span>

**Output:** <span class="example-io">false</span>
</div>

**Example 4:**

<div class="example-block">

**Input:** <span class="example-io">s = "([])"</span>

**Output:** <span class="example-io">true</span>
</div>

**Example 5:**

<div class="example-block">

**Input:** <span class="example-io">s = "([)]"</span>

**Output:** <span class="example-io">false</span>
</div>

---

## 📌 Constraints

</strong>

	- `1 <= s.length <= 10⁴`

	- `s` consists of parentheses only `'()[]{}'`.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0020                    |
| Difficulty      | Easy                    |
| Language        | C++                     |
| Runtime         | 0 ms                    |
| Beats           | 100.00%                    |
| Memory          | 9 MB                    |
| Memory Beats    | 36.98%                    |
| Submission Date | Oct 2, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* String
* Stack
* Bracket Sequences

---

## 📚 Related Topics

* [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)
* [Longest Valid Parentheses](https://leetcode.com/problems/longest-valid-parentheses/)
* [Remove Invalid Parentheses](https://leetcode.com/problems/remove-invalid-parentheses/)
* [Check If Word Is Valid After Substitutions](https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/)
* [Check if a Parentheses String Can Be Valid](https://leetcode.com/problems/check-if-a-parentheses-string-can-be-valid/)
* [Move Pieces to Obtain a String](https://leetcode.com/problems/move-pieces-to-obtain-a-string/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
