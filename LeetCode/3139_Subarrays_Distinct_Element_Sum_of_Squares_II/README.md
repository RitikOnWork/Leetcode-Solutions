# 3139. Subarrays Distinct Element Sum of Squares II

## 🔗 Original Problem

[LeetCode - Subarrays Distinct Element Sum of Squares II](https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-ii/)

---

## 📝 Problem Statement

You are given a **0-indexed **integer array `nums`.

The **distinct count** of a subarray of `nums` is defined as:

	- Let `nums[i..j]` be a subarray of `nums` consisting of all the indices from `i` to `j` such that `0 <= i <= j < nums.length`. Then the number of distinct values in `nums[i..j]` is called the distinct count of `nums[i..j]`.

Return *the sum of the **squares** of **distinct counts** of all subarrays of *`nums`.

Since the answer may be very large, return it **modulo** `10⁹ + 7`.

A subarray is a contiguous **non-empty** sequence of elements within an array.

---

## 💡 Examples

**Example 1:**

**Input:** nums = [1,2,1]
**Output:** 15
**Explanation:** Six possible subarrays are:
[1]: 1 distinct value
[2]: 1 distinct value
[1]: 1 distinct value
[1,2]: 2 distinct values
[2,1]: 2 distinct values
[1,2,1]: 2 distinct values
The sum of the squares of the distinct counts in all subarrays is equal to 1² + 1² + 1² + 2² + 2² + 2² = 15.
</pre>

**Example 2:**

**Input:** nums = [2,2]
**Output:** 3
**Explanation:** Three possible subarrays are:
[2]: 1 distinct value
[2]: 1 distinct value
[2,2]: 1 distinct value
The sum of the squares of the distinct counts in all subarrays is equal to 1² + 1² + 1² = 3.</pre>

---

## 📌 Constraints

</strong>

	- `1 <= nums.length <= 10⁵`

	- `1 <= nums[i] <= 10⁵`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 3139                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 317 ms                    |
| Beats           | 54.55%                    |
| Memory          | 148.5 MB                    |
| Memory Beats    | 61.04%                    |
| Submission Date | Oct 16, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Hash Table
* Binary Indexed Tree
* Segment Tree

---

## 📚 Related Topics

* None

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
