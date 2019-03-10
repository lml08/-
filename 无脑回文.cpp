#include<stdio.h>
#include<string.h>
int a[20];
int b[20];
int STEP=0;
int t=1;
int fan(int x){
	int t=1;
	int sum=0;
	while(x%10!=0){
		a[t++]=x%10;
		x/=10;
	}
	for(int i=1;i<t;i++){
		int temp=1;
		for(int j=1;j<t-i;j++)
			temp*=10;
		sum+=a[i]*temp;
	}
	return sum;
}
int addtosum(int x,int y){
	int nsum=0;
	int flag=0;
	while(x%10!=0){
		b[flag++]=x%10+y%10;
		x/=10;y/=10;
	}
	for(int i=0;i<flag;i++){
		if(b[i]>=9) {
			b[i+1]+=b[i]/9;
			b[i]%=9;	
		}
	}
	int temp=1;
	for(int i=0;i<flag+1&&b[flag]!=0;i++){
		nsum+=b[i]*temp;
		temp*=10;
	}
	int h=flag;int t=1;
	for(int i=0;i<=h;i++,h--){
		if(b[i]!=b[h]){
			t=0;
			break;
		} 
	}
	return nsum;
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	printf("%d",addtosum(m,fan(m)));
}
