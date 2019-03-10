#include<stdio.h>
int Max(int x,int y){
	return x>y? x:y;
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n+1][m+1]; 
	int f[n+1][m+1];
	for(int i=1;i<=n;i++)
	   for(int j=1;j<=m;j++){
	   	 scanf("%d",&a[i][j]);
	   	 f[i][j]=0;
	   }   
    f[1][1]=a[1][1];
    for(int i=2;i<=n;i++)
       f[i][1]=a[i][1]+f[i-1][1];
    for(int j=2;j<=m;j++)
       f[1][j]=a[1][j]+f[1][j-1];
    for(int i=2;i<=n;i++)
       for(int j=2;j<=m;j++)
          f[i][j]=Max(a[i][j]+f[i-1][j],a[i][j]+f[i][j-1]);
    printf("%d",f[n][m]);      
}
