#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,-1,1};
typedef char sz[3][3];
vector<sz>v;
vector<int>s;
int ex,ey;
int index=0;

void digui(int sx,int sy,int index){
	if(sx==ex&&sy==ey) ;
}

int main()
{
	sz start,end;
	scanf("%s",start);
	scanf("%s",end);
	int sx,sy;
	for(int i=0;i<3;i++)
	   for(int j=0;j<3;j++){
	   	  if(start[i][j]=='.')
	      {
	      	sx=i;sy=j;
	      }
	      if(end[i][j]=='.'){
	      	ex=i;ey=j;
	      }
	   }
	for(int i=0;i<3;i++)
	strcmp(start[i],end[i]);
//	digui(sx,sy,intdex);
}
