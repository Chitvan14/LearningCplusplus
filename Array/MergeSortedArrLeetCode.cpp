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

// Algo
void MergeArr(vector<int> arr1, int n1, vector<int> arr2, int n2, vector<int> arr3)
{
    // cout << "IN" << endl;
    int i = 0, j = 0;
    int k = 0;

    // debugging
    //  PrintArr(arr1, arr1.size());
    //  PrintArr(arr2, arr2.size());
    //  PrintArr(arr3, arr3.size());

    // cout << endl;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    // debugging
    //  PrintArr(arr1, arr1.size());
    //  PrintArr(arr2, arr2.size());
    //  PrintArr(arr3, arr3.size());

    // cout << endl;

    while (i < n1)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < n2)
    {
        arr3[k++] = arr2[j++];
    }

    // debugging
    //  PrintArr(arr1, arr1.size());
    //  PrintArr(arr2, arr2.size());
    //  PrintArr(arr3, arr3.size());

    // cout << endl;

    // cout << "OUT" << endl;
    PrintArr(arr3, arr3.size());
}

// LeetCode
void MergeArrLC(vector<int> arr1, int n1, vector<int> arr2, int n2)
{
    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] == 0)
        {
            arr1[i] = arr2[j++];
        }
        i++;
    }

    while (j < n2)
    {
        arr1[i++] = arr2[j++];
    }
    
    sort(arr1.begin(), arr1.end());
    PrintArr(arr1, arr1.size());
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {1, 2, 3, 4, 0, 0, 0, 0};
    vector<int> arr2 = {5, 6, 7, 8};
    // vector<int> arr3(8);
    // MergeArr(arr, arr.size(), arr2, arr2.size(), arr3);
    MergeArrLC(arr, arr.size(), arr2, arr2.size());

    return 0;
}