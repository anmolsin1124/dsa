#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
        vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    // for(int i=0;i<10;i++){
    for (int i = 0; i < arr.size()-1 ;i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < arr.size()-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}