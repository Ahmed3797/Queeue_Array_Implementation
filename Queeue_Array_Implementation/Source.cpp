#include<iostream>
#include<conio.h>
using namespace std;

class Queue
{
	int F, R, noe, size;
	int* A;
public:
	Queue(int s)
	{
		F = -1;
		R = -1;
		noe = 0;
		size = s;
		A = new int(size);
	}
	void Enqueue(int data)
	{
		R = (R + 1) % size;
		cout << R << endl;

		A[R] = data;
		if (F == -1)
		{
			F = 0;
		}
	}
	int Dequeu()
	{

		int temp = A[F];
		F = (F + 1) % size;
		noe--;
		return temp;
	}
	~Queue()
	{
		delete A;
	}
};
	

int main()
{
	Queue* obj = new Queue(10);


	obj->Enqueue(4);
	obj->Enqueue(12);
	obj->Enqueue(11);
	obj->Enqueue(3);


	cout << obj->Dequeu() << endl;
	cout << obj->Dequeu() << endl;

	//cout << 6 % 5 << endl;
	//cout << 1 % 5 << endl;
	//cout << 2 % 5 << endl;


	return 0;
}