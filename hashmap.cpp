#include<hash_map>
#include<iostream>
using namespace std;
using namespace __gnu_cxx;
 
int main(void)
 {
  hash_map<const char*,float>hm;
  //Ԫ�صĲ��룺pair<iterator,bool>insert<const value_type &v>
  //insert(inputiterator first,inputiterator last)
  hm["apple"]=1.0f;
  hm["pear"]=1.5f;
  hm["orange"]=2.0f;
  hm["banana"]=1.8f;
  //Ԫ�صķ��ʿ����ã�����ķ�ʽҲ�����õ������ķ�ʽ
  hash_map<const char*,float>::iterator i,iend,j;
  iend=hm.end();
  for(i=hm.begin();i!=iend;i++)
  {
   cout<<(*i).first<<"   "
    <<(*i).second<<endl;
  }
  cout<<"**************************************************"<<endl;
  //Ԫ�ص�ɾ��erase(),clear()
  hm.erase("pear");
  for(i=hm.begin();i!=iend;i++)
  {
   cout<<(*i).first<<"   "
    <<(*i).second<<endl;
  }
  
  //Ԫ�ص�����
  j=hm.find("pear");
  i=hm.find("apple");
  cout<<"ˮ����"<<(*i).first<<"  "
   <<"��Ǯ��"<<(*i).second<<endl;
  cout<<"**************************************************"<<endl;
  if(j!=hm.end())
  {
   cout<<"hash_map�����ĸ���"<<hm.size()<<endl;
  }
  else
  {
   cout<<"��ϣ��ı���"<<hm.bucket_count()<<endl;
  }
  return 0;
 }

