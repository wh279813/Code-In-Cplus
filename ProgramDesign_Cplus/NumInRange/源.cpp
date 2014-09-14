#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int min=0,max=0;
	cout<<"Give to min integer:"<<endl;
	cin>>min;
	cout<<"Give to max integer:"<<endl;
	cin>>max;
	while (min<=max)
	{
		cout<<min<<" ";
		min++;
	}
	system("pause");
	return 0;
}
