#include<stdio.h>//不停 全部遍历 //想用str存路径 
#include<queue>// 但是行不通 单存字符串明显不行 同时  set中放node之类自定义类型的需满足有序性 故要重载比较符 
#include<string>
#include<set>
#include<iostream>
using namespace std;
struct node{
	int x,y;
	int count;
	string str;
};
queue<node>q;
set<node>SET;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,-1,1};
bool operator<(const node& lhs, const node& rhs) {
    return lhs.str<rhs.str;
}
int main()
{
	int n,m,sx=0,sy=0,flag=0;
	while(scanf("%d %d",&n,&m)==2){
	char a[n][m];
	for(int i=0;i<n;i++)
		scanf("%s",a[i]);
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++){
		if(a[i][j]=='m') {
			sx=i;sy=j;
		}	
	}
	node t1;
	t1.x=sx;t1.y=sy;t1.count=0;t1.str=a[sx][sy];
	SET.insert(t1);
	q.push(t1);
	while(!q.empty()){
		node t2;
		t2=q.front(); q.pop();
		if(a[t2.x][t2.y]=='f'){
			printf("%d\n",t2.count);
			flag=1;
		}
		for(int i=0;i<4;i++){
			int tempx=t2.x+dx[i];
			int tempy=t2.y+dy[i];
			if(tempx>=0 && tempx<n && tempy>=0 && tempy<m && a[tempx][tempy]!='#'){
				node t3;
				t3.x=tempx;t3.y=tempy;
				if(a[tempx][tempy]=='g') t3.count=t2.count+2;
				else t3.count=t2.count+1;
				t3.str=t2.str+a[tempx][tempy];
				cout<<t3.str<<endl;
				getchar();
				if(SET.find(t3)==SET.end()){
					q.push(t3);
					SET.insert(t3);
				}  
			}	
		}
	}
	if(flag==0) printf("Poor Xiaoming\n");
	}
}
