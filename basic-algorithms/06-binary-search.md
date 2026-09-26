## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used the binary search technique on the sorted array.
The search range is repeatedly divided in half until the target is found or the range becomes empty.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

I tested the solution locally using a case where the target is present and a case where the target is absent. The solution was then accepted by LeetCode.