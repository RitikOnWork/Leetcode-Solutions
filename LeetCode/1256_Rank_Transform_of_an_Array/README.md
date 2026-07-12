# 1256. Rank Transform of an Array

## 🔗 Original Problem

[LeetCode - Rank Transform of an Array](https://leetcode.com/problems/rank-transform-of-an-array/)

---

## 📝 Problem Statement

Given an array of integers `arr`, replace each element with its rank.

The rank represents how large the element is. The rank has the following rules:

	- Rank is an integer starting from 1.

	- The larger the element, the larger the rank. If two elements are equal, their rank must be the same.

	- Rank should be as small as possible.

---

## 💡 Examples

**Example 1:**

**Input:** arr = [40,10,20,30]
**Output:** [4,1,2,3]
**Explanation**: 40 is the largest element. 10 is the smallest. 20 is the second smallest. 30 is the third smallest.</pre>

**Example 2:**

**Input:** arr = [100,100,100]
**Output:** [1,1,1]
**Explanation**: Same elements share the same rank.
</pre>

**Example 3:**

**Input:** arr = [37,12,28,9,100,56,80,5,12]
**Output:** [5,3,4,2,8,6,7,1,3]
</pre>

---

## 📌 Constraints

</strong>

	- `0 <= arr.length <= 10⁵`

	- `-10⁹ <= arr[i] <= 10⁹`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 1256                    |
| Difficulty      | Easy                    |
| Language        | C++                     |
| Runtime         | 40 ms                    |
| Beats           | 42.82%                    |
| Memory          | 43.9 MB                    |
| Memory Beats    | 55.31%                    |
| Submission Date | Jul 12, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Hash Table
* Sorting

---

## 📚 Related Topics

* [Rank Transform of a Matrix](https://leetcode.com/problems/rank-transform-of-a-matrix/)
* [Find Target Indices After Sorting Array](https://leetcode.com/problems/find-target-indices-after-sorting-array/)

---

## 📈 Complexity

* **Time Complexity:** O(n log n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
