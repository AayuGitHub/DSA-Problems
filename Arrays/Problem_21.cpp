
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void IsIncreasing(vector<int> &a)
{
    int n = a.size();

    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            count++;
        }
    }

    if (count > 0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    IsIncreasing(a);
    return 0;
}
