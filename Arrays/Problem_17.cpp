/*
Cost of Groceries
Chef visited a grocery store for fresh supplies. There are
N
N items in the store where the
i
t
h
i
th
  item has a freshness value
A
i
A
i
​
  and cost
B
i
B
i
​
 .

Chef has decided to purchase all the items having a freshness value greater than equal to
X
X. Find the total cost of the groceries Chef buys.

*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int CostOfGroceries(vector<int> &freshness, vector<int> &cost, int x)
{
    int n = freshness.size();

    int totalCost = 0;

    for (int i = 0; i < n; i++)
    {
        if (freshness[i] >= x)
        {
            totalCost += cost[i];
        }
    }
    return totalCost;
}

int main()
{
    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    vector<int> freshness(n);
    vector<int> cost(n);

    cout << "Enter the freshness values of the items: ";
    for (int i = 0; i < n; i++)
    {
        cin >> freshness[i];
    }

    cout << "Enter the cost of the items: ";
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    int x;
    cout << "Enter the minimum freshness value: ";
    cin >> x;

    cout << "Total cost of groceries: " << CostOfGroceries(freshness, cost, x) << endl;

    return 0;

    return 0;
}
