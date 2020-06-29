#ifndef arrStack_H
#define arrStack_H


//���졢�������������пա���ա���ջ����ջ��ջ����

template<class T>
class arrayStack
{
public:
	// ���캯��
	arrayStack(int initialCapacity = 10)
	{
		lengthStack = initialCapacity;
		stack = new T[lengthStack];
		topStack = -1;
	}

	// ��������
	~arrayStack()
	{
		delete []stack;
	}

public:
	// ��ȡԪ�ظ���
	int size()const;

	// �ж��Ƿ�Ϊ��
	bool empty()const;

	//���ջ
	void clear();

	// ��ջ
	void push(T elem);  
	
	// ��ջ
	T pop();

	// ��ȡջ��Ԫ��
	T& top();

private:
	T *stack;           //����һ�������ݵ�����
	int lengthStack;    //ջ���������
	int topStack;       //ջ���±� ��Χ[0~lengthStack-1]  ջΪ�գ�topStack = -1

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
	stack[++topStack] = elem;   //�ȼӣ�������
}

template<class T>
T arrayStack<T>::pop()
{
	if (topStack != -1)
	{
		return stack[topStack--];  //�����㣬�ټ�
	}
}

template<class T>
T& arrayStack<T>::top()
{
	return stack[topStack];
}

#endif // !arrStack_H
