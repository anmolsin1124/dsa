#include<iostream>
using namespace std;
class student{
    public:
    int id;
    string name;

    void display(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
int main()
{

    student s1;
    s1.id=101;
    s1.name="John Doe";
    s1.display();   
    

    return 0;
}