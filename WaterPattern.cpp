/*
Question : 
Pattern Printing - Water Image 002
Given an integer N as the input, print the pattern as given in the Example Input/Output section.

Input Format:
The first line contains N.

Output Format:
2N-1 lines containing the desired pattern.

Boundary Conditions:
2 <= N <= 100

Example Input/Output 1:
Input:
5

Output:
55555
4444
333
22
1
22
333
4444
55555

*/

#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
int n;
cin >> n;
int num1 = n;
for(int i=n;i>=1;i--)
{
    for(int j=1;j<=i;j++)
    {
        cout << num1 ;
    }
    cout << endl;
    --num1;
}
int num2 = num1 + 2;
for(int i=1;i<n;i++)
{
    for(int j=1;j<=i+1;j++)
    {
        cout << num2;
    }
    ++num2;
    cout << endl;
}
}
