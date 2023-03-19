#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;



    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char, int>m;
        m[s[0]]=0;
        int flag=0;

        for(int i=1; i<n; i++)
        {
            if(m.find(s[i])!=m.end())
            {
                if(m[s[i-1]]==m[s[i]] )
                {
                    flag=1;
                    break;
                }

            }
            else
            {
                if(m[s[i-1]]==0)
                {
                    m[s[i]]=1;
                }
                else
                {
                    m[s[i]]=0;
                }
            }

        }
        flag==1?cout<<"NO"<<endl:cout<<"YES"<<endl;





    }






}




