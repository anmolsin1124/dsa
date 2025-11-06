#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex() { real = imag = 0; }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    void show() { cout << real << " + " << imag << "i\n"; }
};

int main()
{
    Complex c1;
    Complex c2(5, 8);
    c1.show();
    c2.show();
}
