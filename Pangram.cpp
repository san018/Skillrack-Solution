/*
Pangrams or not
*/
#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{

string s;
getline(cin,s);
int a[26] = {0};

for(int i=0;i<s.length();i++)
{
    if(s[i] <= 90 && s[i] >= 65)
    {
        a[s[i]-65]++;
    }
    else
    {
        a[s[i]-97]++;
    }
}

for(int i=0;i<26;i++)
{
    if(a[i] == 0)
    {
        cout << "no";
        return 0;
    }
}

cout << "yes";
}



#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{

string s;
getline(cin,s);
int a[26] = {0};

for(int i=0;i<s.length();i++)
{
    if(s[i] <= 90 && s[i] >= 65)
    {
        a[s[i]-65]++;
    }
    else
    {
        a[s[i]-97]++;
    }
}

for(int i=0;i<26;i++)
{
    if(a[i] == 0)
    {
        cout << "no";
        return 0;
    }
}

cout << "yes";
}
