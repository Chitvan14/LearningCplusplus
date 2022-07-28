#include <iostream>
#include <deque>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(4);
    d.push_front(5);
    d.push_front(6);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "pop_back " << endl;
    d.pop_back();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "pop_front " << endl;
    d.pop_front();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Check Element at 2nd index >> " << d.at(2) << endl;
    cout << "Check t/f if deque empty or not >> " << d.empty() << endl;

    cout << "Get First Element >> " << d.front() << endl;
    cout << "Get Last Element >> " << d.back() << endl;

    cout << "Before erase size >> " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase size >> " << d.size() << endl;
    cout<<"Checking remaing array after erasing"<<endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}