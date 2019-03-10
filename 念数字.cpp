#include<stdio.h>
#include<iostream> 
#include<string.h>
#include<map>
using namespace std;
std::map<char,string>Map; 
int main()
{
	 Map['0']="ling";
	 Map['1']="yi";
	 Map['2']="er";
	 Map['3']="san";
	 Map['4']="si";
	 Map['5']="wu";
	 Map['6']="liu";
	 Map['7']="qi";
	 Map['8']="ba";
	 Map['9']="jiu";
	 Map['-']="fu";
	 char A[50];
	 scanf("%s",A);
     map<char,string>:: iterator iter;
	 for(int i=0;i<strlen(A);i++)
	    for(iter=Map.begin();iter!=Map.end();iter++)
		   {	
		     if(i==strlen(A)-1&&iter->first==A[i]) cout<<iter->second;
		     else if(iter->first==A[i])
			   cout<<iter->second<<" "; 
	    	}
} 
