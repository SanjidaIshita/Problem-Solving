#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;


    for(int i=0; i<t; i++)
    {
        int flag=0;
        string s;
        cin>>s;
        map<char,int>g;
        for(auto x: s)
        {
            g[x]++;
        }
        int final = g.size();

        if(final==4 || final==3 )
        {
            cout<<4<<endl;
        }
        else if(final==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(auto y: g)
            {
                if(y.second ==3)
                {
                    cout<<6<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<4<<endl;
            }
        }

    }
}

