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

vector<int> SelectionSort(vector<int> arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    return arr;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> arr = {10, 40, 30, 20, 50, 60};

    PrintArr(SelectionSort(arr, arr.size()), arr.size());
    return 0;
}