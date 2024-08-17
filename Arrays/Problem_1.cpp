/*

Largest Number In An Array

Given an array arr of size N, the task is to find the largest element in the given array. 

Example: 

Input: arr[] = {10, 20, 4}
Output: 20

Input : arr[] = {20, 10, 20, 4, 100}
Output : 100
*/

#include <iostream>
#include <vector>
using namespace std;

int largestNumber(vector<int> arr)
{
    int n = arr.size();
    int largestNumber = arr[0];

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > largestNumber)
        {
            largestNumber = arr[i];
        }
    }
    return largestNumber;
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

    cout << largestNumber(arr) << endl;

}