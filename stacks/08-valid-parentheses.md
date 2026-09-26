## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store opening brackets.
For every closing bracket, I checked whether it matches the most recent opening bracket.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

I tested the solution locally using a valid bracket sequence and an invalid bracket sequence. The solution was then accepted by LeetCode.