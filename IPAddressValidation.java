/* 
QUESTION:
IPv4 Address Validity
Given an IPv4 address as a string, check if the address is valid. Print Valid if the address is valid else print Invalid.
IPv4 address has 4 blocks of 8 bit (unsigned) numbers ranging from 0 to 255 separated by a . 

Boundary Condition(s):
1 <= Length of address <= 50

Input Format:
The first line contains the IP address.

Output Format:
The first line contains Valid or Invalid.

Example Input/Output 1:
Input:
127.0.0.1

Output:
Valid

Example Input/Output 2:
Input:
266.2.9.34.12

Output:
Invalid

Explanation:
As 266 is present in the IP address


*/

import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String [] a = s.split("\\.");
        if(a.length != 4 || s.charAt(0)=='.')
        {
            System.out.print("Invalid");
            return ;
        }
        int flag = 1;
        for(int i=0;i<4;i++)
        {
            int x = Integer.parseInt(a[i]);
            if(x < 0 || x > 255)
            {
                flag = 2;
            }
        }
        if(flag == 2)
        {
            System.out.println("Invalid");
        }
        else
        {
            System.out.println("Valid");
        }
	}
}
