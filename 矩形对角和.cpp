#include<stdio.h>
int main()
{
	int i,j,N,sum=0;
	scanf("%d",&N); 
	int A[N][N];
    for(i=0;i<N;i++)
	   {
	      j=0;  
          while(j<N&&scanf("%d",&A[i][j])!='\r')
		  j++;
			}
    for(i=0,j=0;i<N&&j<N;i++,j++)
	     sum+=A[i][j];
    i-=N;
    j-=1; 
    for(;i<N&&j>=0;i++,j--)
	     sum+=A[i][j];
	if(N%2!=0) sum-=A[(N-1)/2][(N-1)/2];
	printf("\n%d",sum);
	return 0;
} 
