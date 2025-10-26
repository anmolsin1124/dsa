#include<iostream>
using namespace std;
int main(){
    int arr[10] = {8,4,2,1,7,6,5,10,3,9};
    for (int i = 8; i>0; i--)
    {
      for (int j = 0; j < i; j++)
      {
        if (arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
        
      }
        
    }
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}