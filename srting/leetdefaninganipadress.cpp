#include<iostream>
#include<string>
using namespace std;
int main (){
    string adress = "192.168.0.1";
    int index =  0;
    string answer;
    while (index<adress.size())     
    {
        if (adress[index]=='.') 
        {
            answer+=" [.]";
        }
        else
        answer+=adress[index];
        index++;
        
    }
    cout<<answer<<endl;

    
    return 0;
}