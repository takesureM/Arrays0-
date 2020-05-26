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
