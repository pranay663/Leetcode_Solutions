## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency array of size 26 to count the occurrences of each lowercase letter.
The counts are increased for the first string and decreased for the second string, and the strings are anagrams if all counts become zero.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested the solution locally using an anagram case and a non-anagram case before submitting it on LeetCode. The solution was accepted by LeetCode.