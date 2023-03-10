#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,m,n,x,y;
    cin>>a>>b;
    if(a>b)
    {
        if(a-b>1)
        {
            x=a-b;
            m=x/2;
            cout<<b<<" "<<m<<endl;

        }
         else{cout<<b<<" "<<"0"<<endl;}

    }
    else
    {
        if(b-a>1)
        {
            y=b-a;
            n=y/2;
            cout<<a<<" "<<n<<endl;
        }
        else
        {

            cout<<a<<" "<<"0"<<endl;
        }



    }


}

