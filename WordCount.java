/* Question :
Count Words of Minimum Length L
Given a string S, which contains several words, print the count C of the words whose length is atleast L. (You can include punctuation marks like comma, full stop also as part of the word length. Space alone must be ignored)

Input Format:
The first line contains S.
The second line contains L.

Output Format:
The first line contains C

Boundary Conditions:
2 <= Length of S <= 1000

Example Input/Output 1:
Input:
During and after Kenyattas inauguration police elsewhere in the capital, Nairobi, tried to stop the opposition from holding peaceful demonstrations.


Output:
13
Explanation:
The words of minimum length 5 are
During
after
Kenyattas
inauguration
police
elsewhere
capital,
Nairobi,
tried
opposition
holding
peaceful
demonstrations.


*/

import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.nextLine();
		int n = sc.nextInt();
		int count =0;
		String [] a = s.split(" ");
		for(int i=0;i<a.length;i++)
		{
		    if(a[i].length() >= n)
		    {
		        count++;
		    }
		}
        System.out.println(count);
	}
}
