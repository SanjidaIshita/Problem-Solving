#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        int a,b,c,d,e,f,g,h,j, ans;
        cin>>a>>b;
        c = abs(a-b) * 4;
        d = 3;
        e = 5;
        f = 3;
        g = a * 4;
        h = 3;
        j = 5;
        ans=c+d+e+f+g+h+j;
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
