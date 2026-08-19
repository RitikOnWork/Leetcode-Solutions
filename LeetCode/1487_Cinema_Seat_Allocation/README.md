# 1487. Cinema Seat Allocation

## 🔗 Original Problem

[LeetCode - Cinema Seat Allocation](https://leetcode.com/problems/cinema-seat-allocation/)

---

## 📝 Problem Statement

<img alt="" src="https://assets.leetcode.com/uploads/2020/02/14/cinema_seats_1.png" style="width: 400px; height: 149px;" />

A cinema has `n` rows of seats, numbered from 1 to `n`. Each row has 10 seats, numbered from 1 to 10.

You are given a 2D integer array `reservedSeats`, where `reservedSeats[i] = [row<sub>i</sub>, seat<sub>i</sub>]` means that seat `seat<sub>i</sub>` in row `row<sub>i</sub>` is already reserved.

A four-person group must be assigned to four seats in the **same** row. The group can be seated in one of the following seat blocks:

	- seats `2, 3, 4, 5`

	- seats `4, 5, 6, 7`

	- seats `6, 7, 8, 9`

A block can be used only if **none** of its seats are reserved. Each seat can be assigned to **at most **one group.

Return an integer denoting the **maximum** number of four-person groups that can be assigned.

---

## 💡 Examples

**Example 1:**

<img alt="" src="https://assets.leetcode.com/uploads/2020/02/14/cinema_seats_3.png" style="width: 400px; height: 96px;" />

**Input:** n = 3, reservedSeats = [[1,2],[1,3],[1,8],[2,6],[3,1],[3,10]]
**Output:** 4
**Explanation:** The figure above shows an optimal allocation of four groups. Seats marked in blue are already reserved, and each set of four contiguous seats marked in orange is assigned to one group.
</pre>

**Example 2:**

**Input:** n = 2, reservedSeats = [[2,1],[1,8],[2,6]]
**Output:** 2
</pre>

**Example 3:**

**Input:** n = 4, reservedSeats = [[4,3],[1,4],[4,6],[1,7]]
**Output:** 4
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= n <= 10⁹`

	- `1 <= reservedSeats.length <= min(10 * n, 10⁴)`

	- `reservedSeats[i] == [row<sub>i</sub>, seat<sub>i</sub>]`

	- `1 <= row<sub>i</sub> <= n`

	- `1 <= seat<sub>i</sub> <= 10`

	- All `reservedSeats[i]` are distinct.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 1487                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 77 ms                    |
| Beats           | 34.12%                    |
| Memory          | 73.6 MB                    |
| Memory Beats    | 36.15%                    |
| Submission Date | Aug 20, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Array
* Hash Table
* Greedy
* Bit Manipulation

---

## 📚 Related Topics

* [Booking Concert Tickets in Groups](https://leetcode.com/problems/booking-concert-tickets-in-groups/)

---

## 📈 Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
