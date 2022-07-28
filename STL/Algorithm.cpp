#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Binary Search
    vector<int> bv;
    bv.push_back(5);
    bv.push_back(3);
    bv.push_back(7);
    bv.push_back(1);
    bv.push_back(9);

    cout << "Using Binary Search lets find 7 and 10 in bv" << endl;
    cout << "7? >> " << binary_search(bv.begin(), bv.end(), 7) << endl;
    cout << "10? >> " << binary_search(bv.begin(), bv.end(), 10) << endl;

    cout << "-----------------------------" << endl;
    cout << "Upper Bound & Lower Bound" << endl;
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(1);
    v.push_back(7);

    cout << "Lower Bound of 7 >> " << lower_bound(v.begin(), v.end(), 7) - v.begin() << endl;
    cout << "Upper Bound of 7 >> " << upper_bound(v.begin(), v.end(), 7) - v.begin() << endl;

    cout << "-----------------------------" << endl;
    cout << "Max, Min, Swap & Reverse" << endl;
    int a = 8;
    int b = 1;
    cout << "a -> " << a << endl;
    cout << "b -> " << b << endl;
    cout << endl;
    cout << "Max >> " << max(a, b) << endl;
    cout << "Min >> " << min(a, b) << endl;
    cout << endl;
    cout << "swaping >> " << endl;
    cout << "a -> " << a << endl;
    cout << "b -> " << b << endl;
    cout << endl;
    string something = "abcdefghijklmnopqrstuvwxyz";
    cout << "string -> " << something << endl;
    cout << "reverse >> " << endl;
    reverse(something.begin(), something.end());
    cout << "Re. string -> " << something << endl;
    cout << endl;
    vector<int> vrotation;
    vrotation.push_back(1);
    vrotation.push_back(9);
    vrotation.push_back(3);
    vrotation.push_back(4);
    vrotation.push_back(2);
    cout << "Before vrotation vector" << endl;
    for (auto i : vrotation)
    {
        cout << i << " ";
    }
    cout << endl;
    rotate(vrotation.begin(), vrotation.begin() + 1, vrotation.end());
    cout << "After vrotation vector" << endl;
    for (auto i : vrotation)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    // Intro Sort - quick, heap and insertion sort
    cout << "IntroSort of vrotation" << endl;
    sort(vrotation.begin(), vrotation.end());
    for (auto i : vrotation)
    {
        cout << i << " ";
    }
    return 0;
}