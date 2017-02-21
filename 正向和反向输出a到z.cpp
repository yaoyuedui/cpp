//正向和反向输出小写字母a-z
#include <iostream>
using namespace std;
int main()
{
	char i;
	for(i='a';i<='z';i++)
	cout<<i<<' ';cout<<'\n';
	for(i='z';i>='a';i--)
	cout<<i<<' ';cout<<'\n';
	return 0;
 } 
