 //�ð� dp���ˣ���Ϊ�������������ӽṹ ׼ȷ��˵ �����ӽṹ������ƴ�ճ����Ž�  
 //�´��ڿ����ܲ�����dp�����ʱ��  һ��Ҫ�������  �� 
 //��ʵҲ������ ǰ��ȡ������������ϵ�� ֻ��˵���������dp 
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
