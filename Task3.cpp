#include<stdio.h>
int main()
{float percentage;
printf("Please enter your percentage");
scanf("%f",&percentage);
(percentage>90)? printf("A"): 
(percentage>80)? printf("B"): 
(percentage>70)? printf("C"): 
(percentage>60)? printf("D"):
(percentage<60)? printf("F"):
printf("Invalid");
return 0;
}
