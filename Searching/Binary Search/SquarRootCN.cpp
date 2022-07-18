#include <iostream>

using namespace std;

int getSquareRoot(int n)
{
    int start = 0;
    int end = n;
    long long int mid;
    long long int ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }

        if (square > n)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

double getPreciseSquareRoot(int n, int decimalNum)
{
    int tempVal = getSquareRoot(n);
    double factor = 1;
    double res;
    for (double i = 0; i < decimalNum; i++)
    {
        factor = factor / 10;
        for (double j = tempVal; j * j < n; j = j + factor)
        {
            res = j;
        }
    }

    return res;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cout << "Square Root of " << 101 << " is " << getPreciseSquareRoot(101, 3) << endl;
    return 0;
}