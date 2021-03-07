#include <stdio.h>
#include <stdlib.h>

int main()
{int m,n;
int sum1,sum2;
sum1=sum2=0;
printf("UPPER RANGE=");
scanf("%d",&m);
printf("\nLOWER RANGE=");
scanf("%d",&n);
if(n*m>0&&m>n)
    for(int i=n;i<=m;i++)
    {//printf("%d ",i);
    sum1+=i;
    if(i%2==0)
        sum2+=i;
    }
else
    printf("WRONG DATA ENTERED");
printf("SUM OF ALL THE VALUES BETWEEN M AND N:%d",sum1);
printf("\nSUM OF ALL EVEN VALUES:%d",sum2);
    return 0;
}
