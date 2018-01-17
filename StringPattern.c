/*
QUESTION:
Pattern - String Alphabets
Given a string S as the input, the program must print the pattern as described in the Example Input/Output section.

Input Format:
The first line contains S.

Output Format:
The pattern as described in the Example Input/Output section.

Boundary Conditions:
2 <= Length of S <= 100

Example Input/Output 1:
Input:
EAGLE

Output:
EAGLE
AGLEE
GLEEA
LEEAG
EEAGL
EAGLE

Example Input/Output 2:
Input:
MORNING

Output:
MORNING
ORNINGM
RNINGMO
NINGMOR
INGMORN
NGMORNI
GMORNIN
MORNING

*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
char a[101];
int i,j;
scanf("%s",a);
printf("%s\n",a);
int count = 1,k=0;
int n = strlen(a);
//printf("%d",n);
while(k<n)
{
    for(i=count;i<n;i++)
    {
        printf("%c",a[i]);
    }
    for(j=0;j<count;j++)
    {
        printf("%c",a[j]);
    }
    k++;
    printf("\n");
    count++;
}

}
