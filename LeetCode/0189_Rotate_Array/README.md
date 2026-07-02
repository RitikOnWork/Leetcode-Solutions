# 0189. Rotate Array

## 🔗 Original Problem

[LeetCode - Rotate Array](https://leetcode.com/problems/rotate-array/)

---

## 📝 Problem Statement

Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

---

## 💡 Examples

**Example 1:**

**Input:** nums = [1,2,3,4,5,6,7], k = 3
**Output:** [5,6,7,1,2,3,4]
**Explanation:**
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
</pre>

**Example 2:**

**Input:** nums = [-1,-100,3,99], k = 2
**Output:** [3,99,-1,-100]
**Explanation:** 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= nums.length <= 10⁵`

	- `-2³¹ <= nums[i] <= 2³¹ - 1`

	- `0 <= k <= 10⁵`

 

**Follow up:**

	- Try to come up with as many solutions as you can. There are at least **three** different ways to solve this problem.

	- Could you do it in-place with `O(1)` extra space?

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0189                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 3 ms                    |
| Beats           | 8.36%                    |
| Memory          | 30.6 MB                    |
| Memory Beats    | 6.10%                    |
| Submission Date | Jul 2, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Math
* Two Pointers

---

## 📚 Related Topics

* [Rotate List](https://leetcode.com/problems/rotate-list/)
* [Reverse Words in a String II](https://leetcode.com/problems/reverse-words-in-a-string-ii/)
* [Make K-Subarray Sums Equal](https://leetcode.com/problems/make-k-subarray-sums-equal/)
* [Maximum Number of Matching Indices After Right Shifts](https://leetcode.com/problems/maximum-number-of-matching-indices-after-right-shifts/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
