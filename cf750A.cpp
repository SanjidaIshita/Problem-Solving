#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int arr[a];
    for(int i=1; i<=a; i++)
    {
        arr[i]=i;
        arr[i]=arr[i]*5;
    }
    int count = 0;
    int check = b;
    for(int i=1; i<=a; i++)
    {
        if(check<=240)
        {
            check=check+arr[i];

        if(check>240)
            {break;}
        }
        count++;
    }


cout<<count<<endl;

}













