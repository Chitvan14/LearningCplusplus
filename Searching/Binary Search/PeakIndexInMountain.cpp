#include <iostream>
#include <vector>

using namespace std;

int peakIndexInMountainArray(vector<int> arr, int size)
{
    int start = 0, end = size - 1, mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        int curr = arr[mid];
        int next = arr[mid + 1];
        int prev = arr[mid - 1];

        if (curr > next && curr > prev)
        {
            return mid;
        }
        else if (curr > next && curr < prev)
        {
            end = mid;
        }
        else if (curr < next && curr > prev)
        {
            start = mid;
        }
    }
    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> Arr = {0, 1, 10, 5, 4, 3, 2, 1, 0};

    int indexVal = peakIndexInMountainArray(Arr, Arr.size());

    cout << "Index :" << endl;
    cout << indexVal << endl;

    return 0;
}