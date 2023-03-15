#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }

    for(int i=0; i<n; i++)
    {
        if(5-a[i]>=k )
        {
            count++;
        }
    }
    if(count>=3)
    {
        cout<<count/3;
    }
    else
    {
        cout<<"0";
    }
}













