#include <stdio.h>
#include <stdlib.h>

int main()
{
int num,fact;
printf("ENTER THE NUMBER:");
scanf("%d",&num);
fact=num;
if(num<1)
printf("WRONG NUM GIVEN");
else
for(int i=num-1;i>0;i--)
fact*=i;
printf("\nFACTORIAL:%d",fact);

//NOT USING FACTORIAL
//printf("Hello world!\n");
    return 0;
}
