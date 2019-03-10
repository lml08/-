#include<stdio.h>//  方程：c[n][a][b]+=c[n-1][b][c] 且要满足a+b+c<=k
int main()
{
	int N,K;
	scanf("%d %d",&N,&K);
	int n=3;
	int C[2][10][10]; int k,a,b,temp;
	 for(int i=0;i<10;i++)
	   for(int j=0;j<10;j++)
	     {
		 	C[n%2][i][j]=0; C[1-n%2][i][j]=0;
	     } //只用两个三维的空间去存 因为前面的存下来的数实际上都只用了一次 
		                 //即偶数的时候从1到0 奇数的时候从0到1 (好吧其实这里有点乱不过不打紧)
	for(int i=100;i<1000;i++)
	{
		temp=i; b=temp%10;
		temp/=10; a=temp%10;
	    k=temp/10;
	    if(k+a+b <=K) C[n%2][a][b]++;
	}
	for(n++;n<=N;n++)
	for(int c=0;c<10;c++)
	for(int a=0;a<10;a++)//与循环顺序无关 
	for(int b=0;b<10&&a+b+c<=K;b++)
    {
    	C[n%2][b][c]+=C[1-n%2][a][b];
    	C[n%2][b][c]%=1000000007;
    }
	int count=0;
	for(int i=0;i<10;i++)
	   for(int j=0;j<10;j++)//这里就要分清楚是0还是1了 
	      {
	        count+=C[N%2][i][j];
	      	count%=1000000007;
	      }
	 printf("%d",count);
}
