#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i;
    string a;
    cin>>a;
    for(i=0; i<a.size(); i++)
    {
        a[0]=towupper(a[0]);

    }
    cout<<a<<endl;
    return 0;
}
