/*

Problem Statement:

Given a sorted array, arr[] consisting of N integers, the task is to find the frequencies of each array element.

Input: arr[] = {1, 1, 1, 2, 3, 3, 5, 5, 8, 8, 8, 9, 9, 10} 
Output: Frequency of 1 is: 3
              Frequency of 2 is: 1
              Frequency of 3 is: 2
              Frequency of 5 is: 2
              Frequency of 8 is: 3
              Frequency of 9 is: 2
              Frequency of 10 is: 1

Input: arr[] = {2, 2, 6, 6, 7, 7, 7, 11} 
Output:  Frequency of 2 is: 2
               Frequency of 6 is: 2
               Frequency of 7 is: 3
               Frequency of 11 is: 1

*/


#include <iostream>
#include <vector>

using namespace std;

void PrintFrequency(vector<int>& arr)
{
    int n = arr.size();

    int freq = 1;

    for(int i=1; i<n; i++)
    {
        // if current element and previous element are same
        if(arr[i] == arr[i-1])
        {
            freq++;
        }
        // if current element and previous element are not same
        else
        {
            // Print the frequency of previous element
            cout << "Frequency of " << arr[i-1] << " is: " << freq << endl;
            // reset freq to 1
            freq = 1;
        }
    }
    // Print the frequency of last element
    cout << "Frequency of " << arr[n-1] << " is: " << freq << endl;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    PrintFrequency(arr);

    return 0;
}
