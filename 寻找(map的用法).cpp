//寻找
#include<stdio.h>
#include<string.h>
#include<map>
#include<iostream>
using namespace std;
std::map<int,int>Map;
//Map<int,int>map
int main()
{
	int i,j,k=0,n;int b[10000];
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	if(Map.find(a[i])==Map.end())//找到相同的元素，返回值为0 ，没找到，返回值非0，if成立，执行if //map.find,找不到返回map。end 
	{
		Map[a[i]]=1,b[k]=a[i];
		k++;
    }
    else  //在这里，找到了相同的元素，删除该元素 
    {
    	Map.erase(a[i]);
	}
    } 
    
/*	for(i=0;i<n;i++)
	{
		int ok=1;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j]&&i!=j)
			{
			   ok=0;break;
		    }
		}
		if(ok==1)//没有一样的，代表是单身狗 
		{
			b[k]=a[i];
			k++;
		}
	}*/
	int t;
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
		    if(b[i]<b[j])
		    t=b[i];b[i]=b[j];b[j]=t;
		}
	}
	for(i=k;i>=0;i--)
	{
		if(b[i]!=0)
	    printf("%d ",b[i]);
    }
  /*  map<int,int>:: iterator iter;
	for(iter=Map.begin(); iter!=Map.end(); iter++){
		printf("%d ",iter->first);
	}*/
 
}
