#include <iostream>
#include <queue>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // maxheap
    priority_queue<int> maxi;

    // minheap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(4);
    maxi.push(2);
    maxi.push(6);
    maxi.push(5);
    maxi.push(3);

    int size = maxi.size();
    cout << "Size of Maxi >> " << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;
    cout << "Check t/f if priority queue maxi empty or not >> " << maxi.empty() << endl;


    cout << "----------------------" << endl;
    
    mini.push(1);
    mini.push(4);
    mini.push(2);
    mini.push(6);
    mini.push(5);
    mini.push(3);

    int sizeM = mini.size();
    cout << "Size of Mini >> " << sizeM << endl;

    for (int i = 0; i < sizeM; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "Check t/f if priority queue mini empty or not >> " << mini.empty() << endl;


    return 0;
}