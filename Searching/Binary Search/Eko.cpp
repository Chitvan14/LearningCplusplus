#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int> arr, int size, int mid, int woodAmountNeeded)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        if (mid <= arr[i])
        {
            sum = sum + (arr[i] - mid);
        }
    }

    if (sum > woodAmountNeeded)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int eko(vector<int> arr, int size, int woodAmountNeeded)
{
    int s = 0, maxi = -1;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int m = s + (e - s) / 2;
    int ans = 0;
    while (s <= e)
    {
        if (isPossible(arr, size, m, woodAmountNeeded))
        {
            ans = m;
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // 5 20
    // 4 42 40 26 46

    // 4 7
    // 20 15 10 17
    vector<int> Arr = {4, 42, 40, 26, 46};
    int woodAmountNeeded = 20;

    int val = eko(Arr, Arr.size(), woodAmountNeeded);

    cout << "Print Answer :" << endl;
    cout << val << endl;

    return 0;
}