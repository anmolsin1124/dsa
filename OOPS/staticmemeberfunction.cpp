#include <iostream>
using namespace std;

class Account
{
    static int rate;

public:
    static void setRate(int r) { rate = r; }
    static void showRate() { cout << "Rate: " << rate << "%" << endl; }
};

int Account::rate = 5;

int main()
{
    Account::showRate();
    Account::setRate(8);
    Account::showRate();
}
