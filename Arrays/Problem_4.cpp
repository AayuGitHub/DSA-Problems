/*

Reverse An Array

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}

*/

#include <iostream>
#include <vector>
using namespace std;

void reverseAnArray(vector<int> &arr)
{
    int n = arr.size();

    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        swap(arr[low++], arr[high--]);
    }
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

    cout << "Original Array : " << endl;

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    reverseAnArray(arr);

    cout << endl;

    cout << "Reversed Array : " << endl;

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
