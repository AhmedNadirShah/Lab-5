#include<stdio.h>
int main()
{int purchase, Membership;
printf("Please enter your total purchase\n");
scanf("%d",&purchase);
printf("If you are a member, enter 1 and if not enter 0\n");
scanf("%d",&Membership);
(Membership==1 && purchase>100)? printf("You are eligible for discount"):printf("You are not eligible for discount");
return 0;
}
