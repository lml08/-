#include<stdio.h>
int N,M;
int flag=0;
void digui(int* a,int x,int tsum){//x��ʾ���ڼ����� 
	if(x>=N||tsum>=M) return;
	for(int i=x;i<=N;i++){
		tsum+=a[i];
		if(tsum==M) flag=1;
		digui(a,x+1,tsum);
		tsum-=a[i];//һ��ʼ��������� 
	} 
}
int main(){
	scanf("%d %d",&N,&M);
	int a[N+1];
	for(int i=1;i<=N;i++)
		scanf("%d",&a[i]);
	digui(a,1,0);
	printf("%d",flag); 
} 
