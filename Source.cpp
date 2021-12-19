#include <iostream>
#include "Queue.h"
#include "Queue_int.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	Queue<int> q;
	q.Push(2);
	q.Push(6);
	q.Push(8);
	q.Push(1);

	cout << q;

	cout << "Первый элемент : " << q.Peek() << "; число элементов в очереди : " << q.GetSize() << endl;

	Queue_int q_i;
	q_i.Push(2);
	q_i.Push(6);
	q_i.Push(8);
	q_i.Push(1);

	cout << q_i;

	cout << "Первый элемент : " << q_i.Peek() << "; число элементов в очереди : " << q_i.GetSize() << endl;


	return 0;
}
