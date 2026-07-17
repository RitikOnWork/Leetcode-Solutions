# 3583. Sorted GCD Pair Queries

## 🔗 Original Problem

[LeetCode - Sorted GCD Pair Queries](https://leetcode.com/problems/sorted-gcd-pair-queries/)

---

## 📝 Problem Statement

You are given an integer array `nums` of length `n` and an integer array `queries`.

Let `gcdPairs` denote an array obtained by calculating the <span data-keyword="gcd-function">GCD</span> of all possible pairs `(nums[i], nums[j])`, where `0 <= i < j < n`, and then sorting these values in **ascending** order.

For each query `queries[i]`, you need to find the element at index `queries[i]` in `gcdPairs`.

Return an integer array `answer`, where `answer[i]` is the value at `gcdPairs[queries[i]]` for each query.

The term `gcd(a, b)` denotes the **greatest common divisor** of `a` and `b`.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">nums = [2,3,4], queries = [0,2,2]</span>

**Output:** <span class="example-io">[1,2,2]</span>

**Explanation:**

`gcdPairs = [gcd(nums[0], nums[1]), gcd(nums[0], nums[2]), gcd(nums[1], nums[2])] = [1, 2, 1]`.

After sorting in ascending order, `gcdPairs = [1, 1, 2]`.

So, the answer is `[gcdPairs[queries[0]], gcdPairs[queries[1]], gcdPairs[queries[2]]] = [1, 2, 2]`.
</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">nums = [4,4,2,1], queries = [5,3,1,0]</span>

**Output:** <span class="example-io">[4,2,1,1]</span>

**Explanation:**

`gcdPairs` sorted in ascending order is `[1, 1, 1, 2, 2, 4]`.
</div>

**Example 3:**

<div class="example-block">

**Input:** <span class="example-io">nums = [2,2], queries = [0,0]</span>

**Output:** <span class="example-io">[2,2]</span>

**Explanation:**

`gcdPairs = [2]`.
</div>

---

## 📌 Constraints

</strong>

	- `2 <= n == nums.length <= 10⁵`

	- `1 <= nums[i] <= 5 * 10⁴`

	- `1 <= queries.length <= 10⁵`

	- `0 <= queries[i] < n * (n - 1) / 2`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 3583                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 46 ms                    |
| Beats           | 56.00%                    |
| Memory          | 132.1 MB                    |
| Memory Beats    | 38.67%                    |
| Submission Date | Jul 17, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Hash Table
* Math
* Binary Search
* Combinatorics
* Counting
* Number Theory
* Prefix Sum

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
