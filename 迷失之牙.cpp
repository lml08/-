#include<stdio.h>
#include<string.h>
#define max 120
int n,m,ex,ey;
int mg[max][max];
int flag[max][max];//标记数组  走过为0 
int dx[4]={-1,1,0,0};
int dy[4]={0,0,1,-1};
int flag2=0;//全部路都走一遍  
void com(int e,int sx,int sy) 
{
	flag[sx][sy]=0;
	if(sx==ex&&sy==ey) 
	{
	   flag2=1;
	}
	for(int i=0;i<4;i++)
	{
		int tempx=sx+dx[i];
		int tempy=sy+dy[i];
		if(tempx>=0&&tempx<n&&tempy>=0&&tempy<m&&flag[tempx][tempy]==1&&e>=mg[tempx][tempy])
		{
			com(e-mg[tempx][tempy],tempx,tempy);
		}
	}
	flag[sx][sy]=1;
}

int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	  for(int j=0;j<m;j++)
	     {
	      scanf("%d",&mg[i][j]);
	      flag[i][j]=1;
		  }
	int e;
	while(scanf("%d",&e)&&e!=0)
	{
		int sx,sy;
		scanf("%d %d",&sx,&sy);
		scanf("%d %d",&ex,&ey);
		com(e,sx,sy);
		if(flag2==1) printf("true\n");
		else printf("false\n");
		flag2=0;
	}
	return 0;
}
