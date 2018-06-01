/*

QUESTION:

Given an Integer N as input, the program must print the even numbers in decreasing order
starting from N to 2 and then odd numbers in increasing order starting from 1 to N.
Boundary Condition(s):
3 <= N <= 99999
Input Format
The first line contains the value of N
Output Format:
The first line contains N integers separated by space(s)
Example Input/Output 1:
Input:
6
Output:
6 4 2 1 3 5
Example Input/Output 2:
Input:
7
Output:
6 4 2 1 3 5 7

*/

#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
int i,k,c;
cin>>k;
c=k;
if(k%2==1)
  c--;
for(i=1;i<=k;i++)
{
    cout<<c<<" ";
    if(i<k/2)
    c=c-2;
    else if(i==k/2)
    c=1;
    else
    c=c+2;
}
