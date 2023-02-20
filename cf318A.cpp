#include<iostream>
#include<string>
using namespace std;
int main()
{

    long long int n,z,c;
    cin>>n>>z;



        if(n%2==0)
        {

            c=n/2;
        }
        else
        {
            c=(n+1)/2;
        }
        if(z>c)
        {
            cout<<(z-c)*2<<endl;
        }
        else
        {
            cout<<(z*2)-1<<endl;
        }


    }



