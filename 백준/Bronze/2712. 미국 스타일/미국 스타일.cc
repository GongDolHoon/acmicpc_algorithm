#include <bits/stdc++.h>
using namespace std;

// 1 <= T <= 1000
int _t;

double _a;
string _b;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	cout << fixed;
	cout.precision(4);
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 각 테스트 케이스는 한 줄로 이루어져 있다.
		// I-2-1. 첫 번째 숫자는 값이고, 두 번째 등장하는 문자는 단위다. 
		cin >> _a >> _b;
		
		// O-1. 각 테스트 케이스에 대해서 바꾼 값과 단위를 출력한다.
		// 값은 반올림해서 소수점 4째자리까지 출력한다.
		// 단위는 kg, lb, l, g중 하나이며, 설명은 입력 설명에 있다. 	
		if(_b == "kg")
		{
			cout << _a * 2.2046 << " lb\n";
		}
		else if(_b == "lb")
		{
			cout << _a * 0.4536 << " kg\n";	
		}
		else if(_b == "l")
		{
			cout << _a * 0.2642 << " g\n";
		}
		else if(_b == "g")
		{
			cout << _a * 3.7854 << " l\n";
		}
	}
	
	return 0;
}