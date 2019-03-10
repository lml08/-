 //好吧 dp废了，因为并不具有最优子结构 准确来说 最优子结构并不能拼凑出最优解  
 //下次在考虑能不能用dp解题的时候  一定要这个问题  ↑ 
 //其实也很明显 前后取得数都是有联系的 只能说明不够理解dp 
#include<stdio.h> 
#include<iostream>
#include<vector>
using namespace std;
vector<int>a;
int flag;
int Max(int x,int y,int j){
	if(x<y){
		flag=j;
		return y;
	} 
	else return x;
}
int main()
{
  int k;
  scanf("%d",&k);
  for(int p=0;p<k;p++){
	int n,m,temp=0;
	cin>>n>>m;
	int d[m+1];d[0]=1;
	for(int i=0;i<n;i++) {
		int ch;
		cin>>ch;
		a.push_back(ch);
	}
	for(int i=1;i<m+1;i++){
	   for(int j=0;j<a.size();j++){
		   if(j==0){
		   	 flag=0;
		   	 temp=d[i-1]*a[j];
		   } 
		   temp=Max(temp,d[i-1]*a[j],j);
	   }
		d[i]=temp; a.erase(a.begin()+flag);
	}
	for(int i=0;i<m+1;i++) cout<<d[i]<<endl;
  }
} 
