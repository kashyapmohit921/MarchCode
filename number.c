#include <stdio.h>
int main()
{
    int num,digits=0;
    printf("ENTER THE NUMBER:");
    scanf("%d",&num);

    while (num!=0)
        {
        num/=10;
        digits+=1;}

    printf("TOTAL DIGITS IS:%d",digits);
}
