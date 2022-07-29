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

vector<int> ReverseArray(vector<int> arr, int n)
{

    int s = 0, e = n - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    return arr;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {1, 2, 3, 4};
    cout << "Origanl" << endl;
    PrintArr(arr, arr.size());
    cout << endl;
    cout << "Revered" << endl;
    PrintArr(ReverseArray(arr, arr.size()), arr.size());

    return 0;
}