//�жϴӼ��������������λ��
#include <iostream>
using namespace std;
int main()
{
	int x,count=0;
	cout<<"please input a integer��";
	cin>>x;
	if(x<=0)cout<<x<<" is not a integer";
	else 
	{
    while(x>=1){x=x/10;count++;} 
	cout<<"������λ��Ϊ��"<<count<<endl;
	} 
	return 0;
 } 
