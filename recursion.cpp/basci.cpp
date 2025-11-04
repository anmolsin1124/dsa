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
// }
///////////////////////////////////cout 

int main()
{
    string s = "maadama";
    palindrome(s, 0, s.length() - 1);
    return 0;
}
