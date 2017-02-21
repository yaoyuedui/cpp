#include <iostream>
using namespace std;
int gcd(int x,int y)
{
	return (y==0)?x:gcd(y,x%y);
 } 
 int main()
 {
 	int x,y;
 	cin>>"输入两个数">>x>>y;
 	cout<<"最大公约数为："<<gcd(x,y)<<endl;
 }
