#include <iostream>
using namespace std;

int main() {
	int a;
	//cout<<"enter the value:"<<endl;
	cin>>a>>endl;
	if(a<0)
	{
		cout<<"negative";
	}
	else if(a>0)
	{
		cout<<"positive";
	}
	else if(a=0)
	{
		cout<<"equal to zero";
	}
	else
	{
		cout<<"others";
	}
	return 0;
}
