#include <iostream>
#include <vector>

using namespace std;
bool isPossible(vector<int> arr, int size, int mid, int students)
{
    int pageSum = 0;
    int studentCount = 1;
    for (int i = 0; i < size; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum = pageSum + arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > students || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}
int AllocateBooks(vector<int> arr, int size, int students)
{
    int s = 0, sum = 0, e, m, ans;
    for (int i = 0; i < size; i++)
    {
        sum = arr[i] + sum;
    }
    e = sum;
    m = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, size, m, students))
        {
            ans = m;
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> arr = {10, 20, 30, 40};
    int numberOfStudents = 2;
    cout << "Printing Answer " << AllocateBooks(arr, arr.size(), numberOfStudents) << endl;
    return 0;
}