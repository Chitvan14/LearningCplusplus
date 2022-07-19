#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

bool isPossible(vector<int> arr, int size, int mid, int numberOfCows)
{
    int lastPos = arr[0];
    int countCow = 1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] - lastPos >= mid)
        {
            countCow++;
            if (countCow == numberOfCows)
            {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> arr, int size, int numberOfCows)
{

    sort(arr.begin(), arr.end());
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
        if (isPossible(arr, size, m, numberOfCows))
        {
            ans = m;
            s = m + 1;
        }
        else
        {
            e = m - 1;
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

    vector<int> Arr = {4, 2, 1, 3, 6};
    int numberOfCows = 2;

    int val = aggressiveCows(Arr, Arr.size(), numberOfCows);

    cout << "Print Answer :" << endl;
    cout << val << endl;

    return 0;
}