#include<stdio.h>
int n=4;
int sum=0;
int a[4];
void pailie(int x,int num){//x,��ʾ�ڼ��� num��ʾѡ��ڼ����� 
	if(num>=3) return ;
	for(int i=num;i<=n;i++){
		sort(x); 
		int temp=a[x];
		a[x]=a[num];
		a[num]=temp;
		pailie(x+1,num+1);
		a[num]=a[x];
		a[x]=temp;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
	}                                
}
int main(){
	pailie(1,1);                                          
}
