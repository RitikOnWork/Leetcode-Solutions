# 3840. Find X Value of Array II

## 🔗 Original Problem

[LeetCode - Find X Value of Array II](https://leetcode.com/problems/find-x-value-of-array-ii/)

---

## 📝 Problem Statement

You are given an array of **positive** integers `nums` and a **positive** integer `k`. You are also given a 2D array `queries`, where `queries[i] = [index<sub>i</sub>, value<sub>i</sub>, start<sub>i</sub>, x<sub>i</sub>]`.

You are allowed to perform an operation **once** on `nums`, where you can remove any **suffix** from `nums` such that `nums` remains **non-empty**.

The **x-value** of `nums` **for a given** `x` is defined as the number of ways to perform this operation so that the **product** of the remaining elements leaves a *remainder* of `x` **modulo** `k`.

For each query in `queries` you need to determine the **x-value** of `nums` for `x<sub>i</sub>` after performing the following actions:

	- Update `nums[index<sub>i</sub>]` to `value<sub>i</sub>`. Only this step persists for the rest of the queries.

	- **Remove** the prefix `nums[0..(start<sub>i</sub> - 1)]` (where `nums[0..(-1)]` will be used to represent the **empty** prefix).

Return an array `result` of size `queries.length` where `result[i]` is the answer for the `i^t^h` query.

A **prefix** of an array is a <span data-keyword="subarray">subarray</span> that starts from the beginning of the array and extends to any point within it.

A **suffix** of an array is a <span data-keyword="subarray">subarray</span> that starts at any point within the array and extends to the end of the array.

**Note** that the prefix and suffix to be chosen for the operation can be **empty**.

**Note** that x-value has a *different* definition in this version.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">nums = [1,2,3,4,5], k = 3, queries = [[2,2,0,2],[3,3,3,0],[0,1,0,1]]</span>

**Output:** <span class="example-io">[2,2,2]</span>

**Explanation:**

	<li>For query 0, `nums` becomes `[1, 2, 2, 4, 5]`, and the empty prefix **must** be removed. The possible operations are:

	

		- Remove the suffix `[2, 4, 5]`. `nums` becomes `[1, 2]`.

		- Remove the empty suffix. `nums` becomes `[1, 2, 2, 4, 5]` with a product 80, which gives remainder 2 when divided by 3.

	

	</li>
	<li>For query 1, `nums` becomes `[1, 2, 2, 3, 5]`, and the prefix `[1, 2, 2]` **must** be removed. The possible operations are:
	

		- Remove the empty suffix. `nums` becomes `[3, 5]`.

		- Remove the suffix `[5]`. `nums` becomes `[3]`.

	

	</li>
	<li>For query 2, `nums` becomes `[1, 2, 2, 3, 5]`, and the empty prefix **must** be removed. The possible operations are:
	

		- Remove the suffix `[2, 2, 3, 5]`. `nums` becomes `[1]`.

		- Remove the suffix `[3, 5]`. `nums` becomes `[1, 2, 2]`.

	

	</li>

</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">nums = [1,2,4,8,16,32], k = 4, queries = [[0,2,0,2],[0,2,0,1]]</span>

**Output:** <span class="example-io">[1,0]</span>

**Explanation:**

	<li>For query 0, `nums` becomes `[2, 2, 4, 8, 16, 32]`. The only possible operation is:

	

		- Remove the suffix `[2, 4, 8, 16, 32]`.

	

	</li>
	- For query 1, `nums` becomes `[2, 2, 4, 8, 16, 32]`. There is no possible way to perform the operation.

</div>

**Example 3:**

<div class="example-block">

**Input:** <span class="example-io">nums = [1,1,2,1,1], k = 2, queries = [[2,1,0,1]]</span>

**Output:** <span class="example-io">[5]</span>
</div>

---

## 📌 Constraints

</strong>

	- `1 <= nums[i] <= 10⁹`

	- `1 <= nums.length <= 10⁵`

	- `1 <= k <= 5`

	- `1 <= queries.length <= 2 * 10⁴`

	- `queries[i] == [index<sub>i</sub>, value<sub>i</sub>, start<sub>i</sub>, x<sub>i</sub>]`

	- `0 <= index<sub>i</sub> <= nums.length - 1`

	- `1 <= value<sub>i</sub> <= 10⁹`

	- `0 <= start<sub>i</sub> <= nums.length - 1`

	- `0 <= x<sub>i</sub> <= k - 1`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 3840                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 233 ms                    |
| Beats           | 78.18%                    |
| Memory          | 273.1 MB                    |
| Memory Beats    | 63.64%                    |
| Submission Date | Sep 23, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Math
* Segment Tree

---

## 📚 Related Topics

* [Longest Uploaded Prefix](https://leetcode.com/problems/longest-uploaded-prefix/)
* [Minimum Sum of Values by Dividing Array](https://leetcode.com/problems/minimum-sum-of-values-by-dividing-array/)

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
