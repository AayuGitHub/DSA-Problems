
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int RunCompare(vector<int>& a, vector<int>& b)
{
    int n = a.size();
    int result = 0;

    for(int i=0; i<n; i++)
    {
        if(a[i] < b[i])
        {
            if(b[i] <= 2 * a[i])
            {
                result++;
            }
        }
        else if(b[i] < a[i])
        {
            if(a[i] <= 2 * b[i])
            {
                result++;
            }
        }
        else if(a[i] == b[i])
        {
            result++;
        }
    }

    return result;
}

int main() {
    
    int n;
    cout << "Enter the number of elements in the arrays: ";
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    cout << "Enter the elements of array a: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the elements of array b: ";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int result = RunCompare(a, b);

    cout << "Result: " << result << endl;

    return 0;
}
