#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m=0,n=0;
    cin>>t;
    int a[t];

    for(int i=0; i<t; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<t; i++)
    {
        if(a[i]>0)
        {

            m=m+a[i];
        }
        else

        {
            if(m<1)
            {
                n++;
            }
            else
            {
                m--;
            }

        }
    }

    cout<<n<<endl;


}

