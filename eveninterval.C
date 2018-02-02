#include<stdio.h>
int main()
{
int low,high,remainder,i;
printf("enter the two numbers(interval): ");
scanf("%d %d",&low,&high);
printf("even number between %d and %d interval: ",low,high);
for(i=low;i<=high;++i)
{
remainder=i%2;
if(remainder==0)
{
printf("%d",i);
}
}
return 0;
}
