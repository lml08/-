#include<stdio.h>
int main()
{
	int a,b,i,j,N;
	scanf("%d",&N);
	int num[N][2];
	for(i=0;i<N;i++)
	   scanf("%d %d",&num[i][0],&num[i][1]);
    for(i=0;i<N;i++)
    {
      a=num[i][0];
	  b=num[i][1];
	  for(j=0;j<b;j++)
         {
         	 int n,m; 
        	 char A[a][a];
        	 for(n=0;n<a;n++)
			      for(m=0;m<a;m++)
                     A[n][m]=' ';  
        	 for(m=0;m<a;m++)
        	    A[m][m]='X';
        	 m-=1;
        	 for(n=0;n<a;n++,m--)
			    A[n][m]='X';
			 if(j>0) n=1;
			 else  n=0;
			 for(;n<a;n++)
			    {
			      for(m=0;m<a;m++)
			      {
			      	  printf("%c",A[n][m]);
					  if(m>=a/2&&A[n][m]=='X') break;
			      }
			      printf("\n");
				}
		 }
	   printf("\n");
    }
}
