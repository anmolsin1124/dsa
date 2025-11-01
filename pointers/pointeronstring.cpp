#include<iostream>
using namespace std;
///////////calll bby value
void incr(int n){
    n++;
}
///////////////////////call by refernece 
void incremrnt(int *ptr){
    *ptr = *ptr+1;

}
int main(){
    // char arr[5] = {'a','n','m','o','l'};
    // char *ptr = arr;
    // cout<<(void*)arr<<endl;
    // cout<<(void*)ptr<<endl;
    // cout<<ptr;

    ////////////////////////////////////call by value
    // int num  = 10;
    // int temp = num;
    // incr(num);
    // cout<<num<<" ";
    /////////////////////call by adresss
    int num = 103;
    int temp = num;
    incremrnt(&num);
        cout<<num<< " "; 
    

    return 0;
}