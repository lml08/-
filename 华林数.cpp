#include<stdio.h>
int main(){
	int n;
	int flag=0;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<=n;i++){
		if(fang(i)==n) flag=1; 
		if(fang(i)>n) break;
	}
	if(flag==0)
	for(j=i;fang(j)>=n;j-=0.1)
	if(fang(j)==) flag=1;
} 
