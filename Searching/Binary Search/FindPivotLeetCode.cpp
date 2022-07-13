#include <iostream>
#include <vector>

using namespace std;

int FindPivot(vector<int> arr, int size)
{
    int start = 0, end = size - 1, mid = start + (end - start) / 2;

    while (start < end)
    {
        cout << " start " << start;
        cout << " mid " << mid;
        cout << " end " << end;
        cout << endl;

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

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};

    int indexName = FindPivot(arr, arr.size());

    cout << "Index :" << endl;
    cout << indexName << endl;

    return 0;
}