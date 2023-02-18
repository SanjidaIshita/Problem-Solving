#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,counter1=0,counter2=0;
    string a,b;
    cin>>a;
    for(i=0;i<a.size(); i++)
    {
        if(isupper(a[i]))
        {
            counter1++;

        }
        else{
            counter2++;
        }
    }
    for(i=0;i<a.size(); i++)
    {
    if(counter1>counter2)
    {
        a[i]= towupper(a[i]);
    }
    else
    {
        a[i]= towlower(a[i]);
    }
    }


    cout<<a<<endl;



}
