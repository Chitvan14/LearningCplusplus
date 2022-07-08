#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    map<int, int> m;
    for (auto i : arr)
    {
        m[i] += 1;
    }
    set<int> s;
    for (auto i : m)
    {
        if (s.count(i.second) > 0)
        {
            return false;
        }
        else
        {
            s.insert(i.second);
        }
    }
    return true;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // arr = [1,2,2,1,1,3]
    // true

    // arr = [1,2]
    // false

    // arr = [-3,0,1,-3,1,1,1,-3,10,0]
    // true
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    cout << uniqueOccurrences(arr) << endl;

    return 0;
}