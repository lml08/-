//���  
#include<stdio.h>
#define M 10000
int WL[M];
int F(int n){
	if(WL[n]!=-1) return WL[n];//���n�Ѿ���ֵ�˾�ֱ����   ��б���¼ �����ڶ�̬�滮�� 
	int result=0;
	if(n==0) result=1;
	if(n>=1 && F(n-1)==0) result=1;
	if(n>=3 && F(n-3)==0) result=1;
	if(n>=7 && F(n-7)==0) result=1;
	if(n>=8 && F(n-8)==0) result=1;
	WL[n]=result;	
	return WL[n]; //����ûһ��ΪLose	 
} 
int main(){
	for(int i=0;i<M;i++) WL[i]=-1;
	for(int i=700;i<=700;i++)
	  printf("%d\t",F(i));
}


