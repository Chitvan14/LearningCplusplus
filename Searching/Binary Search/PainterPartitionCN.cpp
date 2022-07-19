#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int> arr, int size, int mid, int numberOfPainterAvailable)
{
    int sum = 0;
    int countPainter = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] + sum <= mid)
        {
            sum = sum + arr[i];
        }
        else
        {
            countPainter++;
            if (countPainter > numberOfPainterAvailable)
            {
                return false;
            }
            sum = arr[i];
        }
    }
    return true;
}

int painterPartition(vector<int> arr, int size, int numberOfPainterAvailable)
{
    int s = 0, sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    int e = sum;
    int m = s + (e - s) / 2;
    int ans = 0;
    while (s <= e)
    {
        if (isPossible(arr, size, m, numberOfPainterAvailable))
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

    vector<int> Arr = {10 ,20 ,30 ,40};
    int numberOfPainterAvailable = 2;

    int val = painterPartition(Arr, Arr.size(), numberOfPainterAvailable);

    cout << "Print Answer :" << endl;
    cout << val << endl;

    return 0;
}