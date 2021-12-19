#pragma once
#include "List.h"

template <typename T>
class Queue
{
private:

	List<T> list;

public:

	Queue();

	Queue(const Queue& other);

	Queue(Queue&& other);

	~Queue();

	int GetSize() const;

	void Push(const T& element);

	T Pop();

	T Peek() const;

	Queue& operator=(const Queue& other);
	Queue& operator=(Queue&& other);

	template<typename T>
	friend std::ostream& operator<< (std::ostream& os, const Queue<T>& obj);
};

template<typename T>
Queue<T>::Queue() { }

template<typename T>
Queue<T>::Queue(const Queue& other)
{
	list = other.list;
}

template<typename T>
Queue<T>::Queue(Queue&& other)
{
	list = std::move(other.list);
}

template<typename T>
Queue<T>::~Queue() {}

template<typename T>
int Queue<T>::GetSize() const
{
	return list.getsize();
}

template<typename T>
void Queue<T>::Push(const T& element)
{
	list.push_back(element);
}

template<typename T>
T Queue<T>::Pop()
{
	return list.pop_front();
}

template<typename T>
T Queue<T>::Peek() const
{
	return list.sel_el(0);
}

template<typename T>
Queue<T>& Queue<T>::operator=(const Queue<T>& other)
{
	if (this == &other)
	{
		return *this;
	}

	list.clear();

	list = other.list;
}

template<typename T>
Queue<T>& Queue<T>::operator=(Queue<T>&& other)
{
	if (this == &other)
	{
		return *this;
	}

	list.clear();

	list = std::move(other.list);
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Queue<T>& obj)
{
	for (size_t i = 0; i < obj.list.getsize(); i++)
	{
		os << obj.list.sel_el(i) << " ";
	}

	os << std::endl;

	return os;
}

