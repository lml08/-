#include<stdio.h>
#define M 100
char A[M][M];
char Mark[M][M];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int Search()
{
}
int main()
{
	int m,n,i,j;
	char ch;
    scanf("%d",&m);scanf("%d",&n);
	for(i=0;i<m;i++)
	  {
	    scanf("%c",&ch); 
	   for(j=0;j<n;j++)
	     {
	      scanf("%c",&ch);
          if(ch=='1')
          A[i][j]==1;
          A[i][j]==0;
          Mark[i][j]='N';
		 }
      }
      
} 
