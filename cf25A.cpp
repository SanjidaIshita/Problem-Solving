
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0,y=0,n,i;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0  )
        {
            x++;
        }

        else
        {


            y++;

        }


    }
    if(x>y)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]%2!=0)
            {
                cout<<i+1;
                break;
            }
        }

    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                cout<<i+1;
                break;
            }
        }
    }



}
