#include<iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main(string str)
{
    int n;
    cin>>n;
    string s;
    for(int i=0; i<n; i++)
    {

        cin>>s;

        for(int i=0; i<=s.length()-1; i+=2)
        {
            cout<<s[i];

        }
        cout<<s[s.length()-1]<<endl;



    }

}













