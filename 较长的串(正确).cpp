#include<stdio.h>
#include<string.h>
char A[50];
int len;
void sort(int k){
	int temp;
	for(int i=k+1;i<len-1;i++)
	  for(int j=k+1;j<len-i-1;j++)
	     	{
	     	temp=A[j];
	     	A[j]=A[j+1];
	     	A[j+1]=temp;}
}
int main()
{
	int temp;
	scanf("%s",A);
	len=strlen(A);
	for(int i=strlen(A)-1;i>=1;i--)
	{ 
		if(A[i]>A[i-1])
		{
			for(int j=strlen(A)-1;j>i-1;j--)
			    {
			     if(A[j]>A[i-1])
			      { 
			       	  temp=A[j];
			       	  A[j]=A[i-1];
			       	  A[i-1]=temp;
			       	  //sort(i-1);
			       	  break;
			       }
			       }
			break;
		}
	}
	for(int i=0;i<strlen(A);i++)
	printf("%c",A[i]); 
} 
