#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<vector>
#define max 120
using namespace std;
vector<struct state*>q;
int n,ex,ey;
char circle[max][max];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1}; 
struct state{
	int x;
	int y;
	int step;
	bool arrive;
}*p,*temp;   

void digui(int sx,int sy,struct state* p,int step){ 
	if(sx==ex&&sy==ey) {
		p->arrive=true;
		return ;
	}
	printf("%d %d\n",sx,sy);//相同 
	getchar();
	for(int i=0;i<4;i++){
		int tempx=sx+dx[i];
		int tempy=sy+dy[i];
		
		if(tempx>=0&&tempx<n&&tempy>=0&&tempy<n&&circle[tempx][tempy]!=circle[sx][sy]){
			//遍历找新状态。
			int flag=0;
			for(int i=0;i<q.size();i++){
				temp=q[i];//不报错? 
				if(temp->x==tempx||temp->y==tempy) {
					flag=1;
					break;
				}
			cout<<flag<<endl;	
			}
			if(flag==0){
				p=(struct state*)malloc(sizeof(struct state));
				p->x=tempx;p->y=tempy;p->arrive=false;p->step=step++;
				q.push_back(p); 
			    digui(tempx,tempy,p,p->step);
			}
			
			
			//如果是新的就创建结构体 并加到数组中 
		}
	}
	
} 

int main()
{
	char ch;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>circle[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(circle[i][j]=='A'){
				p=(struct state*)malloc(sizeof(struct state));
				p->x=i;p->y=j;
				p->step=0;
				p->arrive=false;
			//	cout<<p->x;
			    q.push_back(p);//入队(数组)的是结构体指针！ 
			} 
			if(circle[i][j]=='B')  ex=i;ey=j;
		}
	} 
	temp=q.front();
	digui(temp->x,temp->y,p,p->step);
	int final=0;
	for(int i=0;i<q.size();i++){
		temp=q[i];
		if(temp->arrive==true&&temp->step>final)
		  final=temp->step;
	}
	//cout<<final;
	return 0;
} 
