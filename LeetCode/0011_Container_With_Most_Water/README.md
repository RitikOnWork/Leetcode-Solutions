# 0011. Container With Most Water

## 🔗 Original Problem

[LeetCode - Container With Most Water](https://leetcode.com/problems/container-with-most-water/)

---

## 📝 Problem Statement

You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the `i^t^h` line are `(i, 0)` and `(i, height[i])`.

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return *the maximum amount of water a container can store*.

**Notice** that you may not slant the container.

---

## 💡 Examples

**Example 1:**
<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/17/question_11.jpg" style="width: 600px; height: 287px;" />

**Input:** height = [1,8,6,2,5,4,8,3,7]
**Output:** 49
**Explanation:** The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
</pre>

**Example 2:**

**Input:** height = [1,1]
**Output:** 1
</pre>

---

## 📌 Constraints

</strong>

	- `n == height.length`

	- `2 <= n <= 10⁵`

	- `0 <= height[i] <= 10⁴`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0011                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 4 ms                    |
| Beats           | 20.61%                    |
| Memory          | 63 MB                    |
| Memory Beats    | 49.72%                    |
| Submission Date | Jul 28, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Two Pointers
* Greedy

---

## 📚 Related Topics

* [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)
* [Maximum Tastiness of Candy Basket](https://leetcode.com/problems/maximum-tastiness-of-candy-basket/)
* [House Robber IV](https://leetcode.com/problems/house-robber-iv/)

---

## 📈 Complexity

* **Time Complexity:** O(log n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
