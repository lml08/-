#include<stdio.h>
int main()
{
	int n,m,x,y;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	long long a[n+1][m+1];
	for(int i=0;i<n+1;i++)
		for(int j=0;j<m+1;j++)
			a[i][j]=0;
	if(x-2>=0&&y-1>=0&&x-2<n+1&&y-1<m+1) a[x-2][y-1]=-1;
	if(x-2>=0&&y+1>=0&&x-2<n+1&&y+1<m+1) a[x-2][y+1]=-1;
	if(x+2>=0&&y-1>=0&&x+2<n+1&&y-1<m+1) a[x+2][y-1]=-1;
	if(x+2>=0&&y+1>=0&&x+2<n+1&&y+1<m+1) a[x+2][y+1]=-1;
	if(x-1>=0&&y-2>=0&&x-1<n+1&&y-2<m+1) a[x-1][y-2]=-1;
	if(x-1>=0&&y+2>=0&&x-1<n+1&&y+2<m+1) a[x-1][y+2]=-1;
	if(x+1>=0&&y-2>=0&&x+1<n+1&&y-2<m+1) a[x+1][y-2]=-1;
	if(x+1>=0&&y+2>=0&&x+1<n+1&&y+2<m+1) a[x+1][y+2]=-1;
    a[x][y]=-1;
    
	for(int i=1;i<n+1;i++)
		if(a[i][0]<0) break;
		else a[i][0]=1;
	for(int j=1;j<m+1;j++)
		if(a[0][j]<0) break;
		else a[0][j]=1;
	for(int i=1;i<n+1;i++)
		for(int j=1;j<m+1;j++)
		{
			if(a[i][j]>=0&&a[i-1][j]>0) a[i][j]+=a[i-1][j];
			if(a[i][j-1]>0&&a[i][j]>=0) a[i][j]+=a[i][j-1];	
		}
	printf("%lld",a[n][m]);
}
