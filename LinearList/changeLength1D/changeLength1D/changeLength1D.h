
// 改变一维数组的长度。
template <class T>
void changeLength1D(T*& a, int oldLength, int newLength)
{
	T* temp = new T[newLength];
	int number = min(oldLength, newLength);
	copy(a, a + number, temp);
	delete[]a;
	a = temp;
}


