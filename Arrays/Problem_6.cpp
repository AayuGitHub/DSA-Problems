#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        int count = 0;

        for(int i=0; i<n; i++)
        {
            if(nums[i] != 0)
            {
                nums[count] = nums[i];
                count++;
            }
        }
        for(int i=count; i<n; i++)
        {
            nums[i] = 0;
        }
    }

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];   
    }

    moveZeroes(arr);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}