#include <iostream>

using namespace std;

int FindUnique(int arr[], int n)
{
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        // Understand whats happening
        // cout<<ans<<"^"<<arr[i]<<"="<<(ans^arr[i])<<endl;
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[7] = {11, 4, 22, 30, 30, 22, 11};

    cout << FindUnique(arr, 7) << endl;

    return 0;
}