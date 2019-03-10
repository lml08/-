#include<stdio.h>
#include<algorithm>
using namespace std;
int n=4;
int A[4];
int flag[3];
int index=-1;
void Permute(int k)
{
	int i;
    sort(flag,flag+3);
	do{
		for(i=0;i<2;i++)
		  printf("%d ",flag[i]);
	    printf("%d",flag[i]); 
		printf("\n"); 
	} while(next_permutation(flag,flag+3));
}
void Combination(int k,int m)
{
	if(m==0) {
		Permute(0);
        return ;
	} 
	if(k>=4) return ;
	flag[++index]=A[k];
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
