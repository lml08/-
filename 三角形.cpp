#include<stdio.h>
#define m 1000
int max(int x,int y){
	return x>y? x:y;
}
int a[m][m];
int f[m][m];
int main()
{
	
	int tnd;
	scanf("%d",&tnd);
	for(int k=0;k<tnd;k++){
	    int i,j,n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		  for(int j=1;j<=i;j++)
		     scanf("%d",&a[i][j]);
	for(int i=1;i<=n;i++) f[n][i]=a[n][i];
	for(int i=n-1;i>0;i--)
	   for(int j=1;j<=i;j++)
	   {
	  	  f[i][j]=a[i][j]+max(f[i+1][j],f[i+1][j+1]);
	   }
	printf("%d\n",f[1][1]);
}
}
