#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a=(k*l)/nl;
    int b=c*d;
    int x=p/np;
    int y=x/n;
    if(a<b && a<x)
    {
        cout<<a/n;
    }
    else if(b<a && b<x)
    {
        cout<<b/n;
    }
    else
    {

        cout<<y;
    }
}

