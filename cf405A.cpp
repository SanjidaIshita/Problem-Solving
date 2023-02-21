#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];
    int i, j, temp;


    cin>>n;


    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {

            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}

