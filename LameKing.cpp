#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,x,y,m,n;
    for(int i=0; i<t; i++)
    {
        cin>>a>>b;
        x=abs(a);
        y=abs(b);
        if(x>y)
        {
            m=x*2;
            cout<<m-1<<endl;
        }
        else if(y>x)
            {
                n=y*2;
                cout<<n-1<<endl;
            }
            else
            {
                if(x==y)
                {
                   cout<<x*2<<endl;
                }
            }




    }



}


