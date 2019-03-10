#include<stdio.h>
long fun(int x)
{
	int i,k=1;
	long sum1=0;
	for(i=1;i<=x;i++,k*=10)
	   sum1+=k;
	return sum1;
 } 
 int main()
 {
 	int a,j,n;
	long sum=0;
 	scanf("%d %d",&a,&n);
	 for(j=1;j<=n;j++)
	  sum+=fun(j);
	sum*=a;
	printf("%ld",sum);
 }
