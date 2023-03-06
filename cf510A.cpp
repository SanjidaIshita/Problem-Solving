#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int m,n;
   cin>>m>>n;
   for(int i=1; i<=m; i++)
   {
       for(int j=0; j<n; j++)
       {
           if(i%4==0)
           {
               if(j==0) cout<<"#";
               else cout<<".";
           }
           else if(i%4==2)
           {
               if(j==n-1) cout<<"#";
               else cout<<".";
           }
           else
           {
               cout<<"#";
           }
       }
       cout<<endl;
   }
}

