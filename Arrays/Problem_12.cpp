/*

Trapping Rain Water

Given an array of N non-negative integers arr[] representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

Examples:  

Input: arr[] = {2, 0, 2}
Output: 2
Explanation: The structure is like below.
We can trap 2 units of water in the middle gap.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int FindWater(vector<int>& arr)
{
    int n = arr.size();
    int water = 0;
    vector<int> left(n), right(n);

    // Fill the left array
    left[0] = arr[0];

    for(int i=1; i<n; i++)
    {
        left[i] = max(left[i-1], arr[i]);
    }

    // Fill the right array
    right[n-1] = arr[n-1];

    for (int i = n-2; i >= 0; i--)
    {
        right[i] = max(right[i+1], arr[i]);
    }

    for(int i=1; i<n-1; i++)
    {
        int var = min(left[i-1], right[i+1]);
        if(var > arr[i])
        {
            water += var - arr[i];
        }
    }
    return water;
}

int main() {

    return 0;
}
