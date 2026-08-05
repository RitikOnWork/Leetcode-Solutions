# 3561. Remove Methods From Project

## 🔗 Original Problem

[LeetCode - Remove Methods From Project](https://leetcode.com/problems/remove-methods-from-project/)

---

## 📝 Problem Statement

You are maintaining a project that has `n` methods numbered from `0` to `n - 1`.

You are given two integers `n` and `k`, and a 2D integer array `invocations`, where `invocations[i] = [a<sub>i</sub>, b<sub>i</sub>]` indicates that method `a<sub>i</sub>` invokes method `b<sub>i</sub>`.

There is a known bug in method `k`. Method `k`, along with any method invoked by it, either **directly** or **indirectly**, are considered **suspicious** and we aim to remove them.

A group of methods can only be removed if no method **outside** the group invokes any methods **within** it.

Return an array containing all the remaining methods after removing all the **suspicious** methods. You may return the answer in *any order*. If it is not possible to remove **all** the suspicious methods, **none** should be removed.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">n = 4, k = 1, invocations = [[1,2],[0,1],[3,2]]</span>

**Output:** <span class="example-io">[0,1,2,3]</span>

**Explanation:**

<img alt="" src="https://assets.leetcode.com/uploads/2024/07/18/graph-2.png" style="width: 200px; height: 200px;" />

Method 2 and method 1 are suspicious, but they are directly invoked by methods 3 and 0, which are not suspicious. We return all elements without removing anything.
</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">n = 5, k = 0, invocations = [[1,2],[0,2],[0,1],[3,4]]</span>

**Output:** <span class="example-io">[3,4]</span>

**Explanation:**

<img alt="" src="https://assets.leetcode.com/uploads/2024/07/18/graph-3.png" style="width: 200px; height: 200px;" />

Methods 0, 1, and 2 are suspicious and they are not directly invoked by any other method. We can remove them.
</div>

**Example 3:**

<div class="example-block">

**Input:** <span class="example-io">n = 3, k = 2, invocations = [[1,2],[0,1],[2,0]]</span>

**Output:** <span class="example-io">[]</span>

**Explanation:**

<img alt="" src="https://assets.leetcode.com/uploads/2024/07/20/graph.png" style="width: 200px; height: 200px;" />

All methods are suspicious. We can remove them.
</div>

---

## 📌 Constraints

</strong>

	- `1 <= n <= 10⁵`

	- `0 <= k <= n - 1`

	- `0 <= invocations.length <= 2 * 10⁵`

	- `invocations[i] == [a<sub>i</sub>, b<sub>i</sub>]`

	- `0 <= a<sub>i</sub>, b<sub>i</sub> <= n - 1`

	- `a<sub>i</sub> != b<sub>i</sub>`

	- `invocations[i] != invocations[j]`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 3561                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 174 ms                    |
| Beats           | 68.97%                    |
| Memory          | 298.9 MB                    |
| Memory Beats    | 84.48%                    |
| Submission Date | Aug 5, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Depth-First Search
* Breadth-First Search
* Graph Theory

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
