#include<iostream>

using std::cout;
using std::endl;

int main()
{
	int i,&ri=i;
	i=5;
	ri=10;//�˴�ri��Ϊ��������ǲο�������ֵ
	cout<<i<<" "<<ri<<endl;
	system("pause");
	return 0;
}