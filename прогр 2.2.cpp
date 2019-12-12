#include <iostream>
using namespace std;

int main()
{
	double a, b, c, AC, BC, S;
	cin >> a >> b >> c;
	AC = abs(a - c);
	BC = abs(b - c);
	S = AC + BC;
	cout << "AC=" << AC << endl;
	cout << "BC=" << BC << endl;
	cout << "AC+BC=" << S << endl;
	return 0;

}

