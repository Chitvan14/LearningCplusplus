#include <iostream>

using namespace std;

void PrintArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void CustomSwap(int &arrValFirst, int &arrValSecond)
{
    int temp = 0;
    temp = arrValFirst;
    arrValFirst = arrValSecond;
    arrValSecond = temp;
}

void SwapAlternative(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            CustomSwap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // even
    //  3 4 5 6 7 8
    //  4 3 6 5 8 7
    int evenArr[6] = {3, 4, 5, 6, 7, 8};

    SwapAlternative(evenArr, 6);

    PrintArr(evenArr, 6);

    // odd
    //  3 4 5 6 7
    //  4 3 6 5 7
    int oddArr[5] = {3, 4, 5, 6, 7};

    SwapAlternative(oddArr, 5);

    PrintArr(oddArr, 5);

    return 0;
}