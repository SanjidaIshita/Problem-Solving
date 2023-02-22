#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=1,counter=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>=a[i-1])
        {
           counter++;
           x=max(x,counter);

        }
        else
        {
            counter=1;
        }


    }

    cout<<x<<endl;


}



