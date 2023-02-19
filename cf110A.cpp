#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int count=0;
    cin>>a;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='4' || a[i]=='7')
        {
           count++;

        }

    }
    if(count== 4 || count== 7 )
    {
       cout<<"YES"<<endl;
    }
    else{
    cout<<"NO"<<endl;
    }

}

