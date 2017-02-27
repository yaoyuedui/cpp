//n元支付方式
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n; 
	int x,y,z;int count=0;
	if(n==1)cout<<"有一种支付方式："<<"支付一个1元";
	if(n==2)cout<<"有两种支付方式：支付一个2元或者2个1元";
	if(n>2&&n<=5)
	{
	for(x=0;x<=1;x++)
	{
	for(y=0;y<=2;y++) 
	{
	for(z=0;z<=5;z++)
	{
	if(n==5*x+2*y+z){
		count ++;
		cout<<"支付"<<x<<"个5元，"<<y<<"个2元和"<<z<<"个1元"<<'\n'; 
	}
	}
	}
	}cout<<"共有"<<count<<"种"<<"支付方式"; 
	}
	if(n>5)
	{
			for(x=0;x<=n/5;x++)
	{
	for(y=0;y<=n/2;y++) 
	{
	for(z=0;z<=n;z++)
	{
	if(n==5*x+2*y+z){
		count ++;
		cout<<"支付"<<x<<"个5元，"<<y<<"个2元和"<<z<<"个1元"<<'\n'; 
	}
	}
	}
	}cout<<"共有"<<count<<"种"<<"支付方式"; 
	}
	
 } 
