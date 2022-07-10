#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int FirstOcc(vector<int> arr, int size, int key)
{
    int start = 0, end = size - 1, mid = start + (end - start) / 2;

    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int LastOcc(vector<int> arr, int size, int key)
{
    int start = 0, end = size - 1, mid = start + (end - start) / 2;

    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

pair<int, int> FirstAndLastOcc(vector<int> arr, int n, int k)
{
    pair<int, int> p;
    p.first = FirstOcc(arr, n, k);
    p.second = LastOcc(arr, n, k);

    return p;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> arr = {3, 4, 5, 5, 6, 7, 8};

    pair<int, int> res = FirstAndLastOcc(arr, 6, 5);
    cout << "First Occ is : " << res.first << endl;
    cout << "Last Occ is : " << res.second << endl;

    // Find Total Number Of Occ
    cout << "Total Number Of Occ : " << (res.second - res.first) + 1 << endl;
    return 0;
}