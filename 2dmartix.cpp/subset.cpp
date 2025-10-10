#include<iostream>
using namespace std;
int main(){
    int a[9]= {1,2,3,4,5,6,7,8,9};
    int b[4] = {5,6,4,45};
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (a[j]==b[i])
            {
                count++;
            }
            
        }
        
    }
    cout<<count<<endl;

    if (count==4)    
    {
        cout<<"thr b is sub set of a"<<endl;


    }
    else
    cout<<"not subset";
    
    
    return 0;
}