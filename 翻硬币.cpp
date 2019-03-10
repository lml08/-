//重点是存放新状态 和判重  bfs 
#include<stdio.h>
#include<iostream>
#include<string>
#include<queue>
#include<set>
using namespace std;
queue<struct zt>p;
set<string>s;
typedef struct zt{
	string s;
	int step;
};
int main(){
  int n;
  zt q;
  while(1){
    cin>>q.s; 
	if(q.s=="0") break;
	n=(q.s).length(); 
	q.step=0;
	p.push(q);
	s.insert(q.s);
	string final;
    for(int i=0;i<n;i++) final+="1";
	int sign=1;
	while(!p.empty())
	{
		q=p.front();
	    p.pop();
		if(q.s==final){
			cout<<q.step<<endl;
			sign=0;
			break;
		}
		for(int i=0;i<=(q.s).length()-3;i++){
			string temp=q.s;
		    temp[i]=temp[i]=='1'? '0':'1';
		    temp[i+1]=temp[i+1]=='1'? '0':'1';
		    temp[i+2]=temp[i+2]=='1'? '0':'1';
            if(!s.count(temp)){
                zt kong;
				kong.s=temp;
				kong.step=q.step+1;
				p.push(kong);
				s.insert(kong.s);	
            }
		}
	}
	if(sign) cout<<"No answer"<<endl;
	}
	return 0;
}
