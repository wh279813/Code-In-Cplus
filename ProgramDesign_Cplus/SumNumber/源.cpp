#include<iostream>
using std::cout;
using std::endl;

int main()
{
	int num=50,sum=0;
	while (num<=100)
	{
		sum=num+sum;
		num=num+1;
	}
	cout<<sum<<endl;
	system("pause");
	return 0;

}