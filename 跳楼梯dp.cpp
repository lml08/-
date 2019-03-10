#include<stdio.h>
#define M 1000
int F(int n){
	int a[M];
	if(n==0) return 1; 
	int sum=0;
	if(n>=3)  sum+=F(n-3);
	if(n>=5)  sum+=F(n-5);
	return sum;
}

int main()
{
	printf("%d",F(30));
}
