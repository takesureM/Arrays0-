#include <iostream>
using namespace std;
class Array 
{
public:
	Array()
	{
		this->MaxSize = 20;
		this->size = 0;

		void read_Array();
		void display();
		void insert(int element, int location);
		void Delete(int location);
		void search(int element);
	}
private:
	int MaxSize;
	int A[20];
	int size;
};
int main()
{
	cout << "Hello world\n";

	return 0;
}
