#include<iostream>
#include<string>
using namespace std;
int main(){
     //anmol sih 

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<" ";
    // }
    int start = 0;
    int end = 9;
    int target = 5;
    cout<< "now this binary search"<<endl;
    while (start<=end)   
    {   int middle = (start+end)/2;
        if (arr[middle] == 5)
        {
            cout<<"the value is found at index "<<middle<<endl;
            return middle;
        }
        else if (arr[middle]<5)
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }

        cout<<"the valuse is "<<arr[middle]<<endl;
    }
    return -1;
    
}