/*

Given an array arr[] of integers, find out the maximum difference between any two elements such that larger element appears after the smaller number. 

Examples : 

Input : arr = {2, 3, 10, 6, 4, 8, 1}
Output : 8
Explanation : The maximum difference is between 10 and 2.

Input : arr = {7, 9, 5, 6, 3, 2}
Output : 2
Explanation : The maximum difference is between 9 and 7.

*/

#include <iostream>
#include <vector>

using namespace std;

int maxDifference(vector<int>& arr)
{
    int n = arr.size();
    int maxDiff = arr[1] - arr[0];

    int minElement = arr[0];

    for(int i=0; i<n; i++)
    {
        // if difference between arr[i] and minElement is greater than maxDiff
        if((arr[i] - minElement) > maxDiff)
        {
            maxDiff = arr[i] - minElement;
        }
        if(arr[i] < minElement)
        {
            minElement = arr[i];
        }
    }
    return maxDiff;
}

int main() {
    
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << maxDifference(arr) << endl;

    return 0;
}
