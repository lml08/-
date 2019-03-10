//È¡Çòdp 
#include<stdio.h>
#include<iostream>
#define m 1000
using namespace std;
int a[m];
int main(){
	
	int n,k;
	cin>>k;
	for(int j=0;j<k;j++){
		cin>>n;
		for(int i=0;i<m;i++) a[i]=0;
		a[0]=1;
		for(int i=1;i<n;i++)
	    {
		  if(a[i]==0){
			a[i+1]=1;a[i+3]=1;a[i+7]=1;a[i+8]=1;
		  }
	    }
	    printf("%d\n",a[n]);
	}
	
}
