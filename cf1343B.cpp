#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a;
        cin>>a;
        int sum1=0, sum2=0;
        vector<int>num;
        num.push_back(2);
        for(int i=1; i<=a; i++)
        {

            if(i%2==0)
            {
                num.push_back(i);
                sum1+=i;
            }
        }
        for(int i=1; i<=a; i++)
        {

            if(i%2!=0)
            {
                num.push_back(i);
                sum2+=i;
            }
        }
        int c=sum1-sum2;
        num.back() += c;

        if(c%2==0)
        {
            cout<<"YES"<<endl;
            for(int i=1; i<=a; i++)
            {
                cout<<num[i]<<" ";
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

}

