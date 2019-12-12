#include <iostream>
using namespace std;

int main()
{
	int x1, y1, x2, y2, P, S;
	cin >> x1 >> y1 >> x2 >> y2;
	P = (abs(x1 - x2) + abs(y1 - y2)) * 2;
	S = (abs(x1 - x2) * abs(y1 - y2));
	cout << "P=" << P << endl;
	cout << "S=" << S << endl;
	return 0;
}

