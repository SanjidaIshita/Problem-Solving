#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        long N,M,W;
        cin>>W;
           if(W%2==0)
           {
               N = W/2;
               M=2;
               while(N%2==0)
               {
                   N= N/2;
                   M= M*2;
               }
                cout<<"Case "<<i<<": "<<N<<" "<<M<<endl;
           }
           else
             cout<<"Case "<<i<<": Impossible"<<endl;

        }

    return 0;
}
