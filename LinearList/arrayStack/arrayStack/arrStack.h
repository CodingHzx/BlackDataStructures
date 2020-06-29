#ifndef arrStack_H
#define arrStack_H


//构造、析构、个数、判空、清空、出栈、入栈、栈顶、

template<class T>
class arrayStack
{
public:
	// 构造函数
	arrayStack(int initialCapacity = 10)
	{
		lengthStack = initialCapacity;
		stack = new T[lengthStack];
		topStack = -1;
	}

	// 析构函数
	~arrayStack()
	{
		delete []stack;
	}

public:
	// 获取元素个数
	int size()const;

	// 判断是否为空
	bool empty()const;

	//清空栈
	void clear();

	// 入栈
	void push(T elem);  
	
	// 出栈
	T pop();

	// 获取栈顶元素
	T& top();

private:
	T *stack;           //创建一个存数据的数组
	int lengthStack;    //栈的最大容量
	int topStack;       //栈顶下标 范围[0~lengthStack-1]  栈为空：topStack = -1

};
template<class T>
int arrayStack<T>::size()const
{
	return topStack + 1;
}

template<class T>
bool arrayStack<T>::empty()const
{
	return topStack == -1;
}

template<class T>
void arrayStack<T>::clear()
{
	while(topStack != -1)
	{
		pop();
	}
}

template<class T>
void arrayStack<T>::push(T elem)
{
	stack[++topStack] = elem;   //先加，再运算
}

template<class T>
T arrayStack<T>::pop()
{
	if (topStack != -1)
	{
		return stack[topStack--];  //先运算，再减
	}
}

template<class T>
T& arrayStack<T>::top()
{
	return stack[topStack];
}

#endif // !arrStack_H
