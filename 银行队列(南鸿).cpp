#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
std::vector<int>A,B;
int main()
{
	int n,x;
	while(cin>>n){
		A.clear();
	    B.clear();
	    for(int i=0;i<n;i++){
		cin>>x;
		A.push_back(x);
	}
	int flag=0;
	while(!A.empty()){
	    for(int i=0;i<A.size();i++){
			if(flag==0||flag==1){
				if(A[i]%2!=0){
				
	    		B.push_back(A[i]);
				A.erase(A.begin()+i);
				break;
				}
	    	}
	    	else if(flag==2){
	    		if(A[i]%2==0){
	    		B.push_back(A[i]);
				A.erase(A.begin()+i);
				break;
				}
	    	}
	    } 
		flag++;
	    if(flag==3) flag=0;	
        }
    int j;
    for(j=0;j<B.size();j++)
    {
    	if(j!=0) cout<<" "<<B[j];
    	else cout<<B[j];
    }
    cout<<endl;
	}
	return 0;	
}
