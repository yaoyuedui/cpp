//24Сʱ��ת��Ϊ12Сʱ�� 
#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"����24Сʱ���µ�ʱ�䣺";
	cin>>x>>y;
	if(x>=1&&x<=12)cout<<x<<":"<<y<<"am";
	if(x>12&&x<=24)
	{
		x-=12;
		cout<<x<<":"<<y<<"pm";
	 } 
	 return 0;
}
