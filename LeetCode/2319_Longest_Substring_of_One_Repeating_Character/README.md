# 2319. Longest Substring of One Repeating Character

## 🔗 Original Problem

[LeetCode - Longest Substring of One Repeating Character](https://leetcode.com/problems/longest-substring-of-one-repeating-character/)

---

## 📝 Problem Statement

You are given a **0-indexed** string `s`. You are also given a **0-indexed** string `queryCharacters` of length `k` and a **0-indexed** array of integer **indices** `queryIndices` of length `k`, both of which are used to describe `k` queries.

The `i^t^h` query updates the character in `s` at index `queryIndices[i]` to the character `queryCharacters[i]`.

Return *an array* `lengths` *of length *`k`* where* `lengths[i]` *is the **length** of the **longest substring** of *`s`* consisting of **only one repeating** character **after** the* `i^t^h` *query** is performed.*

---

## 💡 Examples

**Example 1:**

**Input:** s = "babacc", queryCharacters = "bcb", queryIndices = [1,3,3]
**Output:** [3,3,4]
**Explanation:** 
- 1^s^t query updates s = "<u>b**b**b</u>acc". The longest substring consisting of one repeating character is "bbb" with length 3.
- 2ⁿ^d query updates s = "bbb<u>**c**cc</u>". 
  The longest substring consisting of one repeating character can be "bbb" or "ccc" with length 3.
- 3^r^d query updates s = "<u>bbb**b**</u>cc". The longest substring consisting of one repeating character is "bbbb" with length 4.
Thus, we return [3,3,4].
</pre>

**Example 2:**

**Input:** s = "abyzz", queryCharacters = "aa", queryIndices = [2,1]
**Output:** [2,3]
**Explanation:**
- 1^s^t query updates s = "ab**a**<u>zz</u>". The longest substring consisting of one repeating character is "zz" with length 2.
- 2ⁿ^d query updates s = "<u>a**a**a</u>zz". The longest substring consisting of one repeating character is "aaa" with length 3.
Thus, we return [2,3].
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= s.length <= 10⁵`

	- `s` consists of lowercase English letters.

	- `k == queryCharacters.length == queryIndices.length`

	- `1 <= k <= 10⁵`

	- `queryCharacters` consists of lowercase English letters.

	- `0 <= queryIndices[i] < s.length`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 2319                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 482 ms                    |
| Beats           | 17.45%                    |
| Memory          | 186 MB                    |
| Memory Beats    | 16.11%                    |
| Submission Date | Aug 13, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* String
* Segment Tree
* Ordered Set

---

## 📚 Related Topics

* [Merge Intervals](https://leetcode.com/problems/merge-intervals/)
* [Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/)
* [Consecutive Characters](https://leetcode.com/problems/consecutive-characters/)
* [Create Sorted Array through Instructions](https://leetcode.com/problems/create-sorted-array-through-instructions/)
* [Longest Increasing Subsequence II](https://leetcode.com/problems/longest-increasing-subsequence-ii/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
