//determine two number are same or not
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	unsigned int num1=0;
	unsigned int num2=0;
	cout<<"Please input two positive integer numbers:"<<endl;
	cin>>num1>>num2;
	
	if (num1==num2)
	{
		cout<<"Two numbers are same."<<endl;
	}
	else
	{
		cout<<"Two numbers are NOT the same"<<endl;
	}
	system("pause");
	return 0;
}