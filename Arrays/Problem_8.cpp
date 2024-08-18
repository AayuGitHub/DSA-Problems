/*

Write a program to print all the LEADERS in the array. An element is a leader if it is greater than all the elements to its right side. And the rightmost element is always a leader.

For example:

Input: arr[] = {16, 17, 4, 3, 5, 2},
Output: 17, 5, 2

Input: arr[] = {1, 2, 3, 4, 5, 2},
Output: 5, 2

*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> PrintLeaders(vector<int> arr)
{
    int n = arr.size();

    vector<int> leaders;

    //  Right Most element in array is always a Leader because there is no element on the right side of it

    int currentLeader = arr[n - 1];

    leaders.push_back(currentLeader);

    for (int i = n-2; i >= 0; i--)
    {
        if (arr[i] > currentLeader)
        {
            currentLeader = arr[i];
            leaders.push_back(currentLeader);
        }
    }
    return leaders;
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

    vector<int> leaders = PrintLeaders(arr);

    cout << "Leaders: ";
    for (int i = leaders.size() - 1; i >= 0; i--)
    {
        cout << leaders[i];
        if (i > 0)
        {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
