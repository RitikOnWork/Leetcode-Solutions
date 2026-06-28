# 1625. Group Sold Products By The Date

## 🔗 Original Problem

[LeetCode - Group Sold Products By The Date](https://leetcode.com/problems/group-sold-products-by-the-date/)

---

## 📝 Problem Statement

Table `Activities`:

+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| sell_date   | date    |
| product     | varchar |
+-------------+---------+
There is no primary key (column with unique values) for this table. It may contain duplicates.
Each row of this table contains the product name and the date it was sold in a market.
</pre>

 

Write a solution to find for each date the number of different products sold and their names.

The sold products names for each date should be sorted lexicographically.

Return the result table ordered by `sell_date`.

The result format is in the following example.

---

## 💡 Examples

**Example 1:**

**Input:** 
Activities table:
+------------+------------+
| sell_date  | product     |
+------------+------------+
| 2020-05-30 | Headphone  |
| 2020-06-01 | Pencil     |
| 2020-06-02 | Mask       |
| 2020-05-30 | Basketball |
| 2020-06-01 | Bible      |
| 2020-06-02 | Mask       |
| 2020-05-30 | T-Shirt    |
+------------+------------+
**Output:** 
+------------+----------+------------------------------+
| sell_date  | num_sold | products                     |
+------------+----------+------------------------------+
| 2020-05-30 | 3        | Basketball,Headphone,T-shirt |
| 2020-06-01 | 2        | Bible,Pencil                 |
| 2020-06-02 | 1        | Mask                         |
+------------+----------+------------------------------+
**Explanation:** 
For 2020-05-30, Sold items were (Headphone, Basketball, T-shirt), we sort them lexicographically and separate them by a comma.
For 2020-06-01, Sold items were (Pencil, Bible), we sort them lexicographically and separate them by a comma.
For 2020-06-02, the Sold item is (Mask), we just return it.
</pre>

---

## 📌 Constraints

No constraints available.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 1625                    |
| Difficulty      | Easy                    |
| Language        | Pandas                     |
| Runtime         | 367 ms                    |
| Beats           | 20.27%                    |
| Memory          | 69.1 MB                    |
| Memory Beats    | 10.21%                    |
| Submission Date | Jun 28, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.txt](solution.txt)

---

## 🏷️ Tags

* Database

---

## 📚 Related Topics

* [Finding the Topic of Each Post](https://leetcode.com/problems/finding-the-topic-of-each-post/)

---

## 📈 Complexity

* **Time Complexity:** O(n log n)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
