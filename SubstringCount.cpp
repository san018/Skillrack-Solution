/* QUESTION : 
String - Substring Count
A string S is passed as the input and another string E is also passed as the input. The program must print the number of times E appears in string S. The alphabets in both S and E will be in lower case.</p>
<p><strong>Input Format:
The first line contains S.
The second line contains E.
Output Format:
The first line contains the number of times the string E is present in S.
Boundary Conditions:
2 <= Length of a String Value S and E <= 500
Example Input/Output 1:
Input:
eyeyeyeeyeyeeye
eye
Output:
6
*/



#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
string a , b;
int c=0 , count =0,t=0;
cin >> a >> b;
int n = a.length();
int m = b.length();

for(int i=0;i<=n-m;i++)
{   
    
    t=0;
    for(int j=i;j<i+m;j++)
    {
        
        if(a[j]!=b[t])
        {
            break;
        }
        else if(a[j]==b[t])
        {   
            c++;
            t++;
        }
    }
   // cout<<c<<"\n";
    if(c==m)
    {
        count++;
    }
    c=0;
    //cout << count << " ";
}

//cout << endl;
cout << count;

}
