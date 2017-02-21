//24小时制转换为12小时制 
#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"输入24小时制下的时间：";
	cin>>x>>y;
	if(x>=1&&x<=12)cout<<x<<":"<<y<<"am";
	if(x>12&&x<=24)
	{
		x-=12;
		cout<<x<<":"<<y<<"pm";
	 } 
	 return 0;
}
