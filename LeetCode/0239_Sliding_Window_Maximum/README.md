# 0239. Sliding Window Maximum

## 🔗 Original Problem

[LeetCode - Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)

---

## 📝 Problem Statement

You are given an array of integers `nums`, there is a sliding window of size `k` which is moving from the very left of the array to the very right. You can only see the `k` numbers in the window. Each time the sliding window moves right by one position.

Return *the max sliding window*.

---

## 💡 Examples

**Example 1:**

**Input:** nums = [1,3,-1,-3,5,3,6,7], k = 3
**Output:** [3,3,5,5,6,7]
**Explanation:** 
Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       **3**
 1 [3  -1  -3] 5  3  6  7       **3**
 1  3 [-1  -3  5] 3  6  7      ** 5**
 1  3  -1 [-3  5  3] 6  7       **5**
 1  3  -1  -3 [5  3  6] 7       **6**
 1  3  -1  -3  5 [3  6  7]      **7**
</pre>

**Example 2:**

**Input:** nums = [1], k = 1
**Output:** [1]
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= nums.length <= 10⁵`

	- `-10⁴ <= nums[i] <= 10⁴`

	- `1 <= k <= nums.length`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0239                    |
| Difficulty      | Hard                    |
| Language        | C++                     |
| Runtime         | 20 ms                    |
| Beats           | 70.32%                    |
| Memory          | 134.6 MB                    |
| Memory Beats    | 96.89%                    |
| Submission Date | Oct 19, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Queue
* Sliding Window
* Heap (Priority Queue)
* Monotonic Queue
* Range Minimum/Maximum Query

---

## 📚 Related Topics

* [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)
* [Min Stack](https://leetcode.com/problems/min-stack/)
* [Longest Substring with At Most Two Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/)
* [Paint House II](https://leetcode.com/problems/paint-house-ii/)
* [Jump Game VI](https://leetcode.com/problems/jump-game-vi/)
* [Maximum Number of Robots Within Budget](https://leetcode.com/problems/maximum-number-of-robots-within-budget/)
* [Maximum Tastiness of Candy Basket](https://leetcode.com/problems/maximum-tastiness-of-candy-basket/)
* [Maximal Score After Applying K Operations](https://leetcode.com/problems/maximal-score-after-applying-k-operations/)

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
