Problem Name: Maximum Subarray

Platform: LeetCode
Difficulty: Easy
Topic: Arrays
Problem Link: https://leetcode.com/problems/maximum-subarray/

Problem Statement

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6

Approach / Thoughts

Brute Force: Check all subarrays → O(n²)

Optimal (Kadane’s Algorithm):

Keep running sum, reset if sum < 0

Track max sum → O(n)

Code (C++)
#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0], currSum = nums[0];
    for(int i = 1; i < nums.size(); i++){
        currSum = max(nums[i], currSum + nums[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums) << endl; // Output: 6
}

Notes / Tricks

Kadane’s Algorithm is a must-know for subarray sums

Works even with negative numbers

Always track max so far