#include <iostream>
using namespace std;
int main()
{
	long n;
	cout<<"输入一个数";
	cin>>n;
	long x,y=0,z;
	z=n;
	while(z>=1)
	{
		x=z%10;
		z=z/10;
		y=y*10+x;
	}
	if(y==n)cout<<n<<"是回文数";
	else cout<<n<<"不是回文数";
	return 0;
}
