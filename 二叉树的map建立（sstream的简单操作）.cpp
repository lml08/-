#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
#include<sstream>
#include<map>
using namespace std;
std::map<int,int> left1;
std::map<int,int> right1;
int Pr[10001];  
int In[10001];
bool flag=false;
int n;
void read(int *a){
	string line;
	int x;
	getline(cin,line);
	stringstream ss(line);
	n=0;
	while(ss>>x) a[n++]=x;
} 
int Find(int sr,int er,int si,int ei) //r是先序数组 i是中序数组 
{
	if(si>ei) return 0;
	int num=Pr[sr];
	int p=si; 
	while(In[p]!=num)
	    p++;
	int cnt=p-si;  
	left1[num]=Find(sr+1,sr+cnt,si,p-1);
	right1[num]=Find(sr+cnt+1,er,p+1,ei);
	cout<<"###";
	return num;
}
void diguiprint(int n){//用map的递归会不明确 
	if(left1[n]!=0) {
		diguiprint(left1[n]);
	}
	if(right1[n]!=0){
		diguiprint(right1[n]);
	}
	int num=left1[n];
	if(num!=0) cout<<num<<" ";
	num=right1[n];
	if(num!=0) cout<<num<<" ";
}
int main()
{
	int k;
	scanf("%d\n",&k);
	while(k>0){
	k--;
    read(Pr);
	read(In); 
	Find(0,n-1,0,n-1);
    diguiprint(Pr[0]);
    cout<<Pr[0]<<" "<<endl;
}
}
