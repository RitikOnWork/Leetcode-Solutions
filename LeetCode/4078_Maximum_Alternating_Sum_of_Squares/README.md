# 4078. Maximum Alternating Sum of Squares

## 🔗 Original Problem

[LeetCode - Maximum Alternating Sum of Squares](https://leetcode.com/problems/maximum-alternating-sum-of-squares/)

---

## 📝 Problem Statement

You are given an integer array `nums`. You may **rearrange the elements** in any order.

The **alternating score** of an array `arr` is defined as:

	- `score = arr[0]² - arr[1]² + arr[2]² - arr[3]² + ...`

Return an integer denoting the **maximum possible alternating score** of `nums` after rearranging its elements.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">nums = [1,2,3]</span>

**Output:** <span class="example-io">12</span>

**Explanation:**

A possible rearrangement for `nums` is `[2,1,3]`, which gives the maximum alternating score among all possible rearrangements.

The alternating score is calculated as:

`score = 2² - 1² + 3² = 4 - 1 + 9 = 12`
</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">nums = [1,-1,2,-2,3,-3]</span>

**Output:** <span class="example-io">16</span>

**Explanation:**

A possible rearrangement for `nums` is `[-3,-1,-2,1,3,2]`, which gives the maximum alternating score among all possible rearrangements.

The alternating score is calculated as:

`score = (-3)² - (-1)² + (-2)² - (1)² + (3)² - (2)² = 9 - 1 + 4 - 1 + 9 - 4 = 16`
</div>

---

## 📌 Constraints

</strong>

	- `1 <= nums.length <= 10⁵`

	- `-4 * 10⁴ <= nums[i] <= 4 * 10⁴`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 4078                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 59 ms                    |
| Beats           | 59.13%                    |
| Memory          | 176 MB                    |
| Memory Beats    | 90.09%                    |
| Submission Date | Oct 14, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Greedy
* Sorting

---

## 📚 Related Topics

* None

---

## 📈 Complexity

* **Time Complexity:** O(n log n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
