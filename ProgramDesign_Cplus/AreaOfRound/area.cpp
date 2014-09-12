#include<iostream>
#include<iomanip>
#define PI 3.141592653

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;

//The method to control the number of digits of output,
//is using the <iomanip> header file.('setprecision()')
int main()
{
	cout<<"Please input the radius:"<<endl;
	int radius=0;
	cin>>radius;
	cout<<"Please input the number of digits:"<<endl;
	int numb=0;
	cin>>numb;
	cout<<"The area of the round is ";
	cout<<setprecision(numb)<<PI*radius*radius<<endl;
	system("pause");
	return 0;
}
