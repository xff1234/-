#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;
int main(void){
   string food;
   int i=0;
   cout<<"��ϲ��ʲô��ʳ��"<<endl;
   while(cin>>food)
	{
      i=i++;
      cout<<"��ϲ���ĵ�"<< i << "��ʳ�ǣ�" << food << endl ;
      cout << "�㻹ϲ����ʲô��ʳ? ";
    }
  cout << "����ϲ������ʳ��" << i << "��" << endl;
  system("pause");
  return 0;
}