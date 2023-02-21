#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c;

    cin>>a>>b>>c;

    int ans1 = a+b+c;
    int ans2 = a+b*c;
    int ans3 = a*(b+c);
    int ans4 = a*b*c;
    int ans5 = (a+b)*c;
    int ans = max(max(max(max(ans1, ans2),ans3),ans4),ans5);
    cout<<ans<<endl;




    return 0;
}


