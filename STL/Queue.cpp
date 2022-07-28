#include <iostream>
#include <queue>

// First IN First OUT

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    queue<string> q;
    q.push("Chitvan");
    q.push("Garg");
    q.push("is");
    q.push("Learning");
    q.push("C++");

    cout << "Get First Element >> " << q.front() << endl;
    cout << "Get Last Element >> " << q.back() << endl;

    cout << "Size >> " << q.size() << endl;
    q.pop();
    cout << "Size >> " << q.size() << endl;

    cout << "Get First Element >> " << q.front() << endl;
    cout << "Get Last Element >> " << q.back() << endl;

    cout << "Check t/f if queue empty or not >> " << q.empty() << endl;

    return 0;
}