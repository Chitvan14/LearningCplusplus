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

void MoveZeroo(vector<int> arr, int n)
{
    int s = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[s]);
            s++;
        }
    }
    PrintArr(arr, n);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {0, 1, 0, 3, 12};
    MoveZeroo(arr, arr.size());
    return 0;
}