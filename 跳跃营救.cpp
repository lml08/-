#include<stdio.h>
#include<string.h>
int n;
void XZ(int *p,int *q)//q是记步数的 
{
	int i,j,temp;
	//for(i=0;i<n;i++) printf(" %d ",q[i]);
	for(i=0;i<n;i++)
	   for(j=1;j<=p[i];j++)
		  if(q[i]+1<=q[j+i]) 
		    q[j+i]=q[i]+1;
}
int main()
{
	int i;
	scanf("%d",&n);
	int a[n],flag[n];
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	   flag[i]=i; 
	XZ(a,flag);
	printf("%d ",flag[n-1]);
}
