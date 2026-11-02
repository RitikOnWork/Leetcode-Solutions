# 0207. Course Schedule

## 🔗 Original Problem

[LeetCode - Course Schedule](https://leetcode.com/problems/course-schedule/)

---

## 📝 Problem Statement

There are a total of `numCourses` courses you have to take, labeled from `0` to `numCourses - 1`. You are given an array `prerequisites` where `prerequisites[i] = [a<sub>i</sub>, b<sub>i</sub>]` indicates that you **must** take course `b<sub>i</sub>` first if you want to take course `a<sub>i</sub>`.

	- For example, the pair `[0, 1]`, indicates that to take course `0` you have to first take course `1`.

Return `true` if you can finish all courses. Otherwise, return `false`.

---

## 💡 Examples

**Example 1:**

**Input:** numCourses = 2, prerequisites = [[1,0]]
**Output:** true
**Explanation:** There are a total of 2 courses to take. 
To take course 1 you should have finished course 0. So it is possible.
</pre>

**Example 2:**

**Input:** numCourses = 2, prerequisites = [[1,0],[0,1]]
**Output:** false
**Explanation:** There are a total of 2 courses to take. 
To take course 1 you should have finished course 0, and to take course 0 you should also have finished course 1. So it is impossible.
</pre>

---

## 📌 Constraints

</strong>

	- `1 <= numCourses <= 2000`

	- `0 <= prerequisites.length <= 5000`

	- `prerequisites[i].length == 2`

	- `0 <= a<sub>i</sub>, b<sub>i</sub> < numCourses`

	- All the pairs prerequisites[i] are **unique**.

---

## 📊 Metadata

| Property        | Value                   |
| --------------- | ----------------------- |
| Problem ID      | 0207                    |
| Difficulty      | Medium                    |
| Language        | C++                     |
| Runtime         | 3 ms                    |
| Beats           | 80.43%                    |
| Memory          | 19.2 MB                    |
| Memory Beats    | 77.71%                    |
| Submission Date | Nov 2, 2026 |

---

## 💻 Solution

The actual code is stored in:

[solution.cpp](solution.cpp)

---

## 🏷️ Tags

* Depth-First Search
* Breadth-First Search
* Graph Theory
* Topological Sort
* Directed Acyclic Graph

---

## 📚 Related Topics

* [Course Schedule II](https://leetcode.com/problems/course-schedule-ii/)
* [Graph Valid Tree](https://leetcode.com/problems/graph-valid-tree/)
* [Minimum Height Trees](https://leetcode.com/problems/minimum-height-trees/)
* [Course Schedule III](https://leetcode.com/problems/course-schedule-iii/)
* [Build a Matrix With Conditions](https://leetcode.com/problems/build-a-matrix-with-conditions/)

---

## 📈 Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(n)

---

## 📖 Notes

## Personal Notes

> Add your own notes here.
