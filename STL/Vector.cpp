#include <iostream>
#include <vector>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cout << "-- Vector Name v2 --" << endl;
    vector<int> v2(5, 1);
    for (int i : v2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "-- Vector Name v2Copy --" << endl;
    vector<int> v2Copy(v2);
    for (int i : v2Copy)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "-- Vector Name v --" << endl;
    vector<int> v;
    cout << "Capacity >> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity >> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity >> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity >> " << v.capacity() << endl;
    cout << "Size >> " << v.size() << endl;

    cout << "Check Element at 2nd index >> " << v.at(2) << endl;

    cout << "Get First Element >> " << v.front() << endl;
    cout << "Get Last Element >> " << v.back() << endl;

    cout << "Before POP " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "After POP " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before Capacity >> " << v.capacity() << endl;
    cout << "Before Size >> " << v.size() << endl;
    v.clear();
    cout << "After Capacity >> " << v.capacity() << endl;
    cout << "After Size >> " << v.size() << endl;

    return 0;
}