#include <iostream>
#include <vector>

using namespace std;
void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(nums, output, index + 1, ans);

    // include
    output.push_back(nums[index]);
    solve(nums, output, index + 1, ans);
}
vector<vector<int>> Subset(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}

vector<vector<int>> Subsetusingbitmanipulation(vector<int> &nums)
{
    vector<vector<int>> ans;
    int n = nums.size();
    int noofsubset = pow(2, n);

    for (int i = 0; i < noofsubset; i++)
    {
        vector<int> subset;
        for (int j = 0; j < n; j++)
        {
            if ((i >> j) & 1)
            {
                subset.push_back(nums[j]);
            }
        }
        ans.push_back(subset);
    }
    return ans;
}
vector<int> fib(int n, int m, int k, vector<int> &ans)
{

    if (ans.size() > k - 1)
    {

        return ans;
    }
    else
    {

        ans.push_back(n);

        return fib(m, n + m, k, ans);
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr{1, 2, 3};
    vector<vector<int>> vec = Subsetusingbitmanipulation(arr);

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    vector<int> ans;

    for (int j = 0; j < fib(0, 1, 1, ans).size(); j++)
    {
        cout << fib(0, 1, 10, ans)[j] << " ";
    }
    return 0;
}