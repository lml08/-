//被卡很长一段时间 原因是 不需要判重 时间消耗大
// OJ超时 防止来回走为何不用标记数组呢？ 
#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
struct node{
	int sx,sy;
	int step;
};
vector<node>v;
int n;
int ex=0,ey=0;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int main(){
	cin>>n;
	char temp[n][n];
	for(int i=0;i<n;i++)
	  for(int j=0;j<n;j++)
	      cin>>temp[i][j];
    node p1;
    string fz;
    p1.step=0;
	for(int i=0;i<n;i++)
	  for(int j=0;j<n;j++){
	    if(temp[i][j]=='A'){
		   p1.sx=i,p1.sy=j;
	    }  
	    if(temp[i][j]=='B'){
	    	ex=i;ey=j;
	    }
	  	fz+=temp[i][j];
	  }
	v.push_back(p1);
	bool flag=false;
	while(!v.empty()){
	
		node p2;
		p2=v.front();
		v.erase(v.begin());
		if(fz[p2.sx*n+p2.sy]=='B'){
			cout<<p2.step<<" ";
			flag=true;
			break;
		} 
        for(int i=0;i<4;i++){
        	int tempx=p2.sx+dx[i],tempy=p2.sy+dy[i];
        	if(tempx>=0&&tempx<n&&tempy>=0&&tempy<n&&fz[tempx*n+tempy]!=fz[p2.sx*n+p2.sy]){
				bool find=false;
				for(int j=0;j<v.size();j++){
					node wu=v[j];
					if(wu.sx==tempx&&wu.sy==tempy){
						if(wu.step>(p2.step+1))
						   wu.step=p2.step+1;
						find=true;
						break;
					}
				}
				if(find==false)
				{
					node p1;
					p1.step=p2.step+1;
					p1.sx=tempx;
					p1.sy=tempy;
					v.push_back(p1);
				}
        	}
        }
	}
	if(!flag) cout<<"Error";	  
}
