/*

QUESTION:

Tenth Digit Odd Average
An array of N integers is passed as input. 
The program must print the average of the integers having their tenth digit as an odd digit.
The average is rounded up to two decimal places.

Boundary Condition(s):
1 <= N <= 9999

Input Format:
The first line contains N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains the average rounded up to two decimal places.

Example Input/Output 1:
Input:
5
10 2334 65 76 80

Output:
806.67

Example Input/Output 2:
Input:
7
30 15 41 24 48 27 34

Output:
26.33

*/

import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String a [] = new String[n];
        for(int i=0;i<n;i++)
        {
            a[i] = sc.next();
        }
        float res = 0;
        int count = 0;
    
        for(int i=0;i<n;i++)
        {
            String temp = a[i];
            int t = temp.length();
            if(Character.getNumericValue(temp.charAt(t-2))%2 != 0)
            {
                res +=Float.parseFloat(temp);
                count++;
            }
        }
        
        if(count == 0)
        {
            System.out.println("0.00");
        }
        else
        {
        res /= count;
        System.out.printf("%.2f",res);
        }
	}
}
                   
