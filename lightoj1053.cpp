#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        long long a,b,c,temp,s,r;
        cin>>a>>b>>c;
        if(a>0 && b>0 && c>0)
            {
                if(a>=b && a>=c)
                {
                    temp = a;
                    a=c;
                    c=temp;
                }

                else if(b>=a && b>=c){

                   temp = b;
                    b=c;
                    c=temp;

                    }

                else if (c>=a && c>=b){

                  temp = c;
                    c=temp;
                }
                s=(a*a)+(b*b);
                r=(c*c);
                if(s==r){
                    cout<<"Case "<<i<<": yes"<<endl;
                    }
                   else
                   {
                       cout<<"Case "<<i<<": no"<<endl;
                   }


            }
    }
    return 0;
}


