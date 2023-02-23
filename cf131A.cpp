#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,i;
    string a;
    cin>>a;
    for(int i=1; i<a.size(); i++)
    {
        if(islower(a[i]))
        {
            c++;

        }
    }
    if(islower(a[0]) && c==0)
    {
        a[0]=toupper(a[0]);
        for(int i=1; i<a.size(); i++)
        {
            a[i]=tolower(a[i]);
        }
        cout<<a;

    }
    else if(isupper(a[0]) && c==0)
    {

        for(int i=0; i<a.size(); i++)
        {
            a[i]=tolower(a[i]);
        }

        cout<<a;

    }
    else
    cout<<a;







}








