#include <iostream>
#include <fstream>
using namespace std;

class Array 
{
public:
	Array()
	{
		this->MaxSize = 20;
		this->size = 0;m,mv,bm,cmb,mb
	}

	void read_Array();
	void display();
    void Traversay_back();
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
		cout << "SORRY the size is:"<<MaxSize;
		exit();
	}
	for (i = 0; i < MaxSize; i++)
	{
		cin >> A[i];
	}
	size = N;
}

void Array::Display()
{
    cout << "elements in the Array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << A[i];
    }
}

void Array::Traversary_back()
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << A[i] << '\t';

    }
}

void Array::insert(int location, int element)
{
    for (int i = size - 1; i >= location - 1; i--)
    {
        A[i + 1] = A[i];
    }
    A[location - 1] = element;
    size++; // size = size + 1 or size += 1;

    for (int i = 0; i < size; i++)
    {
        cout << A[i];
    }
}

void Array::Delete(int location)
{
    for (int i = location; i < size - 1; i++)
    {
        A[i - 1] = A[i];
    }
    A[location - 1] = 0;
    size--;

    for (int i = 0; i < size; i++)
    {
        cout << A[i];
    }
}

int Array::search(int element)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (element == A[i])
        {
            return(i);
        }
        return(-1);
    }
}


void
int main()
{
	cout << "Hello world\n";

    ifstream inputFile;
    ofstream outputFile;

	return 0;
}
