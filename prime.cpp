//jduge whether a number is a prime
#include <iostream>
using namespace std;
int main()
{
	int n;int i;
	cout<<"input a integer";
	cin>>n;
	while(i>=2&&n%i!=0)
	{
		i++;
	}if(i<n)cout<<n<<" is not a prime";
		else cout<<"n is a prime";
}
