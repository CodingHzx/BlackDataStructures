//C++������

template <class T>
class linearList
{
public:
	virtual ~linearList(){};
	virtual bool empty() const = 0;                              //�ж����Ա�շ�
	virtual int size() const = 0;                                //����Ԫ�ظ���
	virtual T& get(int theIndex) const = 0;                      //��������Ϊ**��Ԫ��
	virtual int indexOf(const T& theElement) const = 0;          //��ȡԪ��##������
	virtual void erase(int theIndex) = 0;                        //ɾ������Ϊ**��Ԫ��
	virtual void insert(int theIndex, const T& theElement) = 0;  //��##Ԫ�ز��뵽����Ϊ**��λ�á�
	virtual void output(ostream& out) const = 0;

private:

	int theIndex;
	T& theElement;

};
