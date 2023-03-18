#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
   int a,b,c,d;
    for(int i=0; i<t; i++)
    {
       cin>>a>>b>>c>>d;
       x=a+d-b;
       if(d<b || x<c){
        cout<<"-1"<<endl;}
        else{
        y=(d-b)+ abs(x-c);
        cout<<y<<endl;}

    }
}

