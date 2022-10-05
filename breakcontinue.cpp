#include<iostream>
using namespace std;
int main()
{
	int date,pocketmoney;
	pocketmoney=3000;
	for(date=1;date<=30;date++)
	{
		if( date%2==0){
			continue;
		}
		if (pocketmoney==0){
			break;
		}
		
		cout<<"you can go out today"<<endl;
		pocketmoney= pocketmoney- 300;
		
	}
	return 0;
}
