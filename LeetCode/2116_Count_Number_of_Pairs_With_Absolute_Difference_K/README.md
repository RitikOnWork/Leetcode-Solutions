# 2116. Count Number of Pairs With Absolute Difference K

## 🔗 Original Problem

[LeetCode - Count Number of Pairs With Absolute Difference K](https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/)

---

## 📝 Problem Statement

Given an integer array `nums` and an integer `k`, return *the number of pairs* `(i, j)` *where* `i < j` *such that* `|nums[i] - nums[j]| == k`.

The value of `|x|` is defined as:

	- `x` if `x >= 0`.

	- `-x` if `x < 0`.

---

## 💡 Examples

**Example 1:**

**Input:** nums = [1,2,2,1], k = 1
**Output:** 4
**Explanation:** The pairs with an absolute difference of 1 are:
- [**<u>1</u>**,**<u>2</u>**,2,1]
- [**<u>1</u>**,2,**<u>2</u>**,1]
- [1,**<u>2</u>**,2,**<u>1</u>**]
- [1,2,**<u>2</u>**,**<u>1</u>**]
</pre>

**Example 2:**

**Input:** nums = [1,3], k = 3
**Output:** 0
**Explanation:** There are no pairs with an absolute difference of 3.
</pre>

**Example 3:**

**Input:** nums = [3,2,1,5,4], k = 2
**Output:** 3
**Explanation:** The pairs with an absolute difference of 2 are:
- [**<u>3</u>**,2,**<u>1</u>**,5,4]
- [**<u>3</u>**,2,1,**<u>5</u>**,4]
- [3,**<u>2</u>**,1,5,**<u>4</u>**]
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= nums.length <= 200`

	- `1 <= nums[i] <= 100`

	- `1 <= k <= 99`

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 2116                    |
| Difficulty      | Easy                    |
| Language        | C++                     |
| Runtime         | 7 ms                    |
| Beats           | 17.36%                    |
| Memory          | 18.2 MB                    |
| Memory Beats    | 10.30%                    |
| Submission Date | Jul 12, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Hash Table
* Counting

---

## 📚 Related Topics

* [Two Sum](https://leetcode.com/problems/two-sum/)
* [K-diff Pairs in an Array](https://leetcode.com/problems/k-diff-pairs-in-an-array/)
* [Finding Pairs With a Certain Sum](https://leetcode.com/problems/finding-pairs-with-a-certain-sum/)
* [Count Equal and Divisible Pairs in an Array](https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/)
* [Count Number of Bad Pairs](https://leetcode.com/problems/count-number-of-bad-pairs/)
* [Count the Number of Fair Pairs](https://leetcode.com/problems/count-the-number-of-fair-pairs/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
