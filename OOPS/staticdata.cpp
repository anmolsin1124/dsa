#include <iostream>
using namespace std;

class Box
{
public:
    int len;
    Box(int l) { len = l; }
};

int main()
{
    Box b1(10);            // static
    Box *b2 = new Box(20); // dynamic

    cout << "Static: " << b1.len << endl;
    cout << "Dynamic: " << b2->len << endl;

    delete b2; // free memory
}
