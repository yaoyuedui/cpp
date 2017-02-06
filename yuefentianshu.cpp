//确定一个月的天数 
#include <iostream> 
using namespace std;
int main()
{
	int year;int days;int month;
	cout<<"please input the yaer and month";
	cin>>year>>month;
	switch(month)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:days=31;break;
		case 4:case 6:case 9:case 11:days=30;break;
		case 2:
			if(year%4==0&&year%400==0&&year%100!=0)
			days=29;
			else days=28;
	}
	cout<<days<<endl;
	return 0;
}
