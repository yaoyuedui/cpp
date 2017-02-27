//compute the kth number from right to left of integer n
#include <iostream>
using namespace std;
int digit(int n,int k)
{
	int count,i;
	if(i>=1&&count<=k)
	{
		for(i=1;i<=k;i++)
		{
		count=n%10;
		n=n/10;
	}
	}
	else count=100;
	return count;
}
int main()
{
	cout<<digit(123456,4);
}
