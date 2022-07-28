#include <iostream>
#include <set>

// Store unique elements
// Sorted order
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    set<int> s;
    s.insert(8);
    s.insert(8);
    s.insert(8);
    s.insert(8);
    s.insert(8);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(2);

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Erase number from between we use iterator" << endl;
    set<int>::iterator it = s.begin();
    // Cant print like this
    // cout<<"Value of it >> "<<it<<endl;
    s.erase(it);
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Erase 1st index using iterator" << endl;
    set<int>::iterator it2 = s.begin();
    it2++;
    s.erase(it2);

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Count 6 in set >> " << s.count(6) << endl;
    cout << "Count 5 in set >> " << s.count(5) << endl;

    cout << "So print like this" << endl;
    set<int>::iterator it3 = s.find(6);
    for (auto i = it3; i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}