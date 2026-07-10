# 2271. Rearrange Array Elements by Sign

## 🔗 Original Problem

[LeetCode - Rearrange Array Elements by Sign](https://leetcode.com/problems/rearrange-array-elements-by-sign/)

---

## 📝 Problem Statement

You are given a **0-indexed** integer array `nums` of **even** length consisting of an **equal** number of positive and negative integers.

You should return the array of nums such that the array follows the given conditions:

	- Every **consecutive pair** of integers have **opposite signs**.

	- For all integers with the same sign, the **order** in which they were present in `nums` is **preserved**.

	- The rearranged array begins with a positive integer.

Return *the modified array after rearranging the elements to satisfy the aforementioned conditions*.

---

## 💡 Examples

**Example 1:**

**Input:** nums = [3,1,-2,-5,2,-4]
**Output:** [3,-2,1,-5,2,-4]
**Explanation:**
The positive integers in nums are [3,1,2]. The negative integers are [-2,-5,-4].
The only possible way to rearrange them such that they satisfy all conditions is [3,-2,1,-5,2,-4].
Other ways such as [1,-2,2,-5,3,-4], [3,1,2,-2,-5,-4], [-2,3,-5,1,-4,2] are incorrect because they do not satisfy one or more conditions.  
</pre>

**Example 2:**

**Input:** nums = [-1,1]
**Output:** [1,-1]
**Explanation:**
1 is the only positive integer and -1 the only negative integer in nums.
So nums is rearranged to [1,-1].
</pre>

---

## 📌 Constraints

</strong>

	- `2 <= nums.length <= 2 * 10⁵`

	- `nums.length` is **even**

	- `1 <= |nums[i]| <= 10⁵`

	- `nums` consists of **equal** number of positive and negative integers.

 
It is not required to do the modifications in-place.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 2271                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 0 ms                    |
| Beats           | 100.00%                    |
| Memory          | 128.2 MB                    |
| Memory Beats    | 78.04%                    |
| Submission Date | Jul 10, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Two Pointers
* Simulation

---

## 📚 Related Topics

* [Wiggle Subsequence](https://leetcode.com/problems/wiggle-subsequence/)
* [Sort Array By Parity II](https://leetcode.com/problems/sort-array-by-parity-ii/)
* [Partition Array According to Given Pivot](https://leetcode.com/problems/partition-array-according-to-given-pivot/)
* [Largest Number After Digit Swaps by Parity](https://leetcode.com/problems/largest-number-after-digit-swaps-by-parity/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
