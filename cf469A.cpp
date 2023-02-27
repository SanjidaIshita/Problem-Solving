#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,f,a[200],x=0,y;
    cin>>f>>p;

       for(int i=0; i<p; i++)
       {
           cin>>a[i];
       }
       cin>>q;
       for(int i=p; i<p+q; i++)
       {

           cin>>a[i];
       }
       sort(a, a+(p+q));
       for(int i=0; i<p+q; i++)
       {
           if(a[i]==a[i+1])
           {
               continue;
           }
           else
           {
               x++;
           }
       }
       y=f-1;
       if(x==f)
       {
           cout<<"I become the guy."<<endl;
       }
       else
       {
           cout<<"Oh, my keyboard!"<<endl;
       }


       }
























