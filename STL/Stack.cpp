#include <iostream>
#include <stack>

// Last IN First OUT

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    stack<string> s;
    s.push("Chitvan");
    s.push("Garg");
    s.push("is");
    s.push("Learning");
    s.push("C++");

    cout << "Top Element >> " << s.top() << endl;

    cout << "Size >> " << s.size() << endl;
    s.pop();
    cout << "Size >> " << s.size() << endl;

     cout << "Top Element after pop >> " << s.top() << endl;

    cout << "Check t/f if stack empty or not >> " << s.empty() << endl;

    return 0;
}