#include<iostream>
#include"arrayQueue.h"

using namespace std;

int main()
{
	arrayQueue<int> aq(10);
	cout << "�����Ƿ�Ϊ��(��Ϊ 1 ����Ϊ��)��" << aq.empty() << endl;
	for (int i = 0; i < 10; i++)
	{
		aq.push(i);
	}
	cout << "�����Ƿ�Ϊ�գ�" << aq.empty() << endl;
	cout << "���г���Ϊ��" << aq.size() << endl;
	cout << "���е���Ԫ��Ϊ��" << aq.front() << endl;
	cout << "���е�βԪ��Ϊ��" << aq.back() << endl;
	while (!aq.empty())
	{
		cout << aq.pop() << endl;
	}
	system("pause");
	return 0;

}