#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n, sumx=0, sumy=0, sumz=0;
    int A[100][100];
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
           cin>>A[i][j];
        }
        sumx+=A[i][0];
        sumy+=A[i][1];
        sumz+=A[i][2];


    }
    if(sumx == 0 && sumy == 0 && sumz == 0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

}
