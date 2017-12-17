/*Question :

Increase By Adjacent Difference

Given N numbers, the program must increment the given number by the absolute difference of the adjacent cells. Treat the other elements as
zero for first and last elements.

INPUT FORMAT:
The first line contains N.
The next line contains N numbers.

OUTPUT FORMAT:
The first line of the output contains N elements under given conditions.

BOUNDARY CONDITIONS: 
2<=N<=9999

SAMPLE INPUT:
6 
-20 10 55 -5 20 -10

SAMPLE OUTPUT:
-10 85 70 30 25 10

*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,i,d;
scanf("%d", &n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int b[n];
for(i=0;i<n;i++)
b[i] = a[i];
for(i=0;i<n;i++)
{
    if(i==0 )
    {
        a[i] = b[i] + abs(b[i+1]);
    }
    else if(i==n-1)
    {
        a[i] = b[i] + abs(b[i-1]);
    }
    else
    {
        d = abs(b[i+1]- b[i-1]);
        a[i] += d;
    }
}

for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
