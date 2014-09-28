//Input a decimal number,convert it to binary,use ~ operation to the last bit(0-->1 or 1-->0),then output the number in decimal.
//Tips:Use mask
//但是输入的十进制如何转换为二进制来进行位运算？
//定义mask的时候的长度怎么确定？
#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	unsigned char bits=0233;
	
	cout<<"bits="<<bits<<endl;
	system("pause");
	return 0;
}