#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int arr[8] ={4,6,7,8,9,5,10,89};
    vector<int> ans;
    for (int i = 0; i < 7; i++)
    {
        for (int  j = i+1; j < 8; j++)
        {
            if (arr[i]==arr[j])
            {
            ans.push_back(arr[i]);
            cout<<arr[i]<<" ";
            
            }
            
        }

        
    }
    return -1;
    

}