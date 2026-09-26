## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I kept track of the minimum price seen so far while scanning the array.
For each price, I calculated the possible profit and updated the maximum profit.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested the solution locally using a case with a profitable transaction and a case where no profit is possible. The solution was then accepted by LeetCode.