#include<iostream>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int x=0;
    for(int i=0; i<a.size(); i++)
    {
        for(int j=0; j<b.size(); j++)
        {
            if(a[i]==b[i])
            {
                cout<<"0";
                break;

            }
            else
            {
               cout<<"1";
               break;

            }
        }
    }

}

