#Day 3: Intro to Conditional Statements.

#Hackerrank problem solved using c++.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<"Weird";
    }
    else
    {
        if(n>=2&&n<=5)
        {
            cout<<"Not Weird";
        }
        if(n>=6&&n<=20)
        {
            cout<<"Weird";
        }
        if(n>20)
        {
            cout<<"Not Weird"; 
        }
    }
}
