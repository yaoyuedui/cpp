//hanoi problem
#include <iostream>
using namespace std; 
void hanoi(char x,char y,char z, int n)//x to y
{
	if(n==1)cout<<"1:"<<x<<"->"<<y;
	if(n>1)
	{
		hanoi(x,z,y,n-1);//n-1 from x to z
		cout<<n<<":"<<x<<"->"<<y;//n from x to y
		hanoi(z,y,x,n-1);//n-1 from z to y
	}
}
int main() 
{
	char A,B,C;
	hanoi('A','B','C',3);
}
