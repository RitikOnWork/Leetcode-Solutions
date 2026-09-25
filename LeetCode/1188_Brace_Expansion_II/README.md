# 1188. Brace Expansion II

## 🔗 Original Problem

[LeetCode - Brace Expansion II](https://leetcode.com/problems/brace-expansion-ii/)

---

## 📝 Problem Statement

Under the grammar given below, strings can represent a set of lowercase words. Let `R(expr)` denote the set of words the expression represents.

The grammar can best be understood through simple examples:

	<li>Single letters represent a singleton set containing that word.
	

		- `R("a") = {"a"}`

		- `R("w") = {"w"}`

	

	</li>
	<li>When we take a comma-delimited list of two or more expressions, we take the union of possibilities.
	

		- `R("{a,b,c}") = {"a","b","c"}`

		- `R("{{a,b},{b,c}}") = {"a","b","c"}` (notice the final set only contains each word at most once)

	

	</li>
	<li>When we concatenate two expressions, we take the set of possible concatenations between two words where the first word comes from the first expression and the second word comes from the second expression.
	

		- `R("{a,b}{c,d}") = {"ac","ad","bc","bd"}`

		- `R("a{b,c}{d,e}f{g,h}") = {"abdfg", "abdfh", "abefg", "abefh", "acdfg", "acdfh", "acefg", "acefh"}`

	

	</li>

Formally, the three rules for our grammar:

	- For every lowercase letter `x`, we have `R(x) = {x}`.

	- For expressions `e<sub>1</sub>, e<sub>2</sub>, ... , e<sub>k</sub>` with `k >= 2`, we have `R({e<sub>1</sub>, e<sub>2</sub>, ...}) = R(e<sub>1</sub>) &cup; R(e<sub>2</sub>) &cup; ...`

	- For expressions `e<sub>1</sub>` and `e<sub>2</sub>`, we have `R(e<sub>1</sub> + e<sub>2</sub>) = {a + b for (a, b) in R(e<sub>1</sub>) &times; R(e<sub>2</sub>)}`, where `+` denotes concatenation, and `&times;` denotes the cartesian product.

Given an expression representing a set of words under the given grammar, return *the sorted list of words that the expression represents*.

---

## 💡 Examples

**Example 1:**

**Input:** expression = "{a,b}{c,{d,e}}"
**Output:** ["ac","ad","ae","bc","bd","be"]
</pre>

**Example 2:**

**Input:** expression = "{{a,z},a{b,c},{ab,z}}"
**Output:** ["a","ab","ac","z"]
**Explanation:** Each distinct word is written only once in the final answer.
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= expression.length <= 60`

	- `expression[i]` consists of `'{'`, `'}'`, `','`or lowercase English letters.

	- The given `expression` represents a set of words based on the grammar given in the description.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 1188                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 14 ms                    |
| Beats           | 32.14%                    |
| Memory          | 15.4 MB                    |
| Memory Beats    | 53.13%                    |
| Submission Date | Sep 25, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Hash Table
* String
* Backtracking
* Stack
* Breadth-First Search
* Sorting

---

## 📚 Related Topics

* [Brace Expansion](https://leetcode.com/problems/brace-expansion/)

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
