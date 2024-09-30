#include<stdio.h>
int main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
printf("%d in binary:",n);
printf("%d",(n>>7)&1);
printf("%d",(n>>6)&1);
printf("%d",(n>>5)&1);
printf("%d",(n>>4)&1);
printf("%d",(n>>3)&1);
printf("%d",(n>>2)&1);
printf("%d",(n>>1)&1);
printf("%d",n&1);
return 0;
}

