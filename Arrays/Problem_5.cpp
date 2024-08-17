#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums)
{
    int n = nums.size();

    int res = 1;

    for(int i=1; i<n; i++)
    {
        if(nums[res-1] != nums[i])
        {
            nums[res] = nums[i];
            res++;
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << removeDuplicates(arr) << endl;

    return 0;
}
