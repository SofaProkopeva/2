#include <iostream>
using namespace std;

int main()
{
	int a, b, c, AC, BC, P;
	cin >> a >> b >> c;
	AC = abs(a - c);
	BC = abs(b - c);
	P = AC * BC;
	cout << "AC*BC=" << P << endl;
	return 0;
}

