# 3820. Number of Unique XOR Triplets II

## 🔗 Original Problem

[LeetCode - Number of Unique XOR Triplets II](https://leetcode.com/problems/number-of-unique-xor-triplets-ii/)

---

## 📝 Problem Statement

You are given an integer array `nums`.

A **XOR triplet** is defined as the XOR of three elements `nums[i] XOR nums[j] XOR nums[k]` where `i <= j <= k`.

Return the number of **unique** XOR triplet values from all possible triplets `(i, j, k)`.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">nums = [1,3]</span>

**Output:** <span class="example-io">2</span>

**Explanation:**

The possible XOR triplet values are:

	- `(0, 0, 0) &rarr; 1 XOR 1 XOR 1 = 1`

	- `(0, 0, 1) &rarr; 1 XOR 1 XOR 3 = 3`

	- `(0, 1, 1) &rarr; 1 XOR 3 XOR 3 = 1`

	- `(1, 1, 1) &rarr; 3 XOR 3 XOR 3 = 3`

The unique XOR values are `{1, 3}`. Thus, the output is 2.
</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">nums = [6,7,8,9]</span>

**Output:** <span class="example-io">4</span>

**Explanation:**

The possible XOR triplet values are `{6, 7, 8, 9}`. Thus, the output is 4.
</div>

---

## 📌 Constraints

</strong>

	- `1 <= nums.length <= 1500`

	- `1 <= nums[i] <= 1500`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 3820                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 2070 ms                    |
| Beats           | 35.39%                    |
| Memory          | 98.5 MB                    |
| Memory Beats    | 28.09%                    |
| Submission Date | Jul 24, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Math
* Bit Manipulation
* Enumeration

---

## 📚 Related Topics

* None

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
