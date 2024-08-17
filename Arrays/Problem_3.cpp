/*
Given an array of size n, write a program to check if it is sorted in ascending order or not. Equal values are allowed in an array and two consecutive equal values are considered sorted.

Examples:

Input : 20 21 45 89 89 90
Output : Yes

Input : 20 20 45 89 89 90
Output : Yes

Input : 20 20 78 98 99 97
Output : No
*/

#include <iostream>
#include <vector>
using namespace std;

bool IsArraySorted(vector<int> arr)
{
    int n = arr.size();

    for(int i=1; i<n; i++)
    {
        if(arr[i] < arr[i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    IsArraySorted(arr);
    return 0;
}
