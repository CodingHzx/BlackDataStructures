//C++抽象类

template <class T>
class linearList
{
public:
	virtual ~linearList(){};
	virtual bool empty() const = 0;                              //判断线性表空否
	virtual int size() const = 0;                                //返回元素个数
	virtual T& get(int theIndex) const = 0;                      //返回索引为**的元素
	virtual int indexOf(const T& theElement) const = 0;          //获取元素##的索引
	virtual void erase(int theIndex) = 0;                        //删除索引为**的元素
	virtual void insert(int theIndex, const T& theElement) = 0;  //将##元素插入到索引为**的位置。
	virtual void output(ostream& out) const = 0;

private:

	int theIndex;
	T& theElement;

};
