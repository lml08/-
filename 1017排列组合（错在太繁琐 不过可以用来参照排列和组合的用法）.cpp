#include<stdio.h>//排列组合 可以先选 再调全排列的函数
#include<algorithm>
using namespace std;
int n=4;
int A[4];
int flag[3];
int index=-1;
void Permute(int k)
{
	if(k==2)
	{
		for(int i=0;i<3;i++) printf("%d ",flag[i]);
    	printf("\n"); return ;
	 }
	for(int j=k;j<3;j++)
	{
        sort(flag+j,flag+3);
		int temp=flag[j];
		flag[j]=flag[k];flag[k]=temp;
		Permute(k+1);
		temp=flag[j];
		flag[j]=flag[k];flag[k]=temp;
	}
}
void Combination(int k,int m)
{
	if(m==0) {
		//for(int j=0;j<3;j++) printf("%d ",flag[j]);printf("\n");
		Permute(0);
        return ;
	} 
	if(k>=4) return ;
	flag[++index]=A[k];
	//printf("%d",m);
	Combination(k+1,m-1);
	index--;
	Combination(k+1,m);
}
int main()
{
    int m=3;
	for(int i=0;i<4;i++)
	   scanf("%d",&A[i]);
	Combination(0,3); 
	return 0;  
} 

