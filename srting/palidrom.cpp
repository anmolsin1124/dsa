#include<iostream>
#include<string>
using namespace std;
int main (){
    string str = "anmolomna";
    int end  = str.length()-1;
    int start =0;
    while(start<end){
        if(str[start]==str[end]){
            start++;
            end--;
   
            return 1;

        }
        else{

    

        cout<<"not palidrom"<<endl;
        return -1;
    }
    }

}