#include<stdio.h>
int num[50],count=0;
void print(int k)
{
	//printf("%d=%d",num[0],num[1]);
	for(int i=1;i<=k;i++)
		printf("%d",num[i]);
	printf("\n");
	count++;
}
void divide(int k,int m)//k目前存放的位置 m是要分割的数 
{
	int i;
	if(m==1)
	 {
	 	int sum=0;
	 	for(int i=1;i<k;i++) sum+=i;
	    if(sum==num[0]) print(k);
	    return ;
	 }
    else
	 for(i=m;i>=1;i--){
	       num[k+1]=i;
	       printf("%d\n",i);
	       divide(k+1,m-num[k+1]);
	 }
}
int main()
{
	scanf("%d",&num[0]);
	for(int i=num[0]-1;i>=1;i--)//从分解 
	{
		num[1]=i;
		//printf("",num[1]);
		divide(1,num[0]-num[1]);
	}
}
