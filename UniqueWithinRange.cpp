/*Question:

Unique Numbers Count Within Range
Given N numbers, the program must find and print the count C of the distinct(unique) numbers which are within a given range 
inclusive of R1 and R2.

Input Format:
The first line contains N, R1 and R2 separated by a space.
The second line contains N positive integers separated by a space.

Output Format:
The first line contains the count C.

Boundary Conditions:
1 <= N <= 9999
1 <= R1,R2 <= 999999

Example Input/Output 1:
Input:
7 19 44
100 19 51 32 41 89 32

Output:
3

Explanation:
The three unique numbers within the given range (21 to 44 inclusive) are 19, 32 and 41

*/

#include <iostream>
#include<algorithm>
using namespace std;

int main(int argc, char** argv)
{
    int n,a,b;
    cin>>n>>a>>b;
    int s[n];
    int p[n];
    int k=0;
    for(int i=0;i<n;i++)
    {
    cin>>s[i];
    p[i]=0;
    }
    sort(s,s+n);
    p[0]=s[0];
    k=1;
    for(int i=1;i<n;i++)
    {
        if(s[i]!=s[i-1])
        {
            p[k]=s[i];
            ++k;
        }
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(p[i]<=b&&p[i]>=a)
        {
            c++;
        }
    }
    
    cout <<c;
    
    
}
                                       
