#include<stdio.h>
int main()
{
 int i,r,n,b;
  printf("enter  the number:");
  scanf("%d",&n);
  if(n>1)
  {
     for(i=2;i<n;i++)
     {
      r=n%i;
      if(r==0)
        {
         b=1;
        }
     }
     if(b==1)
     printf ("%d is a composite number",n);
     else
     printf ("%d is a prime number",n);
  }
 else
  printf ("neither prime nor composite ");
}