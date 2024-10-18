#pragma once
class point
{
	int x;
	int y;
	int z;
public:
	point();
	point(int x1, int y1, int z1);
	void Init();
	void Init(int x1, int y1, int z1);
	void Output();
};
