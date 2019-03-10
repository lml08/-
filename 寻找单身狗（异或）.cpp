#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,flag=0;
	long int temp;
	scanf("%d",&n);
	int A[n];
	int sz=sizeof(A)/sizeof(A[0]);
    for(i=0;i<n;i++)
	   scanf("%d",&A[i]);
	int num1=0,num2=0,num;
	for(i=0;i<sz;i++)
	   num=num^A[i];
	for(i=0;i<32;i++)
	   if((num >> i)& 1!=1) flag++;
	   else break;
	for(i=0;i<sz;i++)
	   if((A[i] >> flag)&1==1) num1^=A[i];
	   else num2^=A[i];
	if(num1>num2) {
		temp=num1;
		num1=num2;
		num2=temp;
	}
	printf("%d %ld",num1,num2);	
}
