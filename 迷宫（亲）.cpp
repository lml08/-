#include<stdio.h>
#include<string.h>
#define MAX 100
int array[MAX][MAX];
char A[MAX][MAX];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int n,m,flag=0;
void judge(int sx,int sy,int ex,int ey)
{
	if(sx==ex&&sy==ey) 
	{
	  flag=1;
	  printf("true\n");
	} 
	A[sx][sy]='Y';
	for(int l=0;l<4&&flag!=1;l++)
	{
		
	   int tempx=sx+dx[l],tempy=sy+dy[l]; 
		if(tempx>=0&&tempx<n&&tempy>=0&&tempy<m&&!array[tempx][tempy]&&A[tempx][tempy]=='N') 
			  judge(tempx,tempy,ex,ey);
		
	}
	A[sx][sy]='N';
}

int main()
{
	int k,i,j; 
	char ch;
    scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	  {
	    getchar();
	    for(j=0;j<m ;j++)
	    {
	    	if(getchar()=='1') array[i][j]=1;
	    	else array[i][j]=0;
	    	A[i][j]='N';
	    }
	  }
/*	for(int i=0;i<n;i++)
	  for(int j=0;j<m;j++)
	     printf("%d",array[i][j]);*/
	scanf("%d",&k);
	int x1[50],x2[50],y2[50],y1[50];
	for(i=0;i<k;i++)
	      scanf("%d%d%d%d",&x1[i],&y1[i],&x2[i],&y2[i]);
	for(int i=0;i<k;i++)      
		  {
		    judge(x1[i]-1,y1[i]-1,x2[i]-1,y2[i]-1);
		    if(flag==0) printf("false\n");
		    else flag=0;
		  }
	return 0;
}
