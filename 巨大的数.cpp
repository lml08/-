#include<stdio.h>
int main()
{
	int i,a,b,n;
	scanf("%d %d %d",&a,&b,&n);
	int A[n+1];
	for(i=0;i<b;i++)
        {
        	int j=1,k;
        	for(k=0;k<=i;k++)
        	   j*=a;
        	A[i]=j%n;
			printf("%d\n",A[i]); 
			while(A[i]==A[0])
			   break; 
        }
		i=b%i;	
	printf("%d",A[i1]);
	return 0;
} 
