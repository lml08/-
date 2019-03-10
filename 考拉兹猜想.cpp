#include<stdio.h>
int main()
{
	int a,b,c,i,j,n;
	scanf("%d",&n);
	int A[n][3];
	for(i=0;i<n;i++)
	  {
	   scanf("%d %d %d",&A[i][0],&A[i][1],&A[i][2]);
	  }
	for(i=0;i<n;i++)
	  {
	  	a=A[i][0];
	  	b=A[i][1];
		c=A[i][2];	
		for(j=0;;j+=a)
          {
          	if(j==0) continue;
		    if(j%a==0&&j%b==0&&j%c==0)
		      break;
		  }
		if(i==n-1) printf("%d",j);
		else printf("%d\n",j);	    	
	  }   
	     
}
