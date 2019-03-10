#include<stdio.h>
int main(){
	int a,b,i,j;
	int flag;
	scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
    	printf("%d=",i);
    	for(j=2,flag=i;;j++)
    	{
    		if(flag%j==0)
    		{
				printf("%d",j);
				flag/=j;
				if(flag==1) break;
				printf("*");
				j=1;
    		}
    	}
    	printf("\n");
    }
    return 0;
} 
