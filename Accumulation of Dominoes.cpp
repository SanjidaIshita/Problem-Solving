#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long N,M,x;
    cin>>N>>M;
    if(N>0 && M>0)
    {
       if(M!=1){
        x= (N*(M-1));
        cout<<x<<endl;}
       else if(M==1){
        cout<<(N-1)<<endl;
       }




    }
    return 0;
}
