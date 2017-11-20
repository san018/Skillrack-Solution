/*

Problem Statement :
String S which is a palindrome is passed as the input.
But just one alphabet A is missing in S. The program must print the missing alphabet A.
 Note: The FIRST alphabet of S will always be present.

Input Format: The first line contains S.

Output Format: The first line contains the missing alphabet A.

Boundary Conditions:
The length of the input string S is between 3 to 100. The FIRST alphabet of S will always be present.

Example Input/Output 1:
Input:
malayaam
Output:
l

Example Input/Output 2:
Input:
abcddcb
Output:
a


*/

//Solution for the problem:

import java.util.*;
public class Hello {

    public static void main(String[] args) {
 			Scanner sc=new Scanner(System.in);
 			String s=sc.next();
			char[] c=s.toCharArray();
 			int i,j;
 			for(i=0,j=c.length-1;i<c.length/2;i++,j--)
			 {
     			if(c[i]!=c[j])
     				{
         				if(c[i]==c[j-1]&&(i!=j-1))
            			{
            				System.out.print(c[j]);
         					break;
            			}
            			else
            			{
              				System.out.print(c[i]);
              				break;
            			}
    				}		
 			}
   

 		}
}