#include <bits/stdc++.h>
using namespace std;

// 1 <= A, B, C <= 100 
int _a, _b, _c;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 정인이가 적어준 세 정수가 주어진다.
	cin >> _a >> _b >> _c;
	
	// O-1. 첫째 줄에 정인이가 원래 적어준 등식을 출력한다.
	if(_a == _b + _c)
	{
		cout << _a << '=' << _b << '+' << _c << '\n';
	}
	else if(_a == _b - _c)
	{
		cout << _a << '=' << _b << '-' << _c << '\n';
	}
	else if(_a == _b / _c)
	{
		cout << _a << '=' << _b << '/' << _c << '\n';
	}
	else if(_a == _b * _c)
	{
		cout << _a << '=' << _b << '*' << _c << '\n';
	}
	else if(_a + _b == _c)
	{
		cout << _a << '+' << _b << '=' << _c << '\n';
	}
	else if(_a - _b == _c)
	{
		cout << _a << '-' << _b << '=' << _c << '\n';
	}
	else if(_a * _b == _c)
	{
		cout << _a << '*' << _b << '=' << _c << '\n';
	}
	else if(_a / _b == _c)
	{
		cout << _a << '/' << _b << '=' << _c << '\n';
	}
	
	return 0;
}