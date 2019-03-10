#include<stdio.h>
#include<map>
#include<iostream>
using namespace std;
std::map<int,int>M; 
int main()
{
	int i,n;
	scanf("%d",&n);
	int sz[n];
	for(i=0;i<n;i++)
	  	{
	  	  scanf("%d",&sz[i]);
	      if(M.find(sz[i])==M.end())   
		     M[sz[i]]=1;
		  else M.erase(sz[i]); 
		}
	map<int,int>::iterator iter;
	for(iter=M.begin();iter!=M.end();iter++)
	printf("%d ",iter->first);
}

	

