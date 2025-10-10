#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int target=7;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         if(arr[i][j]==target){
    //             cout<<"Element found at index: "<<i<<","<<j<<endl;
    //         }
    //     }
        
    // }
    //method 2
    int n = 3, m = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i][0]<= target && arr[i][m-1]>=target)
    //     {
    //         int start = 0, end = m - 1;
    //         while (start <= end)
    //         {
    //             int mid = start + (end - start) / 2;
    //             if (arr[i][mid] == target)
    //             {
    //                 cout << "Element found at index: " << i << "," << mid << endl;
    //                 break;
    //             }
    //             else if (arr[i][mid] < target)
    //             {
    //                 start = mid + 1;
    //             }
    //             else
    //             {
    //                 end = mid - 1;
    //             }
    //         }
    //     }
        
    // }
    //method 3
    int start = 0, end = n * m - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int midx = mid / m;
        int midy = mid % m;
        if (arr[midx][midy] == target)
        {
            cout << "Element found at index: " << midx << "," << midy << endl;
            break;
        }
        else if (arr[midx][midy] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    
    
    return 0;
}