#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"please input two integer:";
	cin>>a>>b;
	int d=(a>=b)?b:a;
	while(d>=1)
	{
		if(a%d==0&&b%d==0)
		{
		 cout<<d<<"是最大公约数"<<endl;break;
	}
		 d--;
	}
 } 
