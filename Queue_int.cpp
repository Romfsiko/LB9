#include "Queue_int.h"

Queue_int::Queue_int() { }

Queue_int::Queue_int(const Queue_int& other)
{
	list = other.list;
}

Queue_int::~Queue_int() {}

int Queue_int::GetSize() const
{
	return list.getsize();
}

void Queue_int::Push(const int& element)
{
	list.push_back(element);
}

int Queue_int::Pop()
{
	return list.pop_front();
}

int Queue_int::Peek() const
{
	return list.sel_el(0);
}

Queue_int& Queue_int::operator=(const Queue_int& other)
{
	if (this == &other)
	{
		return *this;
	}

	list.clear();

	list = other.list;

}

std::ostream& operator<<(std::ostream& os, const Queue_int& obj)
{
	for (size_t i = 0; i < obj.list.getsize(); i++)
	{
		os << obj.list.sel_el(i) << " ";
	}

	os << std::endl;

	return os;
}
