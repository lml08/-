#include<stdio.h>
int j=0;
int main()
{
	long long int n;
	int i=0;
	int a[5000];
	while(scanf("%lld",&n)!=-1)
	  {
	    i=0;
		while(n/10>=1)
	     {
	       i+=n%10;
	       n/=10;
         }
         i+=n;
         a[j]=i;
		 j+=1;  
      }
    int k=0;
    for(;k<j-1;k++) 
	printf("%d\n",a[k]);
	printf("%d",a[k]);
}
