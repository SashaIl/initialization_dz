#include <iostream>
#include "String.h"
using namespace std;

int main()
{
	char* example{ new char[6] {"Hello"} };
	String str(example);
	//delete[] example;
	cout << str.get_count();
}
