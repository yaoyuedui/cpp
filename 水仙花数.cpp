//输入所有的水仙花数 
#include <iostream>
using namespace std;
int main()
{
	int n,x,y,z;
	for(n=100;n<=1000;n++) 
	{
	x=n/100;
	z=n%10;
	y=(n/10)%10;
	if(n==x*x*x+y*y*y+z*z*z)cout<<n<<'\t';
	} 
 } 
