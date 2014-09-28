#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int integerNum;
	cout<<"Input the integer:"<<endl;
	cin>>integerNum;
	double doubleNum=integerNum;
	double reciprocal=1/doubleNum;
	cout<<"The reciprocal is "<<reciprocal<<endl;
	system("pause");
	return 0;
}