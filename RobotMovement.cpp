/*QUESTION :


As a final year project certain students in a college have designed a Robot which can move front, back, left or right in a given rectangular grid of dimension L*B units (L denotes the length from left to right and B denotes the breadth from top to bottom). Always the robot moves in units which are of integer values. The robot cannot move outside the grid (That is the robot cannot go beyond L and B units). A sequence of N movement instructions are given to the robot to move in the desired direction (F-front or up, B-back or down, L-left, R-right) and the robot moves if the destination falls within the limit of the grid dimensions. Else the robot does not move. Assume the robot always starts at the bottom left of the grid. The program must print the number of movement instructions C for which the robot did not move (as the destination was outside the grid)

Input Format:
The first line contains L and B separated by a space.<br />
The second line contains N which denotes the number of instructions.
The third line contains N instructions separated by one or more spaces.

Output Format:
The first line contains C which denoted the count of instructions for which the robot did not move.

Boundary Conditions:
1 < L < 999
1 < B < 999

Example Input/Output 1:
Input:
6 5
9
3R 2L 11R 4F 4R 2F 3B 5L 4B

Output:
3

Explanation:
The robot did not move for the instructions 11R, 2F and 4B as they will make the robot go outside the grid.

                                          


*/

#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
    int l,b,i,c,j;
    cin>>l>>b;
	cin>>c;
	int r[c],count=0;
	char a[c];
	for(i=0;i<c;i++)
		cin>>r[i]>>a[i];
	int t=0,s=0,h=0;
	for(i=0;i<c;i++)
		{
		if(a[i]=='R')
			{
    			t=s+r[i];
   			    if(t<=l && t>=0)
    			{
       			 s=t;
   				 }
    			else
   				 {
       			 count++;
   				 }
			}
		else if(a[i]=='L')
			{
    			t=s-r[i];
    			if(t>=0 && t<=l)
   				 {
       				 s=t;
    			 }
    			else
    			{
      			  count++;
    			}
			}
		else if(a[i]=='F')
			{
   				 t=h+r[i];
  				  if(s<l && t>=0 && t<=b)
    				{
     				   h=t;
   					 }
    			  else
   				 {
       				 count++;
    			  }
			}
		else if(a[i]=='B')
			{
   				 t=h-r[i];
    			if(s<l && t>=0 && t<=b)
					{
						h=t;
					}
   				 else
   				 {
       			 count++;
	   				 }
			}
		}
cout<<count;
return 0;
}
                                     