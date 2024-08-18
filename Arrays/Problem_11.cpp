/*

Problem Statement:

Stock Buy and Sell Problem

In a realm where numbers hold secrets, a captivating challenge awaits, which is, Stock Buy and Sell Problem !!!

Our Task: The cost of a stock on each day is given in an array. Find the maximum profit that you can make by buying and selling on those days. If the given array of prices is sorted in decreasing order, then profit cannot be earned at all.

Input: arr[] = {100, 180, 260, 310, 40, 535, 695}
Output: 865
Explanation: Buy the stock on day 0 and sell it on day 3 => 310 – 100 = 210
                       Buy the stock on day 4 and sell it on day 6 => 695 – 40 = 655
                       Maximum Profit  = 210 + 655 = 865
Input: arr[] = {4, 2, 2, 2, 4}
Output: 2
Explanation: Buy the stock on day 1 and sell it on day 4 => 4 – 2 = 2
                       Maximum Profit  = 2

*/

#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& arr)
{
    int profit = 0;

    int n = arr.size();

    for(int i=1; i<n; i++)
    {
        if(arr[i] > arr[i-1])
        {
            profit += arr[i] - arr[i-1];
        }
    }
    return profit;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << maxProfit(arr) << endl;

    return 0;
}
