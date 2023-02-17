#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int i, count=0;
    string a;
    cin>>a;
    sort(a.begin(), a.end());
    for(i=0; i<a.size(); i++)
    {
        if(a[i]!= a[i+1])
        {
            count++;
        }

    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}

