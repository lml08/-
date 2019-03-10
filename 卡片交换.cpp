#include<iostream>
#include<stdio.h>
#include<queue>
#include<stdio.h>
#include<set>
#include<string>
using namespace std;
struct node{
	string dao;
	int step;
};
queue<node>q;
set<string>s;
int sd,ed;
int fw[][3]={{1,3,-1},{0,4,2},{1,5,-1},{0,4,-1},{3,1,5},{4,2,-1}};
int main()
{
    node p1;
    string x;
    getline(cin,x);
	p1.dao=x;
	getline(cin,x);
    p1.dao+=x;
	for(int i=0;i<6;i++){
		if(p1.dao[i]=='A') sd=i;
		if(p1.dao[i]=='B') ed=i;
	}
	p1.step=0;
	q.push(p1);s.insert(p1.dao);
	
	while(!q.empty())
	{
		node p2;
		p2=q.front();
		q.pop();
		int x;
		for(int i=0;i<6;i++)
		  if(p2.dao[i]==' ') x=i;
		if(p2.dao[ed]=='A'&&p2.dao[sd]=='B')  {
		    cout<<p2.step;
			break;
		}
		for(int i=0;i<3&&fw[x][i]!=-1;i++){
		    char ch=' ';
			string temp;
			temp=p2.dao;
			ch=temp[x];
			temp[x]=temp[fw[x][i]];
			temp[fw[x][i]]=ch;
			if(!s.count(temp)){
				p1.dao=temp;
				p1.step=p2.step+1;
				q.push(p1);
				s.insert(temp);
			}
		}
	}
	   
}
