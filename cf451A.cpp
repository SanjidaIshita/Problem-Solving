#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    for(int i=1;;i++)
    {
        if(a-i==0)break;
        if(b-i==0)break;
        count++;

    }
    if(count%2==0 )
        {
            cout<<"Akshat";

        }

        else
        {
            cout<<"Malvika";
        }













}

















