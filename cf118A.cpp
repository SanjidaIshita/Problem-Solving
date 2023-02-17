#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i;
    string a,a2;
    cin>>a;
    for(i=0; i<a.size(); i++)
    {

        if(a[i]=='A' || a[i]=='O' || a[i]=='Y' || a[i]=='E' || a[i]=='U' ||  a[i]=='I' ||  a[i]=='a' ||  a[i]=='o'||  a[i]=='y'||  a[i]=='e'||  a[i]=='u' ||  a[i]=='i')
        {
            continue;
            a2+='.';
            a2+=towlower(a[i]);
        }

    }
    cout<<a2<<endl;

    return 0;
}

