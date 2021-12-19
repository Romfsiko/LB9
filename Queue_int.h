#pragma once
#include "List.h"

class Queue_int
{
private:

	List<int> list;

public:

	Queue_int();

	Queue_int(const Queue_int& other);

	template<typename T> Queue_int(Queue_int&& other);

	~Queue_int();

	int GetSize() const;

	void Push(const int& element);

	int Pop();

	int Peek() const;

	Queue_int& operator=(const Queue_int& other);
	template<typename T> Queue_int& operator=(Queue_int&& other);

	friend std::ostream& operator<< (std::ostream& os, const Queue_int& obj);
};

template<typename T>
Queue_int::Queue_int(Queue_int&& other)
{
	list = std::move(other.list);
}

template<typename T>
Queue_int& Queue_int::operator=(Queue_int&& other)
{
	if (this == &other)
	{
		return *this;
	}

	list.clear();

	list = std::move(other.list);

}
