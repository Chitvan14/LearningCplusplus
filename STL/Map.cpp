#include <iostream>
#include <map>

// {key : value}
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    map<int, string> m;
    m[1] = "We";
    m[2] = "are";
    m[3] = "learning";
    m[4] = "map";
    m[5] = "using";
    m[6] = "STL";
    m.insert({7, "~Chitvan"});

    cout << "Printing Keys" << endl;
    for (auto i : m)
    {
        cout << i.first << " ";
    }
    cout << endl;

    cout << "Printing Values" << endl;
    for (auto i : m)
    {
        cout << i.second << " ";
    }
    cout << endl;

    cout << "Find 5 using count in MAP >> " << m.count(5) << endl;
    cout << "Find 135 using count in MAP >> " << m.count(13) << endl;

    cout << "Before Erasing" << endl;
    for (auto i : m)
    {
        cout << i.first << " -> " << i.second << " " << endl;
    }
    cout << endl;

    m.erase(4);
    cout << "After Erasing 4th position" << endl;
    for (auto i : m)
    {
        cout << i.first << " -> " << i.second << " " << endl;
    }
    cout << endl;

    // If we dont find the number it will not print the loop
    //  auto it = m.find(4);
    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << " -> " << (*i).second << " " << endl;
    }
    cout << endl;
    return 0;
}