# [Check the status - Python](https://www.geeksforgeeks.org/problems/check-the-status/1?page=1&category=python&sortBy=submissions)
## Easy
Given two integer variables a and b, and a boolean variable&nbsp;flag. The task is to check the status and return accordingly.
Return&nbsp;True&nbsp;for the following cases:

Either&nbsp;a&nbsp;or&nbsp;b (not both) is non-negative and the flag&nbsp;is false.
Both&nbsp;a&nbsp;and&nbsp;b are negative and the&nbsp;flag&nbsp;is true.

Otherwise, return False.
Examples:&nbsp;
Input: a = 1, b = -1, flag = False
Output: True
Explanation: Since a is positive, b is negative, and flag is False, condition 1 holds true, so the function returns True.
Input: a = -182, b = -9121, flag = True
Output: True
Explanation: Since both a and b are negative and flag is True, condition 2 holds true, so the function returns True.
Input: a = 5, b = 3, flag = True
Output: False
Explanation: Neither condition 1 nor condition 2 holds, so the function returns False.
Constraints:-10 ≤ a, b ≤ 10flag&nbsp;∈ {True, False}&nbsp;