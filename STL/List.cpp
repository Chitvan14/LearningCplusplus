#include <iostream>
#include <list>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cout << "-- List Name l2 --" << endl;
    list<int> l2(5, 1);
    for (int i : l2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "-- List Name l2Copy --" << endl;
    list<int> l2Copy(l2);
    for (int i : l2Copy)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "-- List Name l --" << endl;
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);
    l.push_front(5);
    l.push_front(6);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before erase size >> " << l.size() << endl;
    l.erase(l.begin());
    cout << "After erase size >> " << l.size() << endl;
    cout << "Checking remaing array after erasing" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Check t/f if list empty or not >> " << l.empty() << endl;

    cout << "Get First Element >> " << l.front() << endl;
    cout << "Get Last Element >> " << l.back() << endl;
    return 0;
}