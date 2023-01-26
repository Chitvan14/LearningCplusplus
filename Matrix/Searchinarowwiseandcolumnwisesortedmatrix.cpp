#include <iostream>

using namespace std;

void search(int mat[4][4], int n, int x)
{

    int row = 0;
    int col = n - 1;
    int count = 0;
cout<<"inside"<<endl;
    while (count < n * n)
    {
        int element = mat[row][col];
cout<<"inside "<<element<<endl;
        if (element == x)
        {
            
            cout << "{" << row << "," << col << "}" << endl;
           break;
        }

        if (element > x)
        {
            col--;
         
        }
        else
        {
            row++;
        }
           count++;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
    int mat[4][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}};

    // Function call
    search(mat, 4, 32);

    return 0;
}