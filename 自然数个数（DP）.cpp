#include<stdio.h>//  ���̣�c[n][a][b]+=c[n-1][b][c] ��Ҫ����a+b+c<=k
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
	     } //ֻ��������ά�Ŀռ�ȥ�� ��Ϊǰ��Ĵ���������ʵ���϶�ֻ����һ�� 
		                 //��ż����ʱ���1��0 ������ʱ���0��1 (�ð���ʵ�����е��Ҳ��������)
	for(int i=100;i<1000;i++)
	{
		temp=i; b=temp%10;
		temp/=10; a=temp%10;
	    k=temp/10;
	    if(k+a+b <=K) C[n%2][a][b]++;
	}
	for(n++;n<=N;n++)
	for(int c=0;c<10;c++)
	for(int a=0;a<10;a++)//��ѭ��˳���޹� 
	for(int b=0;b<10&&a+b+c<=K;b++)
    {
    	C[n%2][b][c]+=C[1-n%2][a][b];
    	C[n%2][b][c]%=1000000007;
    }
	int count=0;
	for(int i=0;i<10;i++)
	   for(int j=0;j<10;j++)//�����Ҫ�������0����1�� 
	      {
	        count+=C[N%2][i][j];
	      	count%=1000000007;
	      }
	 printf("%d",count);
}
