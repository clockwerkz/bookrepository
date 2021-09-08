#ifndef SWAPPER_H
#define SWAPPER_H

template <class T>
class Swapper {
	public: 
		Swapper(T first, T second);
		void Swap();
		T GetFirst() const;
		T GetSecond() const;
	private:
		T first;
		T second;
};

template <class T>
Swapper<T>::Swapper(T first, T second) : first(first), second(second) {};

template <class T>
void Swapper<T>::Swap() {
	T temp = first;
	first = second;
	second = temp;
};

template <class T>
T Swapper<T>::GetFirst() const {
	return first;
};

template <class T>
T Swapper<T>::GetSecond() const {
	return second;
};

#endif