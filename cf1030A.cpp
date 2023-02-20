#include<iostream>
#include<string>
using namespace std;
int main()
{

    int n,count=0;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        if(ar[i]==1)
        {

            count++;
        }


    }
    if(count>0)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY";
    }

}
