#include <iostream>
#include <vector>

using namespace std;

int FindPivot(vector<int> arr, int size)
{
    int start = 0, end = size - 1, mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }

        mid = start + (end - start) / 2;
    }
    return start;
}

int BinarySearch(vector<int> arr, int s, int e, int key)
{
    int start = s, end = e, mid = s + (e - s) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
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
    return -1;
}

int SearchInRotatedSortedArr(vector<int> arr, int n, int target)
{
    int indexOfPivot = FindPivot(arr, n);

    if (target >= arr[indexOfPivot] && target <= arr[n - 1])
    {
        return BinarySearch(arr, indexOfPivot, n - 1, target);
    }
    else
    {
        return BinarySearch(arr, 0, indexOfPivot - 1, target);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};

    int indexName = SearchInRotatedSortedArr(arr, arr.size(), 1);

    cout << "Index :" << endl;
    cout << indexName << endl;

    return 0;
}