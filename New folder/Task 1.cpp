#include<stdio.h>
int main()
{
int age, status;
{printf("Please enter your age\n");
scanf("%d",&age);
if(age>=18)
{printf("Are you a citizen of this country,press 1 for yes and 0 for no\n");
scanf("%d",&status);
if(status==1)
printf("you can vote\n");
else
printf("You are not a citizen\n");
}
else
printf("You cannot vote");
}
return 0;
}
