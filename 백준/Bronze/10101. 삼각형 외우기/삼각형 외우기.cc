#include <bits/stdc++.h>
using namespace std;

// 0 < _a, _b, _c < 180
int _a, _b, _c;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 총 3개의 줄에 걸쳐 삼각형의 각의 크기가 주어진다.
	cin >> _a >> _b >> _c;
	
	int total = _a + _b + _c;
	// O-1. 문제의 설명에 따라 Equilateral, Lsosceles, Scalene, Error 중 하나를 출력한다. 
	if(total != 180)
	{
		cout << "Error\n";
	}
	else
	{
		if(_a == _b && _b == _c)
		{
			cout << "Equilateral\n";
		}
		else if(_a == _b || _b == _c || _a == _c)
		{
			cout << "Isosceles\n";
		}
		else
		{
			cout << "Scalene\n";
		}
	}
	
	return 0;
}