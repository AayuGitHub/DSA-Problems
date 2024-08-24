// 3190. Find Minimum Operations to Make All Elements Divisible by Three

// Problem Link: https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/

// Problem Statement:

// Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.

// In one move, you can increment n - 1 elements of the array by 1.

/*

Example 1:

Input: nums = [1,2,3]
Output: 3
Explanation: Only three moves are needed (remember each move increments two elements):
[1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]
Example 2:

Input: nums = [1,1,1]
Output: 0

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int minOperations = 0;

        for(int i=0; i<n; i++)
        {
            if(nums[i] % 3 != 0)
            {
                minOperations += min(nums[i] % 3, 3-(nums[i] % 3));
            }
        }
        return minOperations;
    }

    int main()
    {
        int n;
        cout << "Enter the number of elements in the array: ";
        cin >> n;

        vector<int> nums(n);
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        int result = minimumOperations(nums);
        cout << "Minimum number of operations required: " << result << endl;

    }



