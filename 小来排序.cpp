#include<stdio.h>
int sum=0;
int n;
int flag;
int a[30];
int judge(){
	int temp=a[0];
	for(int i=1;i<n;i++){
		if(a[i]<temp && a[i]!=0) return 0;
		if(a[i]!=0) temp=a[i];
	}
	return 1;
}
void ditui(int temp){
	for(int i=0;i<n;i++){
		if(a[i]!=0 && a[i]==temp && !judge()){
			a[i]=0; sum+=1; break; 
		} 
	}
	if(!judge()) ditui(temp-1);
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	ditui(n);
	printf("%d",sum); 
}
