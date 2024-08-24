
/*

Problem Statement:

Longest Even Odd Subarray

Given an array a[] of N integers, the task is to find the length of the longest Alternating Even Odd subarray present in the array.

Examples:

Input: a[] = {1, 2, 3, 4, 5, 7, 9}
Output: 5
Explanation:
The subarray {1, 2, 3, 4, 5} has alternating even and odd elements.

Input: a[] = {1, 3, 5}
Output: 0
Explanation:
There is no such alternating sequence possible.

 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int longestEvenOddSubarray(vector<int> &arr)
{
    int n = arr.size();

    int maxLen = 0;
    int currLen = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] % 2 != arr[i - 1] % 2)
        {
            currLen++;
        }
        else
        {
            maxLen = max(maxLen, currLen);
            currLen = 1;
        }
    }

    if (maxLen == 0)
    {
        return 0;
    }
    return max(maxLen, currLen);
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Length of the longest alternating even-odd subarray: " << longestEvenOddSubarray(arr) << endl;

    return 0;
}
