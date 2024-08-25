// 56. Merge Intervals

/*

Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    int n = intervals.size();

    if (intervals.empty())
        return {};

    sort(intervals.begin(), intervals.end());

    vector<vector<int>> mergedIntervals;
    mergedIntervals.push_back(intervals[0]);

    for (size_t i = 1; i < n; i++)
    {
        if (intervals[i][0] <= mergedIntervals.back()[1])
        {
            mergedIntervals.back()[1] = max(mergedIntervals.back()[1], intervals[i][1]);
        }
        else
        {
            mergedIntervals.push_back(intervals[i]);
        }
        return mergedIntervals;
    }
}

int main()
{
    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));
    cout << "Enter the intervals: ";
    for (int i = 0; i < n; i++)
    {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    vector<vector<int>> mergedIntervals = merge(intervals);
    cout << "Merged intervals: ";
    for (const auto &interval : mergedIntervals)
    {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }

    return 0;
}
