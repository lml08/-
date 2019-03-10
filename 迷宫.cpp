#include<stdio.h>
#define M 100
char A[M][M];
char Mark[M][M];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
char sign='F';
int n,m;
void Search(int sx,int sy,int ex,int ey)
{
	int i,tempx,tempy;
	Mark[sx][sy]='Y';
	if(sx==ex&&sy==ey)
	{
      printf("ture"); 
      sign='T';
      return ;
    }
    for(i=0;i<4&&sign=='F';i++)
    {
    	tempx=sx+dx[i];tempy=sy+dy[i];
    	if(tempx>=0&&tempx<n&&tempy>=0&&tempy<m&&Mark[tempx][tempy]=='N'&&A[tempx][tempy]==0)
    	Search(tempx,tempy,ex,ey); 
    }
    Mark[tempx][tempy]='N';
    sign='T' ;
}
int main()
{
	int i,j;
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
      for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	     printf("%c",Mark[i][j]);
      int N;scanf("%d",&N);
      N*=2;int In[N][2];
	  for(i=0;i<N;i+=2);
	 {
	  scanf("%d %d",&In[i][0],&In[i][1]);
	  scanf("%d %d",&In[i+1][0],&In[i+1][1]);
	  Search(In[i][0],In[i][1],In[i+1][0],In[i+1][1]);
	 }
} 
