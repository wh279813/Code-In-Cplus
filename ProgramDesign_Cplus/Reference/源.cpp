#include<iostream>

using std::cout;
using std::endl;

int main()
{
	int i,&ri=i;
	i=5;
	ri=10;//此处ri作为对象而不是参考，被赋值
	cout<<i<<" "<<ri<<endl;
	system("pause");
	return 0;
}