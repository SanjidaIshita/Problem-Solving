#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0;
    string a;
    getline(cin,a);
    sort(a.begin(), a.end());
    for(int i=0; i<a.size()-1; i++)
    {
        if(a[i]=='{' || a[i]==',' || a[i]==' ' || a[i]=='}'  )
        {
            continue;
        }

        else
        {
            if(a[i]!=a[i+1])
            {
                x++;
            }
        }


    }

    cout<<x;

}
