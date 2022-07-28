#include <iostream>
#include <array>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Check Element at 2nd index >> " << a.at(2) << endl;
    cout << "Check t/f if array empty or not >> " << a.empty() << endl;

    cout << "Get First Element >> " << a.front() << endl;
    cout << "Get Last Element >> " << a.back() << endl;
    return 0;
}