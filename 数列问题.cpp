#include<stdio.h>
#define n 40
int A[n]={3,4,5};
int main()
{
	int i,N;
	scanf("%d",&N);
	for(i=3;i<N;i++)
	   A[i]+=A[i-1]+A[i-2]+A[i-3];
	printf("%d",A[i-1]);   
} 
