#include <iostream>
#include <vector>

using namespace std;

void PrintArr(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // now left and right sorting
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] >= pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
void QuickSort(vector<int> &arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // Partition
    int p = partition(arr, s, e);
    // Leftpart sort
    QuickSort(arr, s, p - 1);
    // Rightpart sort
    QuickSort(arr, p + 1, e);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> arr = {10, 40, 30, 20, 50, 60, 100, 70, 80, 90};
    QuickSort(arr, 0, arr.size() - 1);
    PrintArr(arr, arr.size());
    return 0;
}