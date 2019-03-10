#include<stdio.h>
void Combine(int* A,int x,int i)
{
	if(i>4) return ;
	A[3-x]=i;x--;
	Combine(A,x,i+1);
	if(x==0)
	
	Combine(A,x,i+1);                                                                                                                                                                                                                                                                  
}
int main()
{
    int A[3]; 
	Combine(A,3,1);
}
