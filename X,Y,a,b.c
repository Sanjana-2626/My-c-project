#include<stdio.h>
void main()
{
int n,X,Y,a,b;
printf("enter the values of X,Y,a,b:");
scanf("%d %d %d % d",&X,&Y,&a,&b);
  for(n=X;n<=Y;n++)
  {
  if(n%a==0&&n%b==0)
  {
  printf("\n%d",n);
  }
   }
}   
