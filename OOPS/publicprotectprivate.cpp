#include <iostream>
using namespace std;

class Demo
{
public:
    int a = 10;

private:
    int b = 20;

protected:
    int c = 30;

public:
    void show()
    {
        cout << "Private: " << b << endl;
        cout << "Protected: " << c << endl;
    }
};

int main()
{
    Demo d;
    cout << "Public: " << d.a << endl;
    d.show();
}
