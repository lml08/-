#include<stdio.h>
#include<map>
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
std::map<string,int>Map;
char A[20];
char ans[20];
int flag[20];
int n;
string final;
void F(int a){
	if(a==n){
		if(strcmp(ans,A)>0)
		 {
		   string A=(string)ans;
		   Map[A]=0;
	     }
	}
	else {
		for(int i=0;i<n;i++){
			if(flag[i]) continue;
			ans[a]=A[i];
			flag[i]=1;
			F(a+1);
			flag[i]=0;
		}
	} 
}

void B()
{
	map<string,int>:: iterator iter1,iter2;
	iter1=Map.begin();final=iter1->first;
	for(iter2=Map.begin();iter2!=Map.end();iter2++)
	   if(iter2->first<iter1->first)
	      final=iter2->first; 
}

int main(){
	scanf("%s",A);
	n=strlen(A);
	memset(flag,0,sizeof(flag));
	F(0);
	B();
	cout<<final;
}
