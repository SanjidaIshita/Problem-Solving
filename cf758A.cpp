#include<iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n-1; i++)
    {

        sum=sum+(a[n-1]-a[i]);

    }
    cout<<sum;




}














