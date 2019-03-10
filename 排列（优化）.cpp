#include<stdio.h>
#include<string.h>
int n,m; 
void F(int a,int *p,int *q)
{
	if(a==m)
	{
		for(int i=0;i<m;i++)
		  printf("%d ",*(p+i));
		printf("\n"); 
	}
	else  //通过flag来控制选不选 
		for(int i=0;i<n;i++)
		  {
		   if(*(q+i)==1) continue;
		   *(p+a)=i+1;
		   *(q+i)=1;
		   F(a+1,p,q);
		   *(q+i)=0;
		  }
}
int main()
{
	scanf("%d %d",&n,&m);
	int choose[n];
	int flag[n];
	memset(flag,0,sizeof(flag));
	F(0,choose,flag); 
	
} 
