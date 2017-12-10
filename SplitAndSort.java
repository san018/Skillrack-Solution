/* QUESTION :
Split String & Sort
An even length string S is passed as the input. 
The program must split the string into two parts S1 and S2 and sort them in ascending order.
Input Format:
The first line contains S.

Output Format:
Two lines containing S1 and S2 sorted in ascending order.

Boundary Conditions:
2 <= Lenngth of S >= 10000</p>

Example Input/Output 1:
Input:
manage

Output:
age
man


*/


import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		String a="",b="";
		int n = s.length();
        for(int i=0;i<n/2;i++)
        {
             a += s.charAt(i);
        }
     //   System.out.println(a);
        for(int i=n/2;i<n;i++)
        {
            b += s.charAt(i);
        }
     //   System.out.println(b);
     
     for(int i=0;i<n/2;i++)
     {
         if(a.charAt(i) < b.charAt(i))
         {
             System.out.println(a);
             System.out.println(b);
             break;
         }
         else if(b.charAt(i) < a.charAt(i))
         {
             System.out.println(b);
             System.out.println(a);
             break;
         }
     }
     
     
     
	}
}
