#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, sum =0;
    cin>>a;
    while(a != 0)
    {
        if(a%2==1)
        {
            sum++;

        }
        a=a/2;
    }
    cout<<sum<<endl;
}

