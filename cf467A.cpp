#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,q,x=0,y=0,counter=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>p>>q;
        if((q-p)>=2)
        {
            x++;
        }
        else{
            y++;
        }
    }

if(x!=0)
{
    cout<<x<<endl;

}
else{cout<<'0'<<endl;}





}

