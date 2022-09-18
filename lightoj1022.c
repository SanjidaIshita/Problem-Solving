#include<stdio.h>
#include<math.h>
int main()
{
    int i,T;
    double pi = 2 * acos (0.0);
    scanf("%d", &T);
    for(i=1; i<=T; i++){
            double r, ans;
        scanf("%lf", &r);
        ans = (2*r*2*r)- (pi*r*r);
        printf("Case %d: %.2lf\n", i, ans);
    }
    return 0;
}
