#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    int x,y;
    int x1,y1,x2,y2,k;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>x1>>y1>>x2>>y2>>k;
        cout<<"Case "<<i<<":"<<endl;
        for(int j=1; j<=k; j++)
        {

            cin>>x>>y;

            if (x > x1 && x < x2 && y > y1 && y < y2)

                cout<<"Yes "<<endl;

            else
                cout<<"No "<<endl;
        }
    }

    return 0;
}
