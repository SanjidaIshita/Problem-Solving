#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    string a;
    cin>>a;
    for(int i=0; i<n; i++)
    {

        a[i]=towlower(a[i]);


    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++)
    {

        if(a[i]!=a[i+1])
        {
            x++;
        }


    }
    if(x==26)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO";

}




