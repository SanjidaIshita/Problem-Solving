#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        int n,m;
        cin>>n>>m;

    long long ans=m*n;
            if(m==1||n==1)
            {
                cout<<"Case "<<i<<": "<<max(n,m)<<endl;
            }
            else if(m==2||n==2)
            {
                long long big = max(m,n);
                ans = big;
                if(big%4==1 || big%4==3)ans++;
                if(big%4==2)ans+=2;
                cout<<"Case "<<i<<": "<<ans<<endl;
            }
            else if(ans%2 ==1)
            {
                cout<<"Case "<<i<<": "<< (ans+1)/2<<endl;
            }
            else

                cout<<"Case "<<i<<": "<< (ans)/2<<endl;

            }
        return 0;
}


