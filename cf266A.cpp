#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n, counter=0;
    cin>>n;
    string a;
    cin>>a;


    for(int i=0; i<n; i++)
    {

        if(a[i] == a[i+1])
        {
            counter++;

        }

    }

    cout<<counter<<endl;


    return 0;
}


