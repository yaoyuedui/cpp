#include <iostream>
using namespace std;
int main()
{
	long n;
	cout<<"����һ����";
	cin>>n;
	long x,y=0,z;
	z=n;
	while(z>=1)
	{
		x=z%10;
		z=z/10;
		y=y*10+x;
	}
	if(y==n)cout<<n<<"�ǻ�����";
	else cout<<n<<"���ǻ�����";
	return 0;
}
