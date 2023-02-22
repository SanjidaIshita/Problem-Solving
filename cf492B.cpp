#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,x=0,counter=0;
    cin>>n>>l;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n-1; i++)
    {
        if(a[i+1]-a[i]>x)
        {
           x=a[i+1]-a[i];

        }

    }
    double y = a[0];
    double m = (double)x/2;
    double ans = max(y,m);
    double z= l-a[n-1];
    ans = max(ans,z);
    cout<<fixed<<setprecision(10)<<ans;








}




