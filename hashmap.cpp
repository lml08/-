#include<hash_map>
#include<iostream>
using namespace std;
using namespace __gnu_cxx;
 
int main(void)
 {
  hash_map<const char*,float>hm;
  //元素的插入：pair<iterator,bool>insert<const value_type &v>
  //insert(inputiterator first,inputiterator last)
  hm["apple"]=1.0f;
  hm["pear"]=1.5f;
  hm["orange"]=2.0f;
  hm["banana"]=1.8f;
  //元素的访问可以用，数组的方式也可以用迭代器的方式
  hash_map<const char*,float>::iterator i,iend,j;
  iend=hm.end();
  for(i=hm.begin();i!=iend;i++)
  {
   cout<<(*i).first<<"   "
    <<(*i).second<<endl;
  }
  cout<<"**************************************************"<<endl;
  //元素的删除erase(),clear()
  hm.erase("pear");
  for(i=hm.begin();i!=iend;i++)
  {
   cout<<(*i).first<<"   "
    <<(*i).second<<endl;
  }
  
  //元素的搜索
  j=hm.find("pear");
  i=hm.find("apple");
  cout<<"水果："<<(*i).first<<"  "
   <<"价钱："<<(*i).second<<endl;
  cout<<"**************************************************"<<endl;
  if(j!=hm.end())
  {
   cout<<"hash_map容器的个数"<<hm.size()<<endl;
  }
  else
  {
   cout<<"哈希表的表长："<<hm.bucket_count()<<endl;
  }
  return 0;
 }

