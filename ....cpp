#include<stdio.h>
int factorial(int x)
{
	int i,sum;
	for(i=1;i<=x;i++)
	   sum+=i;
	return sum;
}
int main()
{
   int i,j,k;
   for(i=1;i<10;i++)
   	  if(i==factorial(i))
   	     printf("%d",i);
      for(k=1;k<10;k++)
          i*=10;
		  for(j=1;j<10;j++)
		  if(i+j==factorial(i)+factorial(j))  
} 
