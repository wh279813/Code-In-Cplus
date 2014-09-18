#include<iostream>
using std::cin;
using std::cout; 
using std::endl;

//Now I don't know the number of input,but I need allocate a variable for each input integer.
//Solution:'while(cin>>num)',bring the 'cin' into condition of 'while'
int main()
{
	int sum=0,num=0;
	while (cin>>num)
		sum+=num;
	cout<<"The sum of the numbers is "<<sum<<endl;
	system("pause");
	return 0;
}