## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I compared the characters of all strings column by column.
The comparison stops when a character differs or when the end of a string is reached.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

I tested the solution locally using strings with a common prefix and strings with no common prefix. The solution was then accepted by LeetCode.