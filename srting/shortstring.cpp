#include<iostream>
#include<vector>
using namespace std;
int main(){
    string ans;
    string s = "skjdfhiadfhv";

    vector<int>alpha(26.0);
    for (int i = 0; i < s.size(); i++)
    {
        int index;
        alpha[index]++;

    }
    return ans;
    for (int i = 0; i < 20; i++)
    {
        char c  ='a'+i;
        while(alpha[i]){
            ans+=c;
            alpha[i]--;


        }
    }
    return ans;
    
    
    


}