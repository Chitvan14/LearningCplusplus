#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int> rank, int size, int mid, int dishes)
{
    int sumofdish = 0;

    for (int i = 0; i < size; i++)
    {
        int time = 0, dish = 0;
        while (time + ((dish + 1) * rank[i]) <= mid)
        {
            time = time + ((dish + 1) * rank[i]);
            dish++;
        }
        sumofdish += dish;
        if (sumofdish >= dishes)
        {
            return true;
        }
    }
    return false;
}

int cookingNinja(vector<int> rank, int size, int dishes)
{
    int s = 0, e = 0;
    int highestValueOfRank = rank[size - 1];
    for (int i = 1; i <= dishes; i++)
    {
        e = e + (highestValueOfRank * i);
    }
    int m = s + (e - s) / 2;
    int ans = 0;

    while (s <= e)
    {
        if (isPossible(rank, size, m, dishes))
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
    // 8 8
    // 1 1 1 1 1 1 1 1

    // 4 10
    // 1 2 3 4

    // 1 1
    // 10
    vector<int> rank = {1, 1, 1, 1, 1, 1, 1, 1};
    int dishes = 8;

    int val = cookingNinja(rank, rank.size(), dishes);

    cout << "Print Answer :" << endl;
    cout << val << endl;

    return 0;
}