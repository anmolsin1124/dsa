#include <iostream>
using namespace std;

void countCalls()
{
    static int count = 0;
    count++;
    cout << "Called " << count << " times\n";
}

int main()
{
    countCalls();
    countCalls();
    countCalls();
}
