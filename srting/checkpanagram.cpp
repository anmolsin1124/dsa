#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str = "abcdefghijklmnoqrs tuvwxyz";
    vector<int> alpha(26, 0);

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        { // Only for lowercase letters
            alpha[str[i] - 'a'] = 1;
        }
    }

    bool all_present = true;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == 0)
        {
            all_present = false;
            break;
        }
    }

    if (all_present)
        cout << "✅ All alphabets are present in the string!" << endl;
    else
        cout << "❌ Some alphabets are missing!" << endl;

    return 0;
}