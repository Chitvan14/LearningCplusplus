#include <iostream>
#include <vector>
#include <set>

using namespace std;

void PrintArr(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// TC : O(n) and SC : O(n)
vector<int> findAllDuplicate(vector<int> &arr)
{
  set<int> s;
  vector<int> arrResult;
  for (auto i : arr)
  {
    if (s.count(i) > 0)
    {

      arrResult.push_back(i);
    }
    else
    {
      s.insert(i);
    }
  }
  return arrResult;
}

// More Optimised
// TC : O(n) and SC : O(1)
vector<int> findAllDuplicate2(vector<int> &arr)
{
  vector<int> arrResult;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[abs(arr[i]) - 1] < 0)
    {
      arrResult.push_back(abs(arr[i]));
    }
    else
    {
      arr[abs(arr[i]) - 1] *= -1;
    }
  }
  return arrResult;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  vector<int> arr = {1, 3, 2, 8, 8, 2, 3, 1};

  // PrintArr(findAllDuplicate(arr), findAllDuplicate(arr).size());

  PrintArr(findAllDuplicate2(arr));

  return 0;
}