#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
std::map<int,int>M;
int main()
{
  int n;
  int j=0;
  while(j<=20){
  	j++;
  	n=j;
	int sz[n];
	for(int i=0;i<n;i++){
	  sz[i]=i;
	  M[i]=i; 
	}
    int count=0;
    map<int,int>::iterator iter;
	sort(sz,sz+n);
	do{
		bool flag=true;
		for(int i=0;i<n;i++)
		   M[i]=sz[i];
    	for(iter=M.begin();iter!=M.end();iter++){
    		if(iter->first==iter->second) flag=false;
    	}
    	if(flag==true) count++;
    }while(next_permutation(sz,sz+n));
    cout<<count<<" "<<n<<endl;
  }
}
