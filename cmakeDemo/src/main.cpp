#include <iostream>
#include "main.h"
#include "lib_demo.h"
 
using namespace std;
 
int main()
{
	print_project_msg();
 
	lib_demo();
 
	return 0;
}
 
void print_project_msg()
{
	cout << "################ CMake Project Demo ################" << endl;
}
