#include<stdio.h>
int main()
{
	int i,a,b=0,n=0;
	for(a=1;a<3000;a++)
	  {
		for(i=1;i<=a/2;i++)
	       if(a%i==0)
	          b+=i;
	          printf("%d",b);
		for(i=1;i<=b/2;i++)
	         if(b%i==0)
	          n+=i;
        if(n==a)
           printf("(%d,%d)",b,a);
      }
     return 0;
} 
