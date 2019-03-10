//逻辑错误！！！不一定是走最小的最好啊！ 不要总是被样例输入带跑。。 
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
struct node{
	int x,y;
	int num;
};
int sx=0,sy=0;
vector<node>v;
int min(){
	node ne;
	int kong=v[0].num;
	for(int i=0;i<v.size();i++){
		ne=v[i]; 
		if(ne.num<=kong){
		  sx=ne.x;
		  sy=ne.y;
		  kong=ne.num;
		}	
	}
    
	return kong;
}
int step=1;
int main()
{
	int dx[4]={-1,1,0,0};
	int dy[4]={0,0,1,-1};
	int n,m,temp;
	int final=0;
	scanf("%d %d",&n,&m);
	int g[n][m];
	for(int i=0;i<n;i++)
	   for(int j=0;j<m;j++)
	      {
	        scanf("%d",&g[i][j]);
             if(i==0&&j==0) {
             	sx=i;sy=j;
             	temp=g[i][j];
             }
		  }
		  
  while(1){
	for(int i=0;i<4;i++){
		int tempx=sx+dx[i];
    	int tempy=sy+dy[i];
    	if(tempx>=0&&tempx<n&&tempy>=0&&tempy<m&&g[tempx][tempy]>temp){
    		node test;
    		test.x=tempx;
    		test.y=tempy;
    		test.num=g[tempx][tempy];
			v.push_back(test);
			
    	}
        }
    if(!v.empty()){
        temp=min();
        step++;
        v.clear();
	} 
	else break;  
  }
  cout<<step;
}
