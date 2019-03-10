#include<stdio.h>
int main()
{
	int n,k,m,i,j=0;
	int temp; 
	scanf("%d",&n);
	scanf("%d",&k);
	scanf("%d",&m);
	int A[n+1];
	for(i=0;i<n+1;i++)
       A[i]=i;
       j=n; 
    while(j>0)
	{
    	while(k<=n)
         {
        	temp=A[k+m-1];j--;
        	printf("%d\n",temp);
        	for(i=k+m;i<=n;i++)
       	       A[i-1]=A[i];
        	k=k+m-1;
         }
         k=k%n;
    }
    
}
 
