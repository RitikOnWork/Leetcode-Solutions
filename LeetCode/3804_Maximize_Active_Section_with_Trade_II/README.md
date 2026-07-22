# 3804. Maximize Active Section with Trade II

## 🔗 Original Problem

[LeetCode - Maximize Active Section with Trade II](https://leetcode.com/problems/maximize-active-section-with-trade-ii/)

---

## 📝 Problem Statement

You are given a binary string `s` of length `n`, where:

	- `'1'` represents an **active** section.

	- `'0'` represents an **inactive** section.

You can perform **at most one trade** to maximize the number of active sections in `s`. In a trade, you:

	- Convert a contiguous block of `'1'`s that is surrounded by `'0'`s to all `'0'`s.

	- Afterward, convert a contiguous block of `'0'`s that is surrounded by `'1'`s to all `'1'`s.

Additionally, you are given a **2D array** `queries`, where `queries[i] = [l<sub>i</sub>, r<sub>i</sub>]` represents a <span data-keyword="substring-nonempty">substring</span> `s[l<sub>i</sub>...r<sub>i</sub>]`.

For each query, determine the **maximum** possible number of active sections in `s` after making the optimal trade on the substring `s[l<sub>i</sub>...r<sub>i</sub>]`.

Return an array `answer`, where `answer[i]` is the result for `queries[i]`.

**Note**

	- For each query, treat `s[l<sub>i</sub>...r<sub>i</sub>]` as if it is **augmented** with a `'1'` at both ends, forming `t = '1' + s[l<sub>i</sub>...r<sub>i</sub>] + '1'`. The augmented `'1'`s **do not** contribute to the final count.

	- The queries are independent of each other.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">s = "01", queries = [[0,1]]</span>

**Output:** <span class="example-io">[1]</span>

**Explanation:**

Because there is no block of `'1'`s surrounded by `'0'`s, no valid trade is possible. The maximum number of active sections is 1.
</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">s = "0100", queries = [[0,3],[0,2],[1,3],[2,3]]</span>

**Output:** <span class="example-io">[4,3,1,1]</span>

**Explanation:**

	<li>
	

Query `[0, 3]` &rarr; Substring `"0100"` &rarr; Augmented to `"101001"`

	Choose `"0100"`, convert `"0100"` &rarr; `"0000"` &rarr; `"1111"`.

	The final string without augmentation is `"1111"`. The maximum number of active sections is 4.
	</li>
	<li>
	

Query `[0, 2]` &rarr; Substring `"010"` &rarr; Augmented to `"10101"`

	Choose `"010"`, convert `"010"` &rarr; `"000"` &rarr; `"111"`.

	The final string without augmentation is `"1110"`. The maximum number of active sections is 3.
	</li>
	<li>
	

Query `[1, 3]` &rarr; Substring `"100"` &rarr; Augmented to `"11001"`

	Because there is no block of `'1'`s surrounded by `'0'`s, no valid trade is possible. The maximum number of active sections is 1.
	</li>
	<li>
	

Query `[2, 3]` &rarr; Substring `"00"` &rarr; Augmented to `"1001"`

	Because there is no block of `'1'`s surrounded by `'0'`s, no valid trade is possible. The maximum number of active sections is 1.
	</li>

</div>

**Example 3:**

<div class="example-block">

**Input:** <span class="example-io">s = "1000100", queries = [[1,5],[0,6],[0,4]]</span>

**Output:** <span class="example-io">[6,7,2]</span>

**Explanation:**

	<li data-end="383" data-start="217">
	

Query `[1, 5]` &rarr; Substring `"00010"` &rarr; Augmented to `"1000101"`<br data-end="285" data-start="282" />
	Choose `"00010"`, convert `"00010"` &rarr; `"00000"` &rarr; `"11111"`.

	The final string without augmentation is `"1111110"`. The maximum number of active sections is 6.
	</li>
	<li data-end="561" data-start="385">
	

Query `[0, 6]` &rarr; Substring `"1000100"` &rarr; Augmented to `"110001001"`<br data-end="457" data-start="454" />
	Choose `"000100"`, convert `"000100"` &rarr; `"000000"` &rarr; `"111111"`.

	The final string without augmentation is `"1111111"`. The maximum number of active sections is 7.
	</li>
	<li data-end="741" data-start="563">
	

Query `[0, 4]` &rarr; Substring `"10001"` &rarr; Augmented to `"1100011"`<br data-end="630" data-start="627" />
	Because there is no block of `'1'`s surrounded by `'0'`s, no valid trade is possible. The maximum number of active sections is 2.
	</li>

</div>

**Example 4:**

<div class="example-block">

**Input:** <span class="example-io">s = "01010", queries = [[0,3],[1,4],[1,3]]</span>

**Output:** <span class="example-io">[4,4,2]</span>

**Explanation:**

	<li>
	

Query `[0, 3]` &rarr; Substring `"0101"` &rarr; Augmented to `"101011"`

	Choose `"010"`, convert `"010"` &rarr; `"000"` &rarr; `"111"`.

	The final string without augmentation is `"11110"`. The maximum number of active sections is 4.
	</li>
	<li>
	

Query `[1, 4]` &rarr; Substring `"1010"` &rarr; Augmented to `"110101"`

	Choose `"010"`, convert `"010"` &rarr; `"000"` &rarr; `"111"`.

	The final string without augmentation is `"01111"`. The maximum number of active sections is 4.
	</li>
	<li>
	

Query `[1, 3]` &rarr; Substring `"101"` &rarr; Augmented to `"11011"`

	Because there is no block of `'1'`s surrounded by `'0'`s, no valid trade is possible. The maximum number of active sections is 2.
	</li>

</div>

---

## 📌 Constraints

</strong>

	- `1 <= n == s.length <= 10⁵`

	- `1 <= queries.length <= 10⁵`

	- `s[i]` is either `'0'` or `'1'`.

	- `queries[i] = [l<sub>i</sub>, r<sub>i</sub>]`

	- `0 <= l<sub>i</sub> <= r<sub>i</sub> < n`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 3804                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 57 ms                    |
| Beats           | 87.10%                    |
| Memory          | 279.5 MB                    |
| Memory Beats    | 38.71%                    |
| Submission Date | Jul 22, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* String
* Binary Search
* Segment Tree

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
