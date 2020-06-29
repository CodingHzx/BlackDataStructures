template<class T>
struct chainNode
{
	//数据成员 
	T element;
	chainNode<T>* next;

	//操作运算
	chainNode(){}
	chainNode(const T& element){ this->element = element; }
	chainNode(const T& element, chainNode<T>* next){ this->element = element; this->next = next; }

};

template<class T>
class chain : public linearList<T>
{
public:
	chain(int initialCapacity = 10);
	chain(const chain<T>& theList);
	~chain();

	bool empty()const{ return listSize == 0; }
	int size()const { return listSize; }
	T& get(int theIndex)const;


protected:
	chainNode<T>* firstNode;
	int listSize;

};

template<class T>
chain<T>::chain()
{
}

template<class T>
chain<T>::~chain()
{
	while (firstNode != NULL)
	{
		chainNode<T>* nextNode = firstNode->next;
		delete firstNode;
		firstNode = nextNode;
	}
}