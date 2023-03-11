#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z;
    cin>>a>>b>>c;
    x=abs(a-b);
    y=abs(b-c);
    z=abs(a-c);
        if(x>y && x>z)
        {
            cout<<z+y;
        }

        else if(z>y && z>x)
        {
            cout<<x+y;
        }
        else if(y>x && y>z)
        {
            cout<<x+z;
        }













}
















