# 3838. Path Existence Queries in a Graph I

## 🔗 Original Problem

[LeetCode - Path Existence Queries in a Graph I](https://leetcode.com/problems/path-existence-queries-in-a-graph-i/)

---

## 📝 Problem Statement

You are given an integer `n` representing the number of nodes in a graph, labeled from 0 to `n - 1`.

You are also given an integer array `nums` of length `n` sorted in **non-decreasing** order, and an integer `maxDiff`.

An **undirected **edge exists between nodes `i` and `j` if the **absolute** difference between `nums[i]` and `nums[j]` is **at most** `maxDiff` (i.e., `|nums[i] - nums[j]| <= maxDiff`).

You are also given a 2D integer array `queries`. For each `queries[i] = [u<sub>i</sub>, v<sub>i</sub>]`, determine whether there exists a path between nodes `u<sub>i</sub>` and `v<sub>i</sub>`.

Return a boolean array `answer`, where `answer[i]` is `true` if there exists a path between `u<sub>i</sub>` and `v<sub>i</sub>` in the `i^t^h` query and `false` otherwise.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">n = 2, nums = [1,3], maxDiff = 1, queries = [[0,0],[0,1]]</span>

**Output:** <span class="example-io">[true,false]</span>

**Explanation:**

	- Query `[0,0]`: Node 0 has a trivial path to itself.

	- Query `[0,1]`: There is no edge between Node 0 and Node 1 because `|nums[0] - nums[1]| = |1 - 3| = 2`, which is greater than `maxDiff`.

	- Thus, the final answer after processing all the queries is `[true, false]`.

</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">n = 4, nums = [2,5,6,8], maxDiff = 2, queries = [[0,1],[0,2],[1,3],[2,3]]</span>

**Output:** <span class="example-io">[false,false,true,true]</span>

**Explanation:**

The resulting graph is:

<img alt="" src="https://assets.leetcode.com/uploads/2025/03/25/screenshot-2025-03-26-at-122249.png" style="width: 300px; height: 170px;" />

	- Query `[0,1]`: There is no edge between Node 0 and Node 1 because `|nums[0] - nums[1]| = |2 - 5| = 3`, which is greater than `maxDiff`.

	- Query `[0,2]`: There is no edge between Node 0 and Node 2 because `|nums[0] - nums[2]| = |2 - 6| = 4`, which is greater than `maxDiff`.

	- Query `[1,3]`: There is a path between Node 1 and Node 3 through Node 2 since `|nums[1] - nums[2]| = |5 - 6| = 1` and `|nums[2] - nums[3]| = |6 - 8| = 2`, both of which are within `maxDiff`.

	- Query `[2,3]`: There is an edge between Node 2 and Node 3 because `|nums[2] - nums[3]| = |6 - 8| = 2`, which is equal to `maxDiff`.

	- Thus, the final answer after processing all the queries is `[false, false, true, true]`.

</div>

---

## 📌 Constraints

</strong>

	- `1 <= n == nums.length <= 10⁵`

	- `0 <= nums[i] <= 10⁵`

	- `nums` is sorted in **non-decreasing** order.

	- `0 <= maxDiff <= 10⁵`

	- `1 <= queries.length <= 10⁵`

	- `queries[i] == [u<sub>i</sub>, v<sub>i</sub>]`

	- `0 <= u<sub>i</sub>, v<sub>i</sub> < n`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 3838                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 4 ms                    |
| Beats           | 93.70%                    |
| Memory          | 224.2 MB                    |
| Memory Beats    | 60.27%                    |
| Submission Date | Jul 9, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Hash Table
* Binary Search
* Union-Find
* Graph Theory

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
