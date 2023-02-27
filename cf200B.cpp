#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l;
    float m=0;
    cin>>k;
    int a[k];

       for(int i=1; i<=k; i++)
       {
           cin>>a[i];
          m= m+a[i];
       }

       cout<<m/k<<endl;



}
















