#include<iostream>
#include"arrStack.h"
using namespace std;  //

int main()
{
	arrayStack<int> s(8);

	for (int i = 0; i < 8; i++)
	{
		s.push(i);
	}
	cout << "栈的size：" << s.size() << endl;
	cout << "栈是否为空：" << s.empty() << endl;
	cout << "栈顶元素：" << s.top() << endl;

	
	cout << "依次出栈：" << endl;
	while (!s.empty())
	{
		cout << s.pop() << endl;
	}

	getchar();
	return 0;
	
}