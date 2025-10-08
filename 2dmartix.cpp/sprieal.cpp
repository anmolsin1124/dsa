#include <iostream>
#include <string>
using namespace std;
int main()
{
    int ar[6][6] = {1, 2, 3, 4, 5, 8, 6, 7, 8, 9, 10, 4, 11, 12, 13, 14, 15, 6, 16, 17, 18, 19, 20, 8, 21, 22, 23, 24, 25, 7};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << ar[i][j] << " ";
            
        }
    }


    return 0;
}