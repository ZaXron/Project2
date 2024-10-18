#include "point.h"
#include<iostream>
using namespace std;

point::point()
{
	cout << "Construct\n";
	x = y = z = 0;
}

point::point(int x1, int y1, int z1)
{
	cout << "Construct by 3 param\n";
	x = x1;
	y = y1;
	z = z1;
}
void point::Init(int x1, int y1, int z1)
{
	x = x1;
	y = y1;
	z = z1;
}
void point::Init()
{
	x = rand() % 10;
	y = rand() % 10;
	z = rand() % 10;
}
void point::Output()
{
	cout << "X: " << x << "\tY: " << y << "\tZ:" << z << endl;

}