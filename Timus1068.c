#include<stdio.h>
#include<math.h>


int main()
{
    int i, N, Sum=0;
    scanf("%d", &N);
    if(N>0)
    {
       for(i=1; i<=N; i++)
         {

           Sum= Sum+i;

         }
    }
    else if(N<=0)
        {
       for(i=N; i<=1; i++)
         {

           Sum= Sum+i;
         }
        }
       printf("%d", Sum);

    return 0;
}
