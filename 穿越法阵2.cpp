#include<iostream>//不存在判重问题啊  一直往下走 不回溯 
#include<stdio.h>
#include<string.h>
#include<queue>
#include<string>
using namespace std;
struct node{
	int sx,sy;
	char flag;
	int step;
};
queue<node>q;
int n;
int ex=0,ey=0;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int main(){
	cin>>n;
	char fz[n][n];
	for(int i=0;i<n;i++)
	  for(int j=0;j<n;j++)
	      cin>>fz[i][j];
    node p1;
    p1.step=0;
	for(int i=0;i<n;i++)
	  for(int j=0;j<n;j++){
	    if(fz[i][j]=='A'){
		   p1.sx=i,p1.sy=j;
		   p1.flag='A';
	    }  
	    if(fz[i][j]=='B'){
	    	ex=i;ey=j;
	    }
	  }
	int flagbs[n][n];
	memset(flagbs,0,sizeof(flagbs)); 
	q.push(p1);
	bool flag=false;
	while(!q.empty()){
		
		node p2;
		p2=q.front();
		q.pop();
		if(fz[ex*n+ey]!='B'){//该为当前位置为ex,ey 
			cout<<p2.step;
			flag=true;
			break;
		} 
        for(int i=0;i<4;i++){
        	int tempx=p2.sx+dx[i],tempy=p2.sy+dy[i];
        	if(tempx>=0&&tempx<n&&tempy>=0&&tempy<n&&fz[tempx][tempy]!=p2.flag){ 
				if(flagbs[tempx][tempy]==0){
					node p1;
					p1.step=p2.step+1;
					flagbs[tempx][tempy]=p1.step;
					p1.sx=tempx;
					p1.sy=tempy;
					p1.flag=fz[tempx*n+tempy];
					q.push(p1);
				}
        	}
        }
	}
	if(!flag) cout<<"Error";	  
}
