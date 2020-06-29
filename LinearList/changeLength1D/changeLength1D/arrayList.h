//C++�������������Ķ��塣

template <class T>
class arrayList : public linearList<T>
{
public:
	arrayList(int initialCapacity = 10);    //���캯��
	arrayList(const arrayList<T>&);        //���ƹ��캯��
	~arrayList()                            //��������
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
	T* element;       //�洢���Ա��һά����
	int arrayLength;   //һά���������
	int listSize;      //һά����ĸ���

};

template <class T>
arrayList<T>::arrayList(int initialCapacity)   
{ //���캯����
	arrayLength = initialCapacity;
	element = new T[arrayLength];
	listSize = 0;
}

template <class T>
arrayList<T>::arrayList(const arrayList<T>& theList)
{ //���ƹ��캯����
	arrayLength = theList.arrayLength;
	listSize = theList.listSize;
	element = new T[arrayLength];
	copy(theList.element, theList.element + listSize, element);

}
	

