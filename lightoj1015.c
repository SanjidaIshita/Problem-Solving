#include<stdio.h>
int main()
{
    int i,j,T,N,num,sum;
    scanf("%d", &T);
    for(i=1; i<=T; i++){
            sum=0;
        scanf("%d", &N);

        for(j=1; j<=N; j++){
                scanf("%d", &num);

        if(num>0)
        sum=sum+num;
    }
    printf("Case %d: %d\n", i, sum);
}
return 0;
}
