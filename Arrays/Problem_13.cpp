/*

Maximum SubArray Sum

Given an array arr[], the task is to find the elements of a contiguous subarray of numbers that has the largest sum.

Examples:

Input: arr = [-2, -3, 4, -1, -2, 1, 5, -3]
Output: [4, -1, -2, 1, 5]
Explanation:
In the above input the maximum contiguous subarray sum is 7 and the elements of the subarray are [4, -1, -2, 1, 5]

Input: arr = [-2, -5, 6, -2, -3, 1, 5, -6]
Output: [6, -2, -3, 1, 5]
Explanation:
In the above input the maximum contiguous subarray sum is 7 and the elements
of the subarray are [6, -2, -3, 1, 5]


*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits   >

using namespace std;

int maxSum(vector<int> &nums)
{
    int result = nums[0];
    int n = nums.size();

    int maxEnding = nums[0];

    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + nums[i], nums[i]);
        result = max(result, maxEnding);
    }
    return result;
}

int main()
{

    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << maxSum(nums) << endl;

    return 0;
}
