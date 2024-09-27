#include<stdio.h>
int main()
{float a,b,c,angle;
printf("Enter the three sides of an triangle one by one\n");
scanf("%f %f %f",&a,&b,&c);
if(a<0||b<0||c<0)
{return 0;
}
angle=a+b+c;
if(angle==180)
{printf("It is a valid triangle");
}
else
printf("invalid angle");
}

