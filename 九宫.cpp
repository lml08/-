#include<stdio.h>
#include<iostream>
#include<string>
#include<queue>
#include<set>
using namespace std;
typedef struct node{
	string gz;
	int step;
};
queue<struct node>q;
set<string>s;
int bufa[][4]={{1,3,-1,-1},{0,2,4,-1},{1,5,-1,-1},{0,4,6,-1},{1,5,7,3},{2,4,8,-1},{3,7,-1,-1},{8,4,6,-1},{5,7,-1,-1}};
string ch;
char kong=' ';
int main()
{
	node p,temp1;
 	cin>>p.gz;
 	p.step=0;
    q.push(p);
    s.insert(p.gz);
    string f ;
    cin>>f;
    bool flag=false;
    while(!q.empty()){
    	temp1=q.front();
    	q.pop(); 
    	if(temp1.gz==f){
    		cout<<temp1.step;
			flag=true;
			break;
    	}
    	int x;
    	for(int i=0;i<9;i++)
    	   if((temp1.gz)[i]=='.') x=i;
    	for(int i=0;i<4&&bufa[x][i]!=-1;i++){
			ch=temp1.gz;
			kong=ch[x];
			ch[x]=ch[bufa[x][i]];
			ch[bufa[x][i]]=kong;
			if(!s.count(ch)){
					node temp2;
					temp2.gz=ch; temp2.step=temp1.step+1;
					q.push(temp2);
					s.insert(temp2.gz);
				}
			}
    	}
    	if(flag==false) cout<<"-1"; 
}
