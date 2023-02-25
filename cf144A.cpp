#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,mx=0,mn=101,maxi,mini;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>mx)
        {
            mx=a[i];
            maxi=i;

        }
        if(a[i]<=mn)
        {
            mn=a[i];
            mini=i;
        }

    }
    if(maxi>mini)
    {
        mini++;
    }


    cout<<maxi+n-mini-1<<endl;





}

