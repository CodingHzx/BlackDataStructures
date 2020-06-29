//C++抽象类的派生类的定义。

template <class T>
class arrayList : public linearList<T>
{
public:
	arrayList(int initialCapacity = 10);    //构造函数
	arrayList(const arrayList<T>&);        //复制构造函数
	~arrayList()                            //析构函数
	{
		delete[] element;
	}

	bool empty()const
	{
		return listSize == 0;
	}

	int size() const { return listSize; }

	T& get(int theIndex) const;

	int indexOf(const T& theElement)const;

	void erase(int theIndex);

	void insert(int theIndex, const T& theElement);

	void output(ostream& out)const;

	int capacity() const{ return arrayLength; }


protected:
	T* element;       //存储线性表的一维数组
	int arrayLength;   //一维数组的容量
	int listSize;      //一维数组的个数

};

template <class T>
arrayList<T>::arrayList(int initialCapacity)   
{ //构造函数，
	arrayLength = initialCapacity;
	element = new T[arrayLength];
	listSize = 0;
}

template <class T>
arrayList<T>::arrayList(const arrayList<T>& theList)
{ //复制构造函数，
	arrayLength = theList.arrayLength;
	listSize = theList.listSize;
	element = new T[arrayLength];
	copy(theList.element, theList.element + listSize, element);

}
	

