//nԪ֧����ʽ
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n; 
	int x,y,z;int count=0;
	if(n==1)cout<<"��һ��֧����ʽ��"<<"֧��һ��1Ԫ";
	if(n==2)cout<<"������֧����ʽ��֧��һ��2Ԫ����2��1Ԫ";
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
		cout<<"֧��"<<x<<"��5Ԫ��"<<y<<"��2Ԫ��"<<z<<"��1Ԫ"<<'\n'; 
	}
	}
	}
	}cout<<"����"<<count<<"��"<<"֧����ʽ"; 
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
		cout<<"֧��"<<x<<"��5Ԫ��"<<y<<"��2Ԫ��"<<z<<"��1Ԫ"<<'\n'; 
	}
	}
	}
	}cout<<"����"<<count<<"��"<<"֧����ʽ"; 
	}
	
 } 
