#include <bits/stdc++.h>
using namespace std;

// 0 <= a, b, c, d, e, n <= 9
int _n;
int _a, _b, _c, _d, _e;
int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// I-1. 첫 줄에는 날짜의 일의 자리 숫자가 주어지고
	cin >> _n;
	
	// I-2. 두 번째 줄에는 5대의 자동차 번호의 일의 자리 숫자가 주어진다.
	cin >> _a >> _b >> _c >> _d >> _e;
	
	if(_a == _n)
	{
		_ret++;
	}
	
	if(_b == _n)
	{
		_ret++;
	}
	
	if(_c == _n)
	{
		_ret++;
	}
	
	if(_d == _n)
	{
		_ret++;
	}
	
	if(_e == _n)
	{
		_ret++;
	}
	
	// O-1. 주어진 날짜와 자동차의 일의 자리 숫자를 보고 10부제를 위반하는 차량의 대수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}