/*结题： 
没有充分理解题意 

*/
#include<stdio.h> 
#include<iostream>
#include<map>
#include<vector>
using namespace std;
vector<int>v;
std::multimap<int,int>Map;
int main()
{
	int n;
	cin>>n;
	while(n--){
		int m;
		cin>>m;
		Map.clear();
		for(int j=0;j<m;j++){
			int x,y;
			cin>>x;
			cin>>y;
			Map.insert(pair<int,int>(x,y));
		}
		int num=0;
		while(!Map.empty()){
		    int Minx = Map.begin()->first;
			int Miny = Map.begin()->second;
		    for(multimap<int,int>::iterator iter=Map.begin();iter!=Map.end();iter++)
		    	if(iter->first<Minx && iter->second<Miny){
		    		Minx=iter->first;
		    		Miny=iter->second;
		    	}
		    for(multimap<int,int>::iterator iter=Map.begin();iter!=Map.end();iter++)
		    	if(iter->first>=Minx&&iter->second>=Miny){
				    v.push_back(iter->first);
		    	}
		    while(!v.empty()){
		    	int temp=*v.begin();
		    	v.erase(v.begin());
				Map.erase(temp);
		    }
		    v.clear();
		    num+=1;
		}
		cout<<num<<endl;
	}
}
