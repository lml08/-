#include<cstdio>
#include<queue>
#include<iostream>
#include<vector>
using namespace std;
priority_queue<int,vector<int>,greater<int> >q;//stl中 
int main()//数越小的优先权越大 
{
	q.push(1);
	q.push(2);
	q.push(3);
    if(!q.empty()) 
	cout<<"dui lie bu kong"<<endl;//这里本来是要与循环之后做个对比的 没写 
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

