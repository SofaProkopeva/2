#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, y1, y2, x, y, r;
	cin >> x1 >> y1 >> x2 >> y2;
	x = abs(x1 - x2);
	y = abs(y1 - y2);
	r = sqrt(x * x + y * y);
	cout << "Расстояние между точками =" << r << endl;
	return 0;
}

