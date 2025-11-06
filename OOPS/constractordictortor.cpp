#include <iostream>
using namespace std;

class Test
{
public:
    Test() { cout << "Constructor called!\n"; }
    ~Test() { cout << "Destructor called!\n"; }
};

int main()
{
    Test obj;
}
