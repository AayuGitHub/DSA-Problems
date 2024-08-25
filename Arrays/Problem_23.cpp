// 1512. Number of Good Pairs

// Problem Statement: Given an array of integers nums, return the number of good pairs.

// A pair (i, j) is called good if nums[i] == nums[j] and i < j.

// Example 1:

// Input: nums = [1,2,3,1,1,3]
// Output: 4
// Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.

// Example 2:

// Input: nums = [1,1,1,1]
// Output: 6
// Explanation: Each pair in the array are good.

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int numIdenticalPairs(std::vector<int> &nums)
{
    int count = 0;
    int n = nums.size();
    map<int, int> countMap;

    for (int i = 0; i < n; i++)
    {
        if (countMap.find(nums[i]) != countMap.end())
        {
            count += countMap[nums[i]];
        }
        countMap[nums[i]]++;
    }
    return count;
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

    cout << "Number of good pairs: " << numIdenticalPairs(nums) << endl;
    return 0;
}
