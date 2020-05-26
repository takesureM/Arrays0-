#include <iostream>
using namespace std;

class Array 
{
public:
	Array()
	{
		this->MaxSize = 20;
		this->size = 0;
	}

	void read_Array();
	void display();
	void insert(int element, int location);
	void Delete(int location);
	void search(int element);

private:
	int MaxSize;
	int A[20];
	int size;
};

void Array::read_Array()
{
	int i, N;
	cout<<"Enter the size of your array:\n";
	cin>>N;
	if(N > MaxSize)
	{
		cout << "SORRY the size is:";
	}
}
int main()
{
	cout << "Hello world\n";

	return 0;
}
