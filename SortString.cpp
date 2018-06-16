/*

QUESTION:


N string values are passed as input. 
The program must sort and print the strings based on the count of unique alphabets in them. 
If two strings have same unique alphabet count, then sort them based on lexicographical order.
Sorting based on the count of unique characters must be done in descending order 
(that is the string having the highest unique character count must be printed first).

Boundary Condition(s):
1 <= N <= 100
1 <= Length of string <= 1000

Input Format:
The first line contains N.
The next N lines contain the values of N strings.

Output Format:
The first N lines contain the string values sorted based on the given conditions.

Example Input/Output 1:
Input:
3
bubble
telegram
munch

Output:
telegram
munch
bubble

Example Input/Output 2:
Input:
4
sit
miner
flood
temple

Output:
miner
temple
flood
sit

*/
#include <iostream>
using namespace std;
int unique(string s)
{
    int a[26] = {0};
    for(int i=0;i<s.length();i++)
    {
        a[s[i]-97]++;
    }
    int count = 0;
    
    for(int i=0;i<26;i++)
    {
        if(a[i]>=1)
        {
            count++;
        }
    }
    return count;
}
int main(int argc, char** argv)
{

int n,t;
cin >> n;
string r[n],temp;
int freq[n];
for(int i=0;i<n;i++)
{
    cin >> r[i];
    freq[i] = unique(r[i]);
}

for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(freq[i] < freq[j])
        {
            t = freq[i];
            freq[i] = freq[j];
            freq[j] = t;
            
            temp = r[i];
            r[i] = r[j];
            r[j] = temp;
        }
        else if(freq[i] == freq[j] && r[i] > r[j])
        {
            temp = r[i];
            r[i] = r[j];
            r[j] = temp;
        }
    }
}



for(int i=0;i<n;i++)
{
    cout << r[i] << endl;
}

}
