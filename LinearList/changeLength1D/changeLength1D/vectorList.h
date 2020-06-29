#include<vector>

template<class T>
class vectorList : public linearList<T>
{
public:
	vectorList(int initialCapacity = 10);
	vectorList(const vectorList<T>& );
	~vectorList(){delete element};

	bool empty() const{ return element->empty(); }
	int size() const{ return (int)element->size(); }
	T& get(int theIndex)const;
	int indexOf(const T& theElement)const;
	void earse(int theIndex);
	void insert(int theIndex, const T& theElement);
	void output(ostream& out)const;
	int capacity()const{ return (int)element->capacity(); }

	typedef typename vector<T>::iterator iterator;
	iterator begin(){ return element->begin(); }
	iterator end() { return element->end(); }

protected:
	void checkIndex(int theIndex)const;
	vector<T>* element;
};

template<class T>
vectorList<T>::vectorList(int initialCapacity)
{
	element = new vector<T>;
	element->reverse(initialCapacity);
}

template<class T>
vectorList<T>::vectorList(const vectorList<T>& theList)
{
	element = new vectorList<T>(*theList.element);
}
template<class T>
vectorList<T>::~vectorList()
{
}