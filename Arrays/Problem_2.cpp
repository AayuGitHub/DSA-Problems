/*

Second Largest Number In An Array

Given an array of integers, our task is to write a program that efficiently finds the second largest element present in the array.

Example:

Input: arr[] = {12, 35, 1, 10, 34, 1}
Output: The second largest element is 34.
Explanation: The largest element of the
array is 35 and the second
largest element is 34

Input: arr[] = {10, 5, 10}
Output: The second largest element is 5.
Explanation: The largest element of
the array is 10 and the second
largest element is 5

*/

#include <iostream>
#include <vector>
using namespace std;

int second_Largest_Number(vector<int> arr)
{
    int n = arr.size();

    int largestNumber = arr[0];
    int result = -1;

    for (int i = 0; i < n; i++)
    {
        // arr[i] is greater than largestNumber
        if (arr[i] > largestNumber)
        {
            result = largestNumber;
            largestNumber = i;
        }
        // arr[i] = largestNumber then Ignore, nothing will be changed!

        // arr[i] is smaller than largestNumber
        else if (arr[i] < largestNumber)
        {
            if (result == -1)
            {
                result = i;
            }
            else if (arr[i] > result)
            {
                result == i;
            }
        }
    }
    return result;
}

int main()
{
    int n;  
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << second_Largest_Number(arr) << endl;

    return 0;
}
