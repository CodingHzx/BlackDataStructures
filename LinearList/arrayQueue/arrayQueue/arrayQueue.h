#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

//������ѭ�����У�Ϊ�����ж϶��п�/�����࿪��һ���ռ䡣
//�пա����ȡ���Ԫ�ء�βԪ�ء����ӡ����
template<class T>
class arrayQueue
{
public:
	
	//���캯��
	arrayQueue(int size = 10)
	{
		queueSize = size + 1;   //�ڶ�β�����һ���ռ䣬���ڷ����ж϶��п�/��
		queue = new T[queueSize];
		theFront = theBack = 0;
	}
	
	//��������
	~arrayQueue()
	{
		delete[]queue;
	}
	
	//�ж�Ϊ��
	bool empty();
	
	//��ȡ���г���
	int size();
	
	//���ض�����Ԫ��
	T& front();
	
	//���ض���βԪ��
	T& back();
	
	//������
	T pop();
	
	//�����
	void push(const T& theElement);

private:
	int queueSize;
	int theFront;
	int theBack;
	T* queue;
};
template<class T>
bool arrayQueue<T>::empty(){
	return (theFront == theBack);
}

template<class T>
int arrayQueue<T>::size(){
	return ((theBack - theFront + queueSize) % queueSize);
}

template<class T>
T& arrayQueue<T>::front(){
	if (theFront != theBack)
	{
		return queue[theFront];
	}
}
template<class T>
T& arrayQueue<T>::back(){
	return queue[theBack-1];
}

template<class T>
T arrayQueue<T>::pop(){
	if (theFront == theBack)
	{
		cout << "�����ѿա�" << endl;
	}
	T temp = queue[theFront];
	queue[theFront] = NULL;
	theFront = (theFront + 1) % queueSize;
	return temp;
}

template<class T>
void arrayQueue<T>::push(const T& theElement){
	if ((theBack + 1) % queueSize == theFront)
	{
		cout << "����������" << endl;
	}
	queue[theBack] = theElement;
	theBack = (theBack + 1) % queueSize;
}
#endif ARRAYQUEUE_H