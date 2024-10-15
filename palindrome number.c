#include<stdio.h>
 int main()
{
int n,sum=0,r,v;

printf("enter  a number:");
scanf("%d",&n);
v=n;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n/=10;
}
if(v==sum)
{
printf("given number is a palindrome ");
}
else
{
printf("given number is not a palindrome ");
}
return 0;
}