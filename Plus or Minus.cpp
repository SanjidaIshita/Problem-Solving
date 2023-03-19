#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c;
    int x,y;




    for(int i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        x=a+b;
        y=a-b;
        if(x==c)
        {
           cout<<"+"<<endl;
        }
        else
        {
            if(y==c)
            {
                cout<<"-"<<endl;
            }
        }
    }





}


