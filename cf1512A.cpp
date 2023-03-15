#include<iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;


    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=1; i<=n; i++)
        {

            cin>>a[i];
        }

        if(a[1] != a[2] && a[2] == a[3])
        {
            cout<<"1"<<endl;
        }
        else{
        for(int i=2; i<=n; i++)
        {

            if(a[i]!=a[1])
            {
                cout<<i<<endl;
            }



        }







    }


}

}













