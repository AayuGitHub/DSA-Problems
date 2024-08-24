#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int SumOfLargestAndSecondLargest(vector<int>& a)
{
    int n = a.size();
    int max = a[0];
    int secondMax = a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            secondMax = max;
            max = a[i];
        }
        else if(a[i] > secondMax && a[i] < max)
        {
            secondMax = a[i];
        }   
    }
    return max + secondMax;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "The sum of the largest and second largest elements is: " << SumOfLargestAndSecondLargest(a) << endl;


    return 0;
}
