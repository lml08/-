#include<cstdio>
#include<queue>
#include<iostream>
#include<vector>
using namespace std;
priority_queue<int,vector<int>,greater<int> >q;//stl�� 
int main()//��ԽС������ȨԽ�� 
{
	q.push(1);
	q.push(2);
	q.push(3);
    if(!q.empty()) 
	cout<<"dui lie bu kong"<<endl;//���ﱾ����Ҫ��ѭ��֮�������Աȵ� ûд 
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

