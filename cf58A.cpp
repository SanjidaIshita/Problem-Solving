
#include<iostream>
#include<string>
using namespace std;
int main()
{

    string a;
    int x=0, y=0;
    cin>>a;
    string b ="hello";
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==b[x])
        {
           x++;

        }

    }
    if(x==5 )
    {
       cout<<"YES"<<endl;
    }
    else{
    cout<<"NO"<<endl;
    }

}


