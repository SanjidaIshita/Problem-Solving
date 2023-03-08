#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m=0,n=0;
    cin>>t;
    int a[t];

    for(int i=0; i<t; i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    int min=a[0];
    for(int i=0; i<t; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            m++;
        }
         if(a[i]<min)
        {
            min=a[i];
            m++;
        }
    }
    cout<<m<<endl;
}
