# 1087. Longest Arithmetic Subsequence

## 🔗 Original Problem

[LeetCode - Longest Arithmetic Subsequence](https://leetcode.com/problems/longest-arithmetic-subsequence/)

---

## 📝 Problem Statement

Given an array `nums` of integers, return *the length of the longest arithmetic subsequence in* `nums`.

**Note** that:

	- A **subsequence** is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

	- A sequence `seq` is arithmetic if `seq[i + 1] - seq[i]` are all the same value (for `0 <= i < seq.length - 1`).

---

## 💡 Examples

**Example 1:**

**Input:** nums = [3,6,9,12]
**Output:** 4
**Explanation: ** The whole array is an arithmetic sequence with steps of length = 3.
</pre>

**Example 2:**

**Input:** nums = [9,4,7,2,10]
**Output:** 3
**Explanation: ** The longest arithmetic subsequence is [4,7,10].
</pre>

**Example 3:**

**Input:** nums = [20,1,15,3,10,5,8]
**Output:** 4
**Explanation: ** The longest arithmetic subsequence is [20,15,10,5].
</pre>

---

## 📌 Constraints

</strong>

	- `2 <= nums.length <= 1000`

	- `0 <= nums[i] <= 500`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 1087                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 1190 ms                    |
| Beats           | 42.91%                    |
| Memory          | 248.2 MB                    |
| Memory Beats    | 33.29%                    |
| Submission Date | Jul 12, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Hash Table
* Binary Search
* Dynamic Programming

---

## 📚 Related Topics

* [Destroy Sequential Targets](https://leetcode.com/problems/destroy-sequential-targets/)

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
