#include <iostream>
using namespace std;

struct Test
{
    char a;
    int b;
    char c;
};

int main()
{
    cout << "Size of structure: " << sizeof(Test) << " bytes";
}
