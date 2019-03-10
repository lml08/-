#include<stdio.h>
#include<string.h>
int n;
void print(int* a,int now){
	for(int i=0;i<=now;i++){
		if(a[i]>0)
			printf("%d ",a[i]); 
	}
	printf("\n");
} 
void digui(int* a,int p)//p指当前要拆分的位置 
{
	if(a[p]>=0 && a[p]<=a[p-1]) print(a,p);
	for(int i=a[p]-1;i>0;i--){
		if(i<=a[p-1]){
			a[p+1]=a[p]-i;
			a[p]=i;
			digui(a,p+1);
		}
	}	
} 
int main(){
	scanf("%d",&n);
	int a[n];
	memset(a,0,sizeof(a));
	printf("%d\n",n);
	int flag=0;
	for(int i=n-1;i>=1;i--){
		a[flag]=i;
		a[flag+1]=n-i;
		digui(a,flag+1);
	}
} 
