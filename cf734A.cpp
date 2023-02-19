#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a;
    int count1=0, count2=0;
    cin>>a;
    for(int i=0; i<n; i++)
    {
        if(a[i]=='A')
        {
           count1++;

        }
        if(a[i]=='D')
        {
           count2++;

        }

    }
    if(count1== count2 )
    {
       cout<<"Friendship"<<endl;
    }
    else if(count1>count2){
    cout<<"Anton"<<endl;
    }
    else{
    cout<<"Danik"<<endl;
    }

}


