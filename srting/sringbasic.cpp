#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string the first name : ";
    getline(cin,str);
    // cout<<"You entered: "<<str<<endl;
    // cout<<"Length of the string: "<<str.length()<<endl;
    string str2;
    cout<<"Enter a string the last name : ";
    getline(cin,str2);
    string fullName = str + " " + str2; 
    cout<<"Full name is : "<<fullName<<endl;
    cout<<"Length of the full name is : "<<fullName.length()<<endl;
    
    return 0;
}