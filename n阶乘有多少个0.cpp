#include<stdio.h>
int main()
{
	int i,N,num=0;
	scanf("%d",&N);
	for(i=5;i<=N;i*=5)
	   num+=N/i;
	printf("%d",num); 
	return;
}
