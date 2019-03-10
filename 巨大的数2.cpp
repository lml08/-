#include<stdio.h>
int main()
{
	int i,a,b,n;
	scanf("%d %d %d",&a,&b,&n);
	int A[n+1];
	int j=1;
	for(i=1;i<b;i++)
        {
        	int k;
        	for(k=1;k<=i;k++)
        	    j*=a;
        	A[i-1]=j%n;
			printf("%d\n",A[i-1]); 
			while(A[i-1]==A[0])
			   break; 
        }
        printf("%d\n",i);
		//if(b%(i-1)!=0)	
	printf("%d",A[i]);
	return 0;
} 
