# 0162. Find Peak Element

## 🔗 Original Problem

[LeetCode - Find Peak Element](https://leetcode.com/problems/find-peak-element/)

---

## 📝 Problem Statement

A peak element is an element that is strictly greater than its neighbors.

Given a **0-indexed** integer array `nums`, find a peak element, and return its index. If the array contains multiple peaks, return the index to **any of the peaks**.

You may imagine that `nums[-1] = nums[n] = -&infin;`. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in `O(log n)` time.

---

## 💡 Examples

**Example 1:**

**Input:** nums = [1,2,3,1]
**Output:** 2
**Explanation:** 3 is a peak element and your function should return the index number 2.</pre>

**Example 2:**

**Input:** nums = [1,2,1,3,5,6,4]
**Output:** 5
**Explanation:** Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.</pre>

---

## 📌 Constraints

</strong>

	- `1 <= nums.length <= 1000`

	- `-2³¹ <= nums[i] <= 2³¹ - 1`

	- `nums[i] != nums[i + 1]` for all valid `i`.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0162                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 0 ms                    |
| Beats           | 100.00%                    |
| Memory          | 12.6 MB                    |
| Memory Beats    | 41.05%                    |
| Submission Date | Jul 30, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Binary Search

---

## 📚 Related Topics

* [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)
* [Find a Peak Element II](https://leetcode.com/problems/find-a-peak-element-ii/)
* [Pour Water Between Buckets to Make Water Levels Equal](https://leetcode.com/problems/pour-water-between-buckets-to-make-water-levels-equal/)
* [Count Hills and Valleys in an Array](https://leetcode.com/problems/count-hills-and-valleys-in-an-array/)
* [Find the Peaks](https://leetcode.com/problems/find-the-peaks/)

---

## 📈 Complexity

* **Time Complexity:** O(log n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
