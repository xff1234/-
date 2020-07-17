#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;
int main(void){
   string food;
   int i=0;
   cout<<"你喜欢什么美食？"<<endl;
   while(cin>>food)
	{
      i=i++;
      cout<<"你喜欢的第"<< i << "美食是：" << food << endl ;
      cout << "你还喜欢吃什么美食? ";
    }
  cout << "你最喜欢的美食有" << i << "种" << endl;
  system("pause");
  return 0;
}