#include <iostream>
using namespace std;
int add( int ,int,int=0);
int main()
{
	int a,b,c;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	cout<<"sum is"<<add(a,b);
	cout<<"enter three numbers"<<endl;
	cin>>a>>b>>c;
	cout<<"sum is"<<add(a,b,c);
	
	return 0;
}
int add(int x,int y,int z)
{ int sum;
sum=x+y+z;
return sum;


}
