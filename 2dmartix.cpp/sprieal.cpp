#include <iostream>
#include <string>
using namespace std;
int main()
{
    int ar[6][6] = {1, 2, 3, 4, 5, 8, 6, 7, 8, 9, 10, 4, 11, 12, 13, 14, 15, 6, 16, 17, 18, 19, 20, 8, 21, 22, 23, 24, 25, 7};
    int top = 0, bottom = 5, left = 0, right = 5;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << ar[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << ar[i][right] << " ";
        }
        right--;
        
            for (int i = right; i >= left; i--)
            {
                cout << ar[bottom][i] << " ";
            }
            bottom--;
        
        
            for (int i = bottom; i >= top; i--)
            {
                cout << ar[i][left] << " ";
            }
            left++;
        
    }


    return 0;
}