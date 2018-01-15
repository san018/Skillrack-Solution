/*
QUESTION:
Pattern - 001
Given the number of rows N, print the numbers from 1 to N*N , such that N elements are printed in each row.

Input Format :
The first line contains the number of rows N

Output Format :
First N*N numbers such that each row contains N numbers.

Example Input/Output 1 :
Input :
3
Output :
1 2 3
4 5 6
7 8 9

Example Input/Output 2:
Input :
6
Output :
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
31 32 33 34 35 36

*/
import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count = 1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                System.out.print(count + " ");
                ++count;
            }
            System.out.println();
        }
	}
}
