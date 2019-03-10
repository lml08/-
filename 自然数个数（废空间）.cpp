#include<stdio.h>//  方程：c[n][a][b]+=c[n-1][b][c] 且要满足a+b+c<=k
int main()
{
	int N,K;
	scanf("%d %d",&N,&K);
	int n=2;
	int C[N][10][10]; 
	for(int x=2;x<N;x++)
	 for(int i=0;i<10;i++)
	   for(int j=0;j<10;j++)
		 	C[x][i][j]=0;
	int k,a,b,temp;
	for(int i=100;i<1000;i++)
	{
		temp=i; b=temp%10;
		temp/=10; a=temp%10;
	    k=temp/10;
	    if(k+a+b <=K) C[n][a][b]++;
	}
//	printf("%d",n);
	for(n++;n<N;n++)
	for(int c=0;c<10;c++)
	for(int a=0;a<10;a++)//与循环顺序无关 
	for(int b=0;b<10&&a+b+c<=K;b++)
    {
    	C[n][b][c]+=C[n-1][a][b];
    	C[n][b][c]%=1000000007;
    }
	int count=0;
	for(int i=0;i<10;i++)
	   for(int j=0;j<10;j++)//这里就要分清楚是0还是1了 
	      {
	        count+=C[N-1][i][j];
	      	count%=1000000007;
	      }
	 printf("%d",count);
}
