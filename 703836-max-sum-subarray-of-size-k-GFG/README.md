# [Max Sum Subarray of size K](https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1)
## Easy
Given an array of integers arr[]&nbsp; and a number k. Return&nbsp;the maximum sum of a subarray of size k.
Note: A subarray is a contiguous part of any given array.
Examples:
Input: arr[] = [100, 200, 300, 400], k = 2
Output: 700
Explanation: arr2 + arr3 = 700, which is maximum.
Input: arr[] = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4
Output: 39
Explanation: arr1 + arr2 + arr3 + arr4 = 39, which is maximum.
Input: arr[] = [100, 200, 300, 400], k = 1
Output: 400
Explanation: arr3 = 400, which is maximum.
Constraints:1 ≤ arr.size() ≤ 1061 ≤ arr[i] ≤ 1061 ≤ k ≤ arr.size()