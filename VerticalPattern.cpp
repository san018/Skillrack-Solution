/* 
QUESTION :
Vertical ZigZag Pattern
Fill in the missing lines of code to print the pattern as defined in the Example Input/Output section.

Input Format:>
The first line contains N.

Output Format:
N lines contain the number pattern.

Boundary Conditions:
1 <= N <= 50

Example Input/Output 1:
Input:
5

Output:
1
2 9 
3 8 10
4 7 11 14
5 6 12 13 15

Example Input/Output 2:
Input:
4

Output:
1
2 7
3 6 8
4 5 9 10

*/
#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
int n,count = 1, arr[100][100];
cin >> n;
for(int i=0;i<n;i++)
{
    if(i%2==0)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j)
            {
                arr[j][i] = count++;
            }
        }
    }
    else if(i%2!=0)
    {
        for(int j = n-1;j>0;j--)
        {
            if(i<=j)
            {
                arr[j][i] = count++;
            }
        }
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<=i;j++)
    {
        cout << arr[i][j] << " ";
    }
    cout << "\n";
}

}
