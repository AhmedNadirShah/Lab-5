#include<stdio.h>
int main()
{int a;
printf("Enter any number to check is it odd or even\n");
scanf("%d",&a);
if(a & 1)
printf("it is odd");
else
printf("it is even");
return 0;
}
