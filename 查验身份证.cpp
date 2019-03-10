#include<iostream>
#include<stdio.h> 
#include<map>
#include<string>
#include<sstream>
using namespace std;
std::map<int,char>Map;
int Q[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
int main()
{
	int i=0,flag=0;
	Map[0]='1';
	Map[1]='0';
	Map[2]='x';
	Map[3]='9';
	Map[4]='8';
	Map[5]='7';
	Map[6]='6';
	Map[7]='5';
	Map[8]='4';
	Map[9]='3';
	Map[10]='2';
    int n,sum;
    cin >> n;
    getchar();
    string Line[n];
    for(int i=0;i<n;i++) getline(cin,Line[i]);
        for(int i=0;i<n;i++)
	   {
    	   sum=0;
    	   int atten=1;
    	   string line=Line[i];
    	   for(int j=0;j<17;j++)
    	     if(line[j]>='0'&&line[j]<='9') 
		     {
		   	   sum=sum+((int)line[j]-48)*Q[j];
		     }
	         else
		      {
		       cout<<Line[i]<<endl;
		   	   atten=0;
		   	   break;
		 	  }
		   if(atten==1&&line[17]!=Map[sum%11])
		   {
		      cout << Line[i]<<endl;
		      flag=1;
	       }
         
        }
    if(flag==0) cout << "All passed";
}
