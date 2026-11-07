# 0015. 3Sum

## 🔗 Original Problem

[LeetCode - 3Sum](https://leetcode.com/problems/3sum/)

---

## 📝 Problem Statement

Given an integer array nums, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

---

## 💡 Examples

**Example 1:**

**Input:** nums = [-1,0,1,2,-1,-4]
**Output:** [[-1,-1,2],[-1,0,1]]
**Explanation:** 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
</pre>

**Example 2:**

**Input:** nums = [0,1,1]
**Output:** []
**Explanation:** The only possible triplet does not sum up to 0.
</pre>

**Example 3:**

**Input:** nums = [0,0,0]
**Output:** [[0,0,0]]
**Explanation:** The only possible triplet sums up to 0.
</pre>

---

## 📌 Constraints

</strong>

	- `3 <= nums.length <= 3000`

	- `-10⁵ <= nums[i] <= 10⁵`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0015                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 51 ms                    |
| Beats           | 41.61%                    |
| Memory          | 29.1 MB                    |
| Memory Beats    | 68.82%                    |
| Submission Date | Nov 7, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Two Pointers
* Sorting

---

## 📚 Related Topics

* [Two Sum](https://leetcode.com/problems/two-sum/)
* [3Sum Closest](https://leetcode.com/problems/3sum-closest/)
* [4Sum](https://leetcode.com/problems/4sum/)
* [3Sum Smaller](https://leetcode.com/problems/3sum-smaller/)
* [Number of Arithmetic Triplets](https://leetcode.com/problems/number-of-arithmetic-triplets/)
* [Minimum Sum of Mountain Triplets I](https://leetcode.com/problems/minimum-sum-of-mountain-triplets-i/)
* [Minimum Sum of Mountain Triplets II](https://leetcode.com/problems/minimum-sum-of-mountain-triplets-ii/)

---

## 📈 Complexity

* **Time Complexity:** O(n log n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
