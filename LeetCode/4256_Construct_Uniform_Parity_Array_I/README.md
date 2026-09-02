# 4256. Construct Uniform Parity Array I

## 🔗 Original Problem

[LeetCode - Construct Uniform Parity Array I](https://leetcode.com/problems/construct-uniform-parity-array-i/)

---

## 📝 Problem Statement

You are given an array `nums1` of `n` **distinct** integers.

You want to construct another array `nums2` of length `n` such that the elements in `nums2` are either **all odd or all even**.

For each index `i`, you must choose **exactly one** of the following (in any order):

	- `nums2[i] = nums1[i]`

	- `nums2[i] = nums1[i] - nums1[j]`, for an index `j != i`

Return `true` if it is possible to construct such an array, otherwise, return `false`.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">nums1 = [2,3]</span>

**Output:** <span class="example-io">true</span>

**Explanation:**

	- Choose `nums2[0] = nums1[0] - nums1[1] = 2 - 3 = -1`.

	- Choose `nums2[1] = nums1[1] = 3`.

	- `nums2 = [-1, 3]`, and both elements are odd. Thus, the answer is `true`​​​​​​​.

</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">nums1 = [4,6]</span>

**Output:** <span class="example-io">true</span>

**Explanation:**​​​​​​​

	- Choose `nums2[0] = nums1[0] = 4`.

	- Choose `nums2[1] = nums1[1] = 6`.

	- `nums2 = [4, 6]`, and all elements are even. Thus, the answer is `true`.

</div>

---

## 📌 Constraints

</strong>

	- `1 <= n == nums1.length <= 100`

	- `1 <= nums1[i] <= 100`

	- `nums1` consists of distinct integers.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 4256                    |
| Difficulty      | Easy                    |
| Language        | C++                     |
| Runtime         | 0 ms                    |
| Beats           | 100.00%                    |
| Memory          | 30.3 MB                    |
| Memory Beats    | 36.43%                    |
| Submission Date | Sep 2, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Math

---

## 📚 Related Topics

* None

---

## 📈 Complexity

* **Time Complexity:** O(1)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
