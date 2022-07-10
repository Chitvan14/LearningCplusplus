#include <iostream>

using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1, mid = start + (end - start) / 2;

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

    int indexEven = BinarySearch(evenArr, 6, 8);

    cout << "Even Index :" << endl;
    cout << indexEven << endl;

    // odd
    //  3 4 5 6 7
    //  4 3 6 5 7
    int oddArr[5] = {3, 4, 5, 6, 7};

    int indexOdd = BinarySearch(oddArr, 5, 6);

    cout << "Odd Index :" << endl;
    cout << indexOdd << endl;

    return 0;
}