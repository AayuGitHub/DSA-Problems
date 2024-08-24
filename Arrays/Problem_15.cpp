/*

27. Remove Element

Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.


*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int removeElements(vector<int>& nums, int val)
{
    int n = nums.size();
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(nums[i] != val)
        {
            nums[count] = nums[i];
            count++;
        }
    }
    return count;
}

int main() {
    
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    
    cout << "Enter the value to remove: ";
    int val;
    cin >> val;

    cout << "Number of elements after removing " << val << ": " << removeElements(nums, val) << endl;

    return 0;
}
