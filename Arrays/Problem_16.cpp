/*

Take discount or Not
There are 
N
N items in a shop. You know that the price of the 
i
i-th item is 
A
i
A 
i
​
 . Chef wants to buy all the 
N
N items.

There is also a discount coupon that costs 
X
X rupees and reduces the cost of every item by 
Y
Y rupees. If the price of an item was initially 
≤
Y
≤Y, it becomes free, i.e, costs 
0
0.

Determine whether Chef should buy the discount coupon or not. Chef will buy the discount coupon if and only if the total price he pays after buying the discount coupon is strictly less than the price he pays without buying the discount coupon.

*/



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void TakeDiscountOrNot(vector<int> &arr, int n, int x, int y)
{
    int priceBeforeDiscount = 0;
    int priceAfterDiscount = 0;

    for (int i = 0; i < n; i++)
    {
        priceBeforeDiscount += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = max(arr[i] - y, 0);
        priceAfterDiscount += arr[i];
    }

    if (priceAfterDiscount + x < priceBeforeDiscount)
        cout << "COUPON" << endl;
    else
        cout << "NO COUPON" << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the value of Price of Discount Coupon: ";
    cin >> x;

    int y;
    cout << "Enter the value of Discount on each item: ";
    cin >> y;

    cout << "Result: ";
    TakeDiscountOrNot(arr, n, x, y);


    return 0;
}
