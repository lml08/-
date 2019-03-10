//要注意bfs和dfs的巧妙使用 哪个更适合一点 这题来说明显dfs更适合
 
#include<stdio.h>
#include<queue>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int x,y;
	int step;
};
queue<node>q;
int main()
{
	int dx[4]={-1,1,0,0};
	int dy[4]={0,0,1,-1};
	int n,m,sx=0,sy=0,temp;
	int final=0;
	scanf("%d %d",&n,&m);
	int g[n][m];
	for(int i=0;i<n;i++)
	   for(int j=0;j<m;j++)
	      {
	        scanf("%d",&g[i][j]);
             if(i==0&&j==0) temp=g[i][j];
		  }
	for(int i=0;i<n;i++)
	   for(int j=0;j<m;j++)
            if(g[i][j]<temp) {
            	temp=g[i][j];
            	sx=i;sy=j;
			}
	node head;
	head.x=sx;head.y=sy;
	head.step=1;
	q.push(head);
    while(!q.empty()){
    	node temp,kong;
    	temp=q.front();
		//free(&q.front()); 
    	q.pop();
    	if(temp.step>final) final=temp.step;
    	for(int i=0;i<4;i++){
    		int tempx=temp.x+dx[i];
    		int tempy=temp.y+dy[i];
    		if(tempx>=0&&tempx<n&&tempy>=0&&tempy<m&&g[tempx][tempy]>g[temp.x][temp.y]){
    			node tempnew;
    			tempnew.x=tempx;
    			tempnew.y=tempy;
    			tempnew.step=temp.step+1;
    			q.push(tempnew);
    		}
    	}
    }
    printf("%d",final);
	return 0;
}
