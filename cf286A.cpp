#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    int p[n],q[n];
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
        cin>>q[i];

    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(p[i] == q[j])
            {
                x++;
            }

        }
    }

    cout<<x;


}






















