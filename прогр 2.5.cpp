﻿#include <iostream>
using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3, P, S, a, b, c, p;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	P = a + b + c;
	p = P / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "P=" << P << endl;
	cout << "S=" << S << endl;
	return 0;
}

