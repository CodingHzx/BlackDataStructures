#include<iostream>
#include"arrayQueue.h"

using namespace std;

int main()
{
	arrayQueue<int> aq(10);
	cout << "队列是否为空(若为 1 表明为空)：" << aq.empty() << endl;
	for (int i = 0; i < 10; i++)
	{
		aq.push(i);
	}
	cout << "队列是否为空：" << aq.empty() << endl;
	cout << "队列长度为：" << aq.size() << endl;
	cout << "队列的首元素为：" << aq.front() << endl;
	cout << "队列的尾元素为：" << aq.back() << endl;
	while (!aq.empty())
	{
		cout << aq.pop() << endl;
	}
	system("pause");
	return 0;

}