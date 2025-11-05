#include <iostream>
using namespace std;
// int print(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     print(n - 1);
//     cout << n << endl;
//     // print(n - 1);
// }


//////////////////////////////////////////////////power function
// int power(int a, int b)
// {
//     if (b == 0)
//     {
//         return 1;
//     }
//     return a * power(a, b - 1);

// }

////////////////////////////////////////////sum of n natural numbers
// int sum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return n + sum(n - 1);
// }

//////////////////////////////////////////////sum of spaures of n natural numbers
// int sumsqure(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return n * n + sumsqure(n - 1);
// }
/////////////////////////////////////////////////greatest common divisor
// int gcd(int a, int b)
// {
//     if (b == 0)
//     {
//         return a;
//     }
//     return gcd(b, a % b);
// }
///////////////////////////////print arrry using fjuctio n or recuissuiob 
// void printarray(int arr[], int index, int i)
// {
//     if (i == index)
//     {
//         return;
//     }
//     cout << arr[index] << " ";
//     printarray(arr, index+1, i);
// }
////////////////////////////////sum of array function
// int sumarray(int arr[], int index,int n)
// {
//     if (index == n)
//     {
//         return 0;
//     }
//     return arr[index] + sumarray(arr,index+1,n);

// }
/////////////////////////////////////////minmumun element in array
// int minarray(int arr[], int index, int n)
// {
//     if (index == n - 1)
//     {
//         return arr[index];
//     }
//     return min(arr[index], minarray(arr, index + 1, n));
// }
////////////////////////////////////////////////RRECUSION ON STRING
// void palindrome(string s, int start, int end)
// {
//     if (start >= end)
//     {
//         cout << "palindrome" << endl;
//         return;
//     }

//     if (s[start] != s[end])
//     {
//         cout << "not palindrome" << endl;
//         return;
//     }

//     palindrome(s, start + 1, end - 1);
// 
///////////////////////////////////check vowel in a string using recursion
// int countVowel(string s, int index)
// {
//     if (index == s.length()) // base case
//         return 0;

//     char ch = s[index];
//     int count = 0;

//     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//     {
//         count = 1;
//     }

//     return count + countVowel(s, index + 1); // move forward
// }
///////////////////////reverse a string using recursion
// void reverseString(string &s, int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }
    
//     swap(s[start], s[end]);
//     reverseString(s, start + 1, end - 1);
// }
//////////////////////lowercase to uppercase using recursion
void toUppercase(string &s, int index)
{
    if (index == -1)
    {
        return;
    }
    if (s[index] >= 'a' && s[index] <= 'z')
    {
        s[index] = s[index] - ('a' - 'A');
    }
    toUppercase(s, index -1 );
}


int main()
{
    string s = "anmolsingh";
    toUppercase(s, s.length() - 1);
     cout<<s<<endl;
}