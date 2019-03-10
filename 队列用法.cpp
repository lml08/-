#include<cstdio>
#include<queue>
#include<iostream>
#include<vector>
using namespace std;
priority_queue<int,vector<int>,greater<int> >q;
int main()
{
	q.push(1);
	q.push(2);
	q.push(3);
    if(!q.empty()) 
	cout<<"dui lie bu kong"<<endl;
    int n=q.size();
    cout<<n<<endl;
    for(int j=0;j<3;j++)
    {
    	int e=q.top();
    	cout<<e<<" ";
    	q.pop();
    }
    cout<<endl;
}

