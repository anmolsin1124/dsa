#include <iostream>
#include <string>
using namespace std;

string rotateClockwise(string s)
{
    char last = s[s.size() - 1];
    for (int i = s.size() - 1; i > 0; i--)
    {
        s[i] = s[i - 1];
    }
    s[0] = last;
    return s;
}

string rotateAntiClockwise(string s)
{
    char first = s[0];
    for (int i = 0; i < s.size() - 1; i++)
    {
        s[i] = s[i + 1];
    }
    s[s.size() - 1] = first;
    return s;
}

int main()
{
    string str = "abcdkjf";

    cout << "Original: " << str << endl;
    cout << "Clockwise: " << rotateClockwise(str) << endl;
    cout << "Anti-Clockwise: " << rotateAntiClockwise(str) << endl;

    return 0;
}