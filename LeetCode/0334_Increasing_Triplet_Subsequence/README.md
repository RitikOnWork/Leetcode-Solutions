# 0334. Increasing Triplet Subsequence

## 🔗 Original Problem

[LeetCode - Increasing Triplet Subsequence](https://leetcode.com/problems/increasing-triplet-subsequence/)

---

## 📝 Problem Statement

You are given an integer array `nums`.

Return `true`* if there exists a triple of indices *`(i, j, k)`* such that *`i < j < k`* and *`nums[i] < nums[j] < nums[k]`. If no such indices exists, return `false`.

---

## 💡 Examples

**Example 1:**

**Input:** nums = [1,2,3,4,5]
**Output:** true
**Explanation:** Any triplet where i < j < k is valid.
</pre>

**Example 2:**

**Input:** nums = [5,4,3,2,1]
**Output:** false
**Explanation:** No triplet exists.
</pre>

**Example 3:**

**Input:** nums = [2,1,5,0,4,6]
**Output:** true
**Explanation:** One of the valid triplet is (1, 4, 5), because nums[1] == 1 < nums[4] == 4 < nums[5] == 6.
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= nums.length <= 5 * 10⁵`

	- `-2³¹ <= nums[i] <= 2³¹ - 1`

 
**Follow up:** Could you implement a solution that runs in `O(n)` time complexity and `O(1)` space complexity?

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0334                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 1 ms                    |
| Beats           | 56.47%                    |
| Memory          | 115.5 MB                    |
| Memory Beats    | 89.89%                    |
| Submission Date | Nov 3, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Greedy
* Longest Increasing Subsequence

---

## 📚 Related Topics

* [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/)
* [Count Special Quadruplets](https://leetcode.com/problems/count-special-quadruplets/)
* [Count Good Triplets in an Array](https://leetcode.com/problems/count-good-triplets-in-an-array/)
* [Count Increasing Quadruplets](https://leetcode.com/problems/count-increasing-quadruplets/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
