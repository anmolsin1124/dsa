#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
    string str = "abcdefghijklmnopqrs tuvwxyz";
    vector<int>alpha(26,0);
    for (int i = 0; i < str.size(); i++)
    {   
        alpha[str[i]-'a'] = 1;

    }
    for (int i = 0; i < 26; i++)
    {
        if(alpha[i]=0){
            return 0;
        }
        // return 0;
    }
   if(alpha.size()-1==str.size()-1           )
   {
    cout<<"all alphabat present in arry";
   }
   else
   cout<<" not palamind";
    
    
    
    return 0;
}