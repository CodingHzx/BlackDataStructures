#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

//本质是循环队列，为方便判断队列空/满，多开辟一个空间。
//判空、长度、首元素、尾元素、出队、入队
template<class T>
class arrayQueue
{
public:
	
	//构造函数
	arrayQueue(int size = 10)
	{
		queueSize = size + 1;   //在队尾多分配一个空间，用于方便判断队列空/满
		queue = new T[queueSize];
		theFront = theBack = 0;
	}
	
	//析构函数
	~arrayQueue()
	{
		delete[]queue;
	}
	
	//判断为空
	bool empty();
	
	//获取队列长度
	int size();
	
	//返回队列首元素
	T& front();
	
	//返回队列尾元素
	T& back();
	
	//出队列
	T pop();
	
	//入队列
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
		cout << "队列已空。" << endl;
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
		cout << "队列已满。" << endl;
	}
	queue[theBack] = theElement;
	theBack = (theBack + 1) % queueSize;
}
#endif ARRAYQUEUE_H