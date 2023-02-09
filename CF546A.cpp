#include<iostream>
using namespace std;
int main()
{

    int x, y, z,i, tm=0;
    cin>>x>>y>>z;

        for(i=1; i<=z; i++)
        {
            tm+=i;
        }
        int d= (tm*x)-y;
        if(d<0)
        {
            cout<<"0"<<endl;
        }
        else
            cout<<d<<endl;

    return 0;
}
