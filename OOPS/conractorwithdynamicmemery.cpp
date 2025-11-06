#include <iostream>
using namespace std;

class Demo
{
public:
    Demo() { cout << "Object Created!\n"; }
    ~Demo() { cout << "Object Destroyed!\n"; }
};

int main()
{
    Demo *obj = new Demo;
    delete obj;
}
