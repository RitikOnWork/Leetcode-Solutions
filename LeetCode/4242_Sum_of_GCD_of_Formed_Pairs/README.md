# 4242. Sum of GCD of Formed Pairs

## 🔗 Original Problem

[LeetCode - Sum of GCD of Formed Pairs](https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/)

---

## 📝 Problem Statement

You are given an integer array `nums` of length `n`.

Construct an array `prefixGcd` where for each index `i`:

	- Let `mx<sub>i</sub> = max(nums[0], nums[1], ..., nums[i])`.

	- `prefixGcd[i] = gcd(nums[i], mx<sub>i</sub>)`.

After constructing `prefixGcd`:

	- Sort `prefixGcd` in **non-decreasing** order.

	- Form pairs by taking the **smallest unpaired** element and the **largest unpaired** element.

	- Repeat this process until no more pairs can be formed.

	- For each formed pair, **compute** the `gcd` of the two elements.

	- If `n` is odd, the **middle** element in the `prefixGcd` array remains **unpaired** and should be ignored.

Return an integer denoting the **sum of the GCD** values of all formed pairs.
The term `gcd(a, b)` denotes the **greatest common divisor** of `a` and `b`.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">nums = [2,6,4]</span>

**Output:** <span class="example-io">2</span>

**Explanation:**

Construct `prefixGcd`:

<table style="border: 1px solid black;">
	<thead>
		<tr>
			<th style="border: 1px solid black;">`i`</th>
			<th style="border: 1px solid black;">`nums[i]`</th>
			<th style="border: 1px solid black;">`mx<sub>i</sub>`</th>
			<th style="border: 1px solid black;">`prefixGcd[i]`</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td style="border: 1px solid black;">0</td>
			<td style="border: 1px solid black;">2</td>
			<td style="border: 1px solid black;">2</td>
			<td style="border: 1px solid black;">2</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;">1</td>
			<td style="border: 1px solid black;">6</td>
			<td style="border: 1px solid black;">6</td>
			<td style="border: 1px solid black;">6</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;">2</td>
			<td style="border: 1px solid black;">4</td>
			<td style="border: 1px solid black;">6</td>
			<td style="border: 1px solid black;">2</td>
		</tr>
	</tbody>
</table>

`prefixGcd = [2, 6, 2]`. After sorting, it forms `[2, 2, 6]`.

Pair the smallest and largest elements: `gcd(2, 6) = 2`. The remaining middle element 2 is ignored. Thus, the sum is 2.
</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">nums = [3,6,2,8]</span>

**Output:** <span class="example-io">5</span>

**Explanation:**

Construct `prefixGcd`:

<table style="border: 1px solid black;">
	<thead>
		<tr>
			<th style="border: 1px solid black;">`i`</th>
			<th style="border: 1px solid black;">`nums[i]`</th>
			<th style="border: 1px solid black;">`mx<sub>i</sub>`</th>
			<th style="border: 1px solid black;">`prefixGcd[i]`</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td style="border: 1px solid black;">0</td>
			<td style="border: 1px solid black;">3</td>
			<td style="border: 1px solid black;">3</td>
			<td style="border: 1px solid black;">3</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;">1</td>
			<td style="border: 1px solid black;">6</td>
			<td style="border: 1px solid black;">6</td>
			<td style="border: 1px solid black;">6</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;">2</td>
			<td style="border: 1px solid black;">2</td>
			<td style="border: 1px solid black;">6</td>
			<td style="border: 1px solid black;">2</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;">3</td>
			<td style="border: 1px solid black;">8</td>
			<td style="border: 1px solid black;">8</td>
			<td style="border: 1px solid black;">8</td>
		</tr>
	</tbody>
</table>

`prefixGcd = [3, 6, 2, 8]`. After sorting, it forms `[2, 3, 6, 8]`.

Form pairs: `gcd(2, 8) = 2` and `gcd(3, 6) = 3`. Thus, the sum is `2 + 3 = 5`.
</div>

---

## 📌 Constraints

</strong>

	- `1 <= n == nums.length <= 10⁵`

	- `1 <= nums[i] <= 10^​^​^​^​^​^​^​⁹`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 4242                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 81 ms                    |
| Beats           | 29.95%                    |
| Memory          | 162.8 MB                    |
| Memory Beats    | 31.03%                    |
| Submission Date | Jul 16, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Math
* Two Pointers
* Sorting
* Simulation
* Number Theory

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
