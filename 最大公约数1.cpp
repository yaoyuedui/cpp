//�����Լ��
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"please input two integer:";
	cin>>a>>b;
	int c=0;
	while(b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	cout<<a<<"�����Լ��"<<endl;
 } 
