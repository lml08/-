#include<stdio.h>
int n,m,flag=0;
int map[50][50];
char Mark[50][50];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
void Search(int sx,int sy,int ex,int ey)
{
    int tx,ty;
    Mark[sx][sy]='Y';
    if(sx==ex && sy==ey)
    {
        printf("true\n");
        flag=1;
    }
    for(int j=0;j<4 && flag==0;j++)
    {
        tx=sx+dx[j],ty=sy+dy[j];
        if(tx>=0 && tx<n && ty>=0 && ty<m && Mark[tx][ty]=='N'&& map[tx][ty]==0)
            Search(tx,ty,ex,ey);
    }
    Mark[sx][sy]='N';
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        getchar();
        for(int j=0;j<m;j++)
        {
            if(getchar()=='1') map[i][j]=1;
            else map[i][j]=0;
            Mark[i][j]='N';
        }
    }
    int t,X1[50],X2[50],Y1[50],Y2[50];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
        scanf("%d%d%d%d",&X1[i],&Y1[i],&X2[i],&Y2[i]);
    for(int i=0;i<t;i++)
    {
        Search(X1[i]-1,Y1[i]-1,X2[i]-1,Y2[i]-1);
        if(!flag) printf("false\n");
        else flag=0;
    }
    return 0;
}
