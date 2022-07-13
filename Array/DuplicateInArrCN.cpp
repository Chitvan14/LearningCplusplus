#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int> &arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        // Understand whats happening
        // cout<<ans<<"^"<<arr[i]<<"="<<(ans^arr[i])<<endl;

        ans = ans ^ arr[i];
    }

    cout << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        // Understand whats happening
        // cout<<ans<<"^"<<i<<"="<<(ans^i)<<endl;

        ans = ans ^ i;
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {1, 2, 1, 3, 4};
    cout << findDuplicate(arr) << endl;
    return 0;
}