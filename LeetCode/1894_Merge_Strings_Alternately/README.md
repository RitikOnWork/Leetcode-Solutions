# 1894. Merge Strings Alternately

## 🔗 Original Problem

[LeetCode - Merge Strings Alternately](https://leetcode.com/problems/merge-strings-alternately/)

---

## 📝 Problem Statement

You are given two strings `word1` and `word2`. Merge the strings by adding letters in alternating order, starting with `word1`. If a string is longer than the other, append the additional letters onto the end of the merged string.


Return *the merged string.*

---

## 💡 Examples

**Example 1:**



**Input:** word1 = "abc", word2 = "pqr"
**Output:** "apbqcr"
**Explanation:** The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
</pre>


**Example 2:**



**Input:** word1 = "ab", word2 = "pqrs"
**Output:** "apbqrs"
**Explanation:** Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
</pre>


**Example 3:**



**Input:** word1 = "abcd", word2 = "pq"
**Output:** "apbqcd"
**Explanation:** Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d
</pre>

---

## 📌 Constraints

</strong>



	- `1 <= word1.length, word2.length <= 100`

	- `word1` and `word2` consist of lowercase English letters.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 1894                    |
| Difficulty      | Easy                    |
| Language        | C++                     |
| Runtime         | 0 ms                    |
| Beats           | 100.00%                    |
| Memory          | 8.5 MB                    |
| Memory Beats    | 31.73%                    |
| Submission Date | Jul 17, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Two Pointers
* String

---

## 📚 Related Topics

* [Zigzag Iterator](https://leetcode.com/problems/zigzag-iterator/)
* [Minimum Additions to Make Valid String](https://leetcode.com/problems/minimum-additions-to-make-valid-string/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
