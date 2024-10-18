#include <iostream>?
#include "point.h"

using namespace std;

int main()
{
	srand(time(0));

	point obj1;
	obj1.Init();
	obj1.Output();

	point obj2(10, 20, 30);
	obj2.Output();

}
