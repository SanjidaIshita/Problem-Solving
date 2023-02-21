#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i, x=0;
    int arr[4];
    for(int i=0; i<4; i++)
    {
    cin>>arr[i];
    }
    sort(arr, arr+4);
    for(int i=0; i<4; i++)
    {
       if(arr[i]==arr[i+1])
        {
            x++;

        }

    }
    cout<<x<<endl;

}


