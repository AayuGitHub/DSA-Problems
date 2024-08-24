/*
Problem Statement:

MIN To MAX

You are given an array A of size N.

Let M be the minimum value present in the array initially.

In one move, you can select any element \( A_i \) (where \( i \) is between 1 and \( N \)) and replace it with any integer \( X \) (where \( X \) is between 1 and 100).
*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int MinToMax(vector<int> &arr)
{
    int n = arr.size();

    int M = *min_element(arr.begin(), arr.end());

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > M)
        {
            count++;
        }
    }
    return count;
}

int main()
{

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The operations required: " << MinToMax(arr) << endl;

    return 0;
}
