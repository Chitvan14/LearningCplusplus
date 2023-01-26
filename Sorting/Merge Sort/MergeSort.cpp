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
void PrintArr2(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void merge(vector<int> &arr, int s, int e, int n)
{
    int mid = (e + s) / 2;
    // get length for left and right
    int leng1 = mid - s + 1;
    int leng2 = e - mid;
    // create arr for left and right
    int *left = new int[leng1];
    int *right = new int[leng2];
    // copy values in left and right
    int mainArrayindex = s;
    for (int i = 0; i < leng1; i++)
    {
        left[i] = arr[mainArrayindex++];
    }

    mainArrayindex = mid + 1;
    for (int i = 0; i < leng2; i++)
    {
        right[i] = arr[mainArrayindex++];
    }
    // merge 2 sorted arrs
    int index1 = 0;
    int index2 = 0;
    mainArrayindex = s;
    while (index1 < leng1 && index2 < leng2)
    {
        if (left[index1] < right[index2])
        {
            arr[mainArrayindex++] = left[index1++];
        }
        else
        {
            arr[mainArrayindex++] = right[index2++];
        }
    }
    while (index1 < leng1)
    {
        arr[mainArrayindex++] = left[index1++];
    }

    while (index2 < leng2)
    {
        arr[mainArrayindex++] = right[index2++];
    }
    // cout << "left " << endl;
    // PrintArr2(left, leng1);
    // cout << "right " << endl;
    // PrintArr2(right, leng2);
    // cout << endl;
    // delete arr for left and right
    delete[] left;
    delete[] right;
}
void MergeSort(vector<int> &arr, int s, int e, int n)
{
    if (s >= e)
    {
        return;
    }

    int mid = (e + s) / 2;
    // sort left
    MergeSort(arr, s, mid, n);
    // sort right
    MergeSort(arr, mid + 1, e, n);
    // merge
    merge(arr, s, e, n);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> arr = {10, 40, 30, 20, 50, 60};
    MergeSort(arr, 0, arr.size() - 1, arr.size());

    return 0;
}