# 3919. Network Recovery Pathways

## 🔗 Original Problem

[LeetCode - Network Recovery Pathways](https://leetcode.com/problems/network-recovery-pathways/)

---

## 📝 Problem Statement

You are given a directed acyclic graph of `n` nodes numbered from 0 to `n &minus; 1`. This is represented by a 2D array `edges` of length<font face="monospace"> `m`</font>, where `edges[i] = [u<sub>i</sub>, v<sub>i</sub>, cost<sub>i</sub>]` indicates a one‑way communication from node `u<sub>i</sub>` to node `v<sub>i</sub>` with a recovery cost of `cost<sub>i</sub>`.

Some nodes may be offline. You are given a boolean array `online` where `online[i] = true` means node `i` is online. Nodes 0 and `n &minus; 1` are always online.

A path from 0 to `n &minus; 1` is **valid** if:

	- All intermediate nodes on the path are online.

	- The total recovery cost of all edges on the path does not exceed `k`.

For each valid path, define its **score** as the minimum edge‑cost along that path.

Return the **maximum** path score (i.e., the largest **minimum**-edge cost) among all valid paths. If no valid path exists, return -1.

---

## 💡 Examples

**Example 1:**

<div class="example-block">

**Input:** <span class="example-io">edges = [[0,1,5],[1,3,10],[0,2,3],[2,3,4]], online = [true,true,true,true], k = 10</span>

**Output:** <span class="example-io">3</span>

**Explanation:**

<img alt="" src="https://assets.leetcode.com/uploads/2025/06/06/graph-10.png" style="width: 239px; height: 267px;" />

	<li data-end="462" data-start="146">
	

The graph has two possible routes from node 0 to node 3:

	

		<li data-end="315" data-start="209">
		

Path `0 &rarr; 1 &rarr; 3`

		

			<li data-end="315" data-start="234">
			

Total cost = `5 + 10 = 15`, which exceeds k (`15 > 10`), so this path is invalid.
			</li>
		

		</li>
		<li data-end="462" data-start="318">
		

Path `0 &rarr; 2 &rarr; 3`

		

			<li data-end="397" data-start="343">
			

Total cost = `3 + 4 = 7 <= k`, so this path is valid.
			</li>
			<li data-end="462" data-start="403">
			

The minimum edge‐cost along this path is `min(3, 4) = 3`.
			</li>
		

		</li>
	

	</li>
	<li data-end="551" data-start="463">
	

There are no other valid paths. Hence, the maximum among all valid path‐scores is 3.
	</li>

</div>

**Example 2:**

<div class="example-block">

**Input:** <span class="example-io">edges = [[0,1,7],[1,4,5],[0,2,6],[2,3,6],[3,4,2],[2,4,6]], online = [true,true,true,false,true], k = 12</span>

**Output:** <span class="example-io">6</span>

**Explanation:**

<img alt="" src="https://assets.leetcode.com/uploads/2025/06/06/graph-11.png" style="width: 343px; height: 194px;" />

	<li data-end="790" data-start="726">
	

Node 3 is offline, so any path passing through 3 is invalid.
	</li>
	<li data-end="1231" data-start="791">
	

Consider the remaining routes from 0 to 4:

	

		<li data-end="985" data-start="840">
		

Path `0 &rarr; 1 &rarr; 4`

		

			<li data-end="920" data-start="865">
			

Total cost = `7 + 5 = 12 <= k`, so this path is valid.
			</li>
			<li data-end="985" data-start="926">
			

The minimum edge‐cost along this path is `min(7, 5) = 5`.
			</li>
		

		</li>
		<li data-end="1083" data-start="988">
		

Path `0 &rarr; 2 &rarr; 3 &rarr; 4`

		

			<li data-end="1083" data-start="1017">
			

Node 3 is offline, so this path is invalid regardless of cost.
			</li>
		

		</li>
		<li data-end="1231" data-start="1086">
		

Path `0 &rarr; 2 &rarr; 4`

		

			<li data-end="1166" data-start="1111">
			

Total cost = `6 + 6 = 12 <= k`, so this path is valid.
			</li>
			<li data-end="1231" data-start="1172">
			

The minimum edge‐cost along this path is `min(6, 6) = 6`.
			</li>
		

		</li>
	

	</li>
	<li data-end="1314" data-is-last-node="" data-start="1232">
	

Among the two valid paths, their scores are 5 and 6. Therefore, the answer is 6.
	</li>

</div>

---

## 📌 Constraints

</strong>

	- `n == online.length`

	- `2 <= n <= 5 * 10⁴`

	- `0 <= m == edges.length <= ``min(10⁵, n * (n - 1) / 2)`

	- `edges[i] = [u<sub>i</sub>, v<sub>i</sub>, cost<sub>i</sub>]`

	- `0 <= u<sub>i</sub>, v<sub>i</sub> < n`

	- `u<sub>i</sub> != v<sub>i</sub>`

	- `0 <= cost<sub>i</sub> <= 10⁹`

	- `0 <= k <= 5 * 10¹³`

	- `online[i]` is either `true` or `false`, and both `online[0]` and `online[n &minus; 1]` are `true`.

	- The given graph is a directed acyclic graph.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 3919                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 163 ms                    |
| Beats           | 84.98%                    |
| Memory          | 334.1 MB                    |
| Memory Beats    | 65.21%                    |
| Submission Date | Jul 3, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Binary Search
* Dynamic Programming
* Graph Theory
* Topological Sort
* Heap (Priority Queue)
* Shortest Path

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
