/* QUESTION:

Step Number [ZH]
Given a number N, the program must print if N is a step number or not. 
(A step number is a number which has a digit which is either 1 more or 1 less than the previous digit).

Input Format:
The first line contains N.

Output Format:
The first line contains yes or no

Boundary Conditions:
10 <= N <= 99999999

Example Input/Output 1:
Input:
1212343

Output:
yes

Example Input/Output 2:
Input:
342345

Output:
no

Explanation:
The difference between 2 and 4 is NOT 1.

*/
import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int count = 0;
        for(int i=0;i<s.length()-1;i++)
        {
            int a = Integer.parseInt(s.charAt(i) + "");
            int b = Integer.parseInt(s.charAt(i+1) + "");
            if(Math.abs(a-b)==1)
            {
                count++;
            }
        }
        if(count == s.length()-1)
        System.out.print("yes");
        else
        System.out.print("no");
	}
}
