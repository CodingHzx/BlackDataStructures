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
	cout << "ջ��size��" << s.size() << endl;
	cout << "ջ�Ƿ�Ϊ�գ�" << s.empty() << endl;
	cout << "ջ��Ԫ�أ�" << s.top() << endl;

	
	cout << "���γ�ջ��" << endl;
	while (!s.empty())
	{
		cout << s.pop() << endl;
	}

	getchar();
	return 0;
	
}