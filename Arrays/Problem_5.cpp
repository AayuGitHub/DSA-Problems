/*
26. Remove Duplicates from Sorted Array - LeetCode

Given a sorted array, the task is to remove the duplicate elements from the array.

Examples: 

Input  : arr[] = {2, 2, 2, 2, 2}
Output : arr[] = {2}
         new size = 1

Input  : arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5}
Output : arr[] = {1, 2, 3, 4, 5}
         new size = 5
*/

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums)
{
    int n = nums.size();

    int res = 1;

    for(int i=1; i<n; i++)
    {
        if(nums[res-1] != nums[i])
        {
            nums[res] = nums[i];
            res++;
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << removeDuplicates(arr) << endl;

    return 0;
}
