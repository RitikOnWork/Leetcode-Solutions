# 1776. Minimum Operations to Reduce X to Zero

## 🔗 Original Problem

[LeetCode - Minimum Operations to Reduce X to Zero](https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/)

---

## 📝 Problem Statement

You are given an integer array `nums` and an integer `x`. In one operation, you can either remove the leftmost or the rightmost element from the array `nums` and subtract its value from `x`. Note that this **modifies** the array for future operations.

Return *the **minimum number** of operations to reduce *`x` *to **exactly*** `0` *if it is possible**, otherwise, return *`-1`.

---

## 💡 Examples

**Example 1:**

**Input:** nums = [1,1,4,2,3], x = 5
**Output:** 2
**Explanation:** The optimal solution is to remove the last two elements to reduce x to zero.
</pre>

**Example 2:**

**Input:** nums = [5,6,7,8,9], x = 4
**Output:** -1
</pre>

**Example 3:**

**Input:** nums = [3,2,20,1,1,3], x = 10
**Output:** 5
**Explanation:** The optimal solution is to remove the last three elements and the first two elements (5 operations in total) to reduce x to zero.
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= nums.length <= 10⁵`

	- `1 <= nums[i] <= 10⁴`

	- `1 <= x <= 10⁹`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 1776                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 4 ms                    |
| Beats           | 60.58%                    |
| Memory          | 102.3 MB                    |
| Memory Beats    | 91.91%                    |
| Submission Date | Sep 24, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Hash Table
* Binary Search
* Sliding Window
* Prefix Sum

---

## 📚 Related Topics

* [Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/)
* [Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)
* [Minimum Operations to Convert Number](https://leetcode.com/problems/minimum-operations-to-convert-number/)
* [Removing Minimum Number of Magic Beans](https://leetcode.com/problems/removing-minimum-number-of-magic-beans/)
* [Minimum Operations to Make the Integer Zero](https://leetcode.com/problems/minimum-operations-to-make-the-integer-zero/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
