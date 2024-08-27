// 1. Two Sum

/*

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    map<int, int> numMap;

    for (int i = 0; i < n; i++)
    {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end())
        {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }

    return {-1, -1};
}

int main()
{
    int n;
    cout << "Enter number of elements in an Array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements of an array: ";
    
    for(int i=0; i<n; i++)
    {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the value of target: ";
    cin >> target;

    vector<int> result = twoSum(nums, target);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    


    return 0;
}
