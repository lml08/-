#include<stdio.h>
int flag=1;
void print(int *A){
	for(int i=0;i<flag&&A[i]!=0;i++)
		printf("%d ",A[i]);
	printf("\n");
 
}
void search(int n,int *A){
	int x=n/2;
	if(x==0){
		print(A);
	} //顺便可以将有无1的情况输出
	if(x>0) {
		A[flag++]=x;
		search(x,A); flag--;
			for(int i=x-1;i>=0;i--){
				A[flag++]=i;
				search(i,A);
				flag--;
			}
		
	 }
}
int main(){
	int n;
	scanf("%d",&n);
	int A[n];A[0]=n;
	search(n,A);
}
