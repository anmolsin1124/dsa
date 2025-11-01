#include <iostream>
#include <string>
using namespace std;
void rotatedclockwise(string s)
{
    char c = s.size() - 1;
    int index = s.size() - 2;
    while (index > 0)
    {
        s[index + 1] == s[index];
        index--;
    }
    s[0] = c;
}
// rotatedclockwise(clockwise){
rotatedclockwise(clockwise){
    if (clockwise==str2)
    {
        return 0;
    }
    


}
void rotateanticlockwise(string s){
    char c = s[0];
    int index = 1;
    while (index<s.size())  
    {
        s[index-1] = s[index];
        index++;
    }
    s[s.size()-1] = c;

     
}
rotateanticlockwise(anticlock)

int main()
{
    return 0;
}
