#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;



    for(int i=0; i<t; i++)
    {
        int n,sum=0, sum1=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                sum=sum+a[i];
            }
            else
            {
                sum1=sum1+a[i];
            }
        }
       if(sum1>=sum)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
       }




    }






}



