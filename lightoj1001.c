#include<stdio.h>
int main()
{

    int i,A,B,T,n;
    int ar[26]={0};
    scanf("%d", &T);
    for(i=1; i<=T; i++){
        scanf("%d", &n);

    if (n<=10)
    {
        A=0;
        B=n;
        printf("%d %d\n" ,A,B);

    }
    else if(n>10 && n <= 20)
        {
            A=10;
            B=n-10;
            printf("%d %d\n" ,A,B);

        }
         else if(n==0)
        {
            A=0;
            B=0;
            printf("%d %d\n" ,A,B);

        }
         else

            break;
    }
    return 0;
}
